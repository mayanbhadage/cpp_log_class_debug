#include <iostream>

class Log
{
public:

    //Enum : for making code more readable.
    enum Level{
        Warn,Error,Info
    };

    //const int logLevelInfo = 2;
    //const int logLevelError = 1;
    //const int logLevelWarn = 0;
private:
    Level m_logLevel = Info; // Restricts m_logLevel to be from 3 values only
public:

    void setLogLevel(Level level)
    {
        m_logLevel = level;
    }
    void logInfo(const char *message)
    {
        if (m_logLevel >= Info)
        std::cout<<"\x1B[34m[Info]\033[0m  : " << message <<std::endl;
    }
    void logError(const char *message)
    {
        if (m_logLevel >= Error)
        std::cout<<"\x1B[31m[Error]\033[0m : " << message <<std::endl;
    }
    void logWarn(const char *message)
    {
        if (m_logLevel >= Warn)
        std::cout<<"\x1B[33m[Warning]\033[0m : " << message <<std::endl;
    }

};
int main() {
    std::cout << "Hello, This is Log Class!" << std::endl;

    Log log;

    //log.setLogLevel(log.logLevelError); //Set Log Level
    log.logError("Hello World");
    log.logInfo("Hello World");
    log.logWarn("Hello World");

    return 0;
}