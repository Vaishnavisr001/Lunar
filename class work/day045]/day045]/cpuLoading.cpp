#include <iostream>
#include <fstream>
#include <string>
#include <queue>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;


class Task {
public:
    string name;
    int load;

    Task(string n, int l) : name(n), load(l) {}
    
};


class TaskManager {
private:
    queue<Task> tasks;
    mutex mtx;

public:
    
    bool loadFromFile(string filename, int& cpuCount) {
        ifstream file(filename);
        if (!file.is_open()) {
            cout << "Cannot open file\n";
            return false;
        }

        string line;

        
        if (getline(file, line)) {
            size_t colonPos = line.find(':');
            if (colonPos == string::npos)  
                return false;
            cpuCount = stoi(line.substr(colonPos + 1));
        }

        
        while (getline(file, line)) {
            if (line.empty()) 
                continue;

            int colonPos = line.find(':');
            if (colonPos >= line.size()) 
                continue;

            int loadPos = line.find("Load");
            if (loadPos >= line.size())
                continue;

            string name = line.substr(0, colonPos);
            int load = stoi(line.substr(loadPos + 5));
            tasks.push(Task(name, load));
        }

        file.close();
        return true;
    }

    