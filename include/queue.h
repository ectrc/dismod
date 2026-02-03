#ifndef DISMOD_QUEUE_H
#define DISMOD_QUEUE_H

#include <queue>
#include <mutex>
#include <condition_variable>

template <typename T>
class ThreadSafeQueue {
public:
    ThreadSafeQueue() {

    }

    void push(T value) {
        {
            std::lock_guard<std::mutex> lock(mutex_);
            queue_.push(std::move(value));
        }
        cond_.notify_one();
    }

    T pop() {
        std::unique_lock<std::mutex> lock(mutex_);
        cond_.wait(lock, [this] {
            return !queue_.empty();
        });

        T value = std::move(queue_.front());
        queue_.pop();
        return value;
    }

    bool try_pop(T& value) {
        std::lock_guard<std::mutex> lock(mutex_);
        if (queue_.empty())
            return false;

        value = std::move(queue_.front());
        queue_.pop();
        return true;
    }

    bool empty() const {
        std::lock_guard<std::mutex> lock(mutex_);
        return queue_.empty();
    }

    std::vector<T> handle() {
        std::lock_guard<std::mutex> lock(mutex_);
        std::vector<T> snapshot;
        snapshot.reserve(queue_.size());

        while (!queue_.empty()) {
            snapshot.push_back(std::move(queue_.front()));
            queue_.pop();
        }

        return snapshot;
    }

private:
    mutable std::mutex mutex_;
    std::queue<T> queue_;
    std::condition_variable cond_;
};

#endif