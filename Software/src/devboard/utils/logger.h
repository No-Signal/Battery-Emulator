#ifndef __LOGGER_H__
#define __LOGGER_H__

enum log_level { OFF = 0, Errors = 1, Warnings = 2, Info = 3 };

class Logger {
    public: log_level loglevel = log_level::Info;
    public: bool serialEnabled = false;
    public: bool webSerialEnabled = false;

    Logger(log_level level, bool serialEnabled, bool webSerialEnabled) {
        this->loglevel = loglevel;
        this->serialEnabled = serialEnabled;
        this->webSerialEnabled = webSerialEnabled;
    }

    void LogInfo(const char *message);
    void LogInfoln(const char *message);
    void LogWarning(const char *message);
    void LogWarningln(const char *message);
    void LogError(const char *message);
    void LogErrorln(const char *message);
    void Log(log_level level, const char *message);
    void Logln(log_level level, const char *message);
};

#endif  // __LOGGER_H__