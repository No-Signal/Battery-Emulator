#include "logger.h"
#include "../../lib/ayushsharma82-WebSerial/src/WebSerial.h"

void Logger::LogInfo(const char *message) {
  Log(log_level::Info, message);
}

void Logger::LogInfoln(const char *message) {
  Logln(log_level::Info, message);
}

void Logger::LogWarning(const char *message) {
  Log(log_level::Warnings, message);
}

void Logger::LogWarningln(const char *message) {
  Logln(log_level::Warnings, message);
}

void Logger::LogError(const char *message) {
  Log(log_level::Errors, message);
}

void Logger::LogErrorln(const char *message) {
  Logln(log_level::Errors, message);
}

void Logger::Log(log_level level, const char *message) {

  if(loglevel < level){
    return;
  }

  if(serialEnabled){
    Serial.print(message);
  }

  if(webSerialEnabled){
    WebSerial.print(message);
  }
}

void Logger::Logln(log_level level, const char *message) {
  
  if(loglevel < level){
    return;
  }

  if(serialEnabled){
    Serial.println(message);
  }

  if(webSerialEnabled){
    WebSerial.println(message);
  }
}