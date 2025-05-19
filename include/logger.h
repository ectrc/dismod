#ifndef LOGGER_H
#define LOGGER_H

#include <windows.h>
#include <format>
#include <iostream>
#include <mutex>
#include <fstream>

class logger {
public:
  logger() {
    AllocConsole();
    freopen_s(reinterpret_cast<FILE **>(stdout), "CONOUT$", "w", stdout);

    {
      std::lock_guard lock{log_mutex};
      log_file.open("C:\\Users\\User\\Desktop\\asd\\dismod.log", std::ios::out | std::ios::app);
    }
  }

  ~logger() {
    log_file.close();
  }

  template<class ...Args>
  static auto log(std::format_string<Args...> fmt, Args &&...args) -> void {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    std::cout << std::format(fmt, std::forward<Args>(args)...) << '\n';
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    {
      std::lock_guard lock{log_mutex};
      log_file << std::format(fmt, std::forward<Args>(args)...) << '\n';
      log_file.flush();
    }
  }

  template<class ...Args>
  static auto log(std::wformat_string<Args...> fmt, Args &&...args) -> void {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    std::wcout << std::format(fmt, std::forward<Args>(args)...) << '\n';
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    {
      std::lock_guard lock{log_mutex};
      log_file << std::format(fmt, std::forward<Args>(args)...) << '\n';
      log_file.flush();
    }
  }

  static auto clear_console() -> void {
    system("cls");
  }

private:
  static inline std::ofstream log_file;
  static inline std::mutex log_mutex;
};

namespace globals {
  inline auto logger_instance = std::make_unique<logger>();
}

#define LOG(...) ::globals::logger_instance->log(__VA_ARGS__)
#define LOG_W(...) ::globals::logger_instance->log(__VA_ARGS__)
#define CLEAR_CONSOLE() ::globals::logger_instance->clear_console();
#define CLEANUP_LOGGER() ::globals::logger_instance.reset(); return true;

#endif