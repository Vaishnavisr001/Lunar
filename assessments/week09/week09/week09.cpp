#include<iostream>
#include<ctime>
#include<fstream>
#include<sstream>
#include<string>
#include<unordered_map>
using namespace std;
enum  logLevel {
	INFO,WARNING,ERROR,DEBUG
};
class logger {
private:
	ofstream logFile;
	string LevelToString(logLevel level) {
		switch (level) {
		case INFO:
			return "info";
		case DEBUG:
			return "debug";
		case WARNING:
			return "warning";
		case ERROR:
			return "Error";
		}
	}

public:
	logger(string& Filename) :logFile(Filename) {
		if (!logFile.is_open()) {
			cerr << "Error while opening the file";

		}

	}
	~logger() {
		if (logFile.is_open()) {
			if (logFile.is_close()) {

			}
		}

		void log(logLevel level, string & message) {
			string Levelstr = levelToString(level);
			string LogMessage = levelstr + ":" + message;
			cout << LogMessage << endl;
			if (logFile.is_open()) {
				logFile << logMessage << endl;

			}


		}
	}
};
class User {
private:
	string username;
	string password;
public:

	User(const string& username, const string& password) :username(username), password(password) {}
	string getName() {
		return username;
	}
	string getPassword() {
		return password;
	}
};
class UserAuthenticationSystem {
private:
	unordered_map<string, string>users;
	void showDashboard() {
		int choice;
		do {
			cout << "user dashboard" << endl;
			cout << "user profile" << endl;
			cout << "logging" << endl;
			cout << "enter the choice";
			cin >> choice;
			switch (choice) {
			case 1:
				cout << "user profile";
				break;
			case 2:
				cout << "log out";
			case 3:
				cout << "invalid";
				break;
			}

		} while (choice != 2);

	};

	void registerUser()
	{
		string name;
		string password;
		cout << "Enter the userName";
		cin >> name;
		cout << "enter the password";
		cin >> password;
		if (users.count(name) > 0 && users[password] == password) {
			cout << "Successfully logged,Welcome back" << name;
			showDashboard();
		}
		else {
			cout << "Invalid details" << endl;
		}
	}
};
class C
		
		
		

