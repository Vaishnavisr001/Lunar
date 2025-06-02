#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>

using namespace std;

enum LoggingLevel {
    INFO,
    DEBUG,
    WARNING,
    ERROR,
};

class Packet {
    int packetId;
    string protocol;
    int size;
public:
    void setId(int id) { packetId = id; }
    void setProtocol(string p) { protocol = p; }
    void setSize(int s) { size = s; }

    int getId() { return packetId; }
    string getProtocol() { return protocol; }
    int getSize() { return size; }

    void display() {
        cout << "ID: " << packetId << " | Protocol: " << protocol << " | Size: " << size << " bytes\n";
    }
};

class Logger {
    ofstream outFile;
public:
    Logger(const char* filename) {
        outFile.open(filename);
        if (!outFile.is_open()) {
            cout << "Unable to open log file." << endl;
            exit(1);
        }
    }

    const char* getLevel(int level) {
        switch (level) {
        case INFO: return "INFO";
        case DEBUG: return "DEBUG";
        case WARNING: return "WARNING";
        case ERROR: return "ERROR";
        default: return "UNKNOWN";
        }
    }

    void log(int level, const string& message) {
        outFile << "[" << getLevel(level) << "] " << message << endl;
    }
};

class Queue {
    vector<Packet> packets;
public:
    void loadPacket(Logger& log) {
        ifstream inFile("packets.txt");
        if (!inFile.is_open()) {
            log.log(ERROR, "Cannot open packets.txt");
            return;
        }

        string line;
        int count = 0;
        while (getline(inFile, line)) {
            istringstream ss(line);
            int id, size;
            string proto;
            if (ss >> id >> proto >> size) {
                Packet p;
                p.setId(id);
                p.setProtocol(proto);
                p.setSize(size);
                packets.push_back(p);
                count++;
            }
            else {
                log.log(ERROR, "Malformed line: " + line);
            }
        }

        log.log(INFO, "Loaded " + to_string(count) + " packets.");
    }

    void filterByProtocol(string proto, Logger& log) {
        for (auto& p : packets) {
            if (p.getProtocol() == proto) {
                p.display();
                log.log(DEBUG, "Packet " + to_string(p.getId()) + " | " + proto + " | " + to_string(p.getSize()) + " bytes");
            }
        }
    }

    void detectLargePackets(Logger& log) {
        for (auto& p : packets) {
            if (p.getSize() > 1000) {
                p.display();
                log.log(WARNING, "Packet " + to_string(p.getId()) + " | " + p.getProtocol() + " | " + to_string(p.getSize()) + " bytes");
            }
        }
    }

    void exportLog(Logger& log) {
        for (auto& p : packets) {
            string msg = "Packet ID: " + to_string(p.getId()) + " | Protocol: " + p.getProtocol() + " | Size: " + to_string(p.getSize());
            if (p.getSize() > 1000)
                log.log(WARNING, msg);
            else
                log.log(DEBUG, msg);
        }
        log.log(INFO, "Export completed.");
    }
};

int main() {
    Queue q;
    Logger logger("netmon_log.txt");

    cout << "==== NetMon Packet Monitor ====\n";
    cout << "1. Load Packet Data\n";
    cout << "2. Filter by protocol\n";
    cout << "3. Check for Large Packets\n";
    cout << "4. Export Logs\n";
    cout << "5. Exit\n";

    while (true) {
        int choice;
        cout << "> ";
        cin >> choice;

        if (choice == 1) {
            q.loadPacket(logger);
        }
        else if (choice == 2) {
            string proto;
            cout << "Enter protocol: ";
            cin >> proto;
            q.filterByProtocol(proto, logger);
        }
        else if (choice == 3) {
            q.detectLargePackets(logger);
        }
        else if (choice == 4) {
            q.exportLog(logger);
        }
        else if (choice == 5) {
            cout << "Exiting NetMon..." << endl;
            break;
        }
        else {
            cout << "Invalid option. Try again." << endl;
        }
    }

    return 0;
}