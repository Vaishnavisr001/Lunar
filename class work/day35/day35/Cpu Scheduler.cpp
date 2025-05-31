#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//define Logger first
enum LogLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};
class Logger {//create class for logger
    vector <string> logs;
public:
    void log(LogLevel level, const std::string& message)
    {
        string tag;
        switch (level) {
        case DEBUG: tag = "DEBUG";
            break;
        case INFO: tag = "INFO ";
            break;

        case WARNING: tag; "WARN ";
            break;
        case ERROR: tag;"ERROR";
            break;
        default: tag = "UNKNOWN";
            break;
        }

    };
    class job {
    public:
        int JobId;
        int executionTime;
        int priority;

    job(int Id, int time, int pri) {
        JobId = Id;

        

};