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
			logFile.close();

		}
	}
	

		void log(logLevel level, const string & message){
			string Levelstr = LevelToString(level);
			string LogMessage = Levelstr + ":" + message;
			cout << LogMessage << endl;
			if (logFile.is_open()) {
				logFile << LogMessage << endl;

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
class CDR {

	string MSISDN;
	string BrandName;
	string MMCMNC;
	string callType;
	int duration;
	int download;
	int upload;
	string thirdpartyMSISSD;
	string thidPartyMMCMNC;
public:
	void setMSISDN(string& value) {
		MSISDN = value;

	}
	void setBrandName(string& value) {
		BrandName = value;

	}
	void setMMCMNC(string& value) {
		MMCMNC = value;
	}
	void setcallType(string& value) {
		callType = value;
	}
	void setduration(int value) {
		duration = value;
	}
	void setdownload(int value) {
		download = value;

	}
	void setUpload(int value) {
		upload = value;
	}
	void setthirdpartyMSSISD(string& value) {
		thirdpartyMSISSD = value;
	}
	void setthirdPartyMMCMNC(string& value) {
		thidPartyMMCMNC = value;

	}
	string getMSISSD() {
		return MSISDN;
	}
	string getBrandName() {
		return BrandName;

	}
	string getMMCMNC() {
		return MMCMNC;

	}
	string getcallType()  {
		return callType;
	}
	int getDuration() {
		return duration;
	}
	int getDownload() {
		return download;
	}
	int getUpload() {
		return upload;

	}
	string getthirdPartyMSISSD() {
		return thirdpartyMSISSD;
	}
	string getthirdPartyMMCMNC() {
		return thidPartyMMCMNC;
	}
	CDR(const string& line) {
		stringstream ss(line);
		string temp;
		getline(ss, temp, '|');
		setMSISDN(temp);
		getline(ss, temp, '|');
		setBrandName(temp);
		getline(ss, temp, '|');
		setMMCMNC(temp);
		getline(ss, temp, '|');
		setcallType(temp);
		getline(ss, temp, '|');
		setduration(stoi(temp));
		getline(ss, temp, '|');
		setdownload(stoi(temp));
		getline(ss, temp, '|');
		setUpload(stoi(temp));
		getline(ss, temp, '|');
		setthirdpartyMSSISD(temp);
		getline(ss, temp, '|');
		setthirdPartyMMCMNC(temp);


	}


};
class CustomerBill {
private:
	int incomingVoice;
	int outgoingVoice;
	int incomingSMS;
	int outgoingSMS;
	int mbDownloaded;
	int mbuploaded;
public:
	CustomerBill() : incomingVoice(0), outgoingVoice(0), incomingSMS(0), outgoingSMS(0), mbDownloaded(0), mbuploaded(0) {}
		
	void ProcessCDR(const CDR &c) {
		if (c.getcallType() == "MOC") {
			outgoingVoice++;
		}else if(c.getcallType()=="MTC"){
			incomingVoice++;
		}
		else if (c.getcallType() == "SMS-MO") {
			outgoingSMS++;
		}
		else if (c.getcallType() == "SMS-MT") {
			incomingSMS++;
		}
		else if (c.getcallType() == "GPRS") {
			mbDownloaded = mbDownloaded + c.getDownload();
			mbuploaded = mbuploaded + c.getUpload();
		}
	}
	void PrintBill() {
		cout << "Customer Billing" << endl;
		cout << "Incoming Calls" << incomingVoice << endl;
		cout << "outgoing calls" << outgoingVoice << endl;
		cout << "incoming msgs" << incomingSMS << endl;
		cout << "outgoing sms" << outgoingSMS << endl;
		cout << "Downloaded data(mb)" << mbDownloaded << endl;
		cout << "Uploaded data(mb)" << mbuploaded << endl;


	}
	void saveFile(const string& filename) {
		ofstream outFile(filename, ios::app);
		if (outFile.is_open()) {
			outFile << "Customer Billing" << endl;
			outFile << "Incoming Calls" << incomingVoice << endl;
			outFile<< "outgoing calls" << outgoingVoice << endl;
			outFile << "incoming msgs" << incomingSMS << endl;
			outFile << "outgoing sms" << outgoingSMS << endl;
			outFile << "Downloaded data(mb)" << mbDownloaded << endl;
			outFile<< "Uploaded data(mb)" << mbuploaded << endl;

		}
	}

};
class InterOperatorBilling {
private:
	int incomingVoice;
	int outgoingVoice;
	int incomingSMS;
	int outgoingSMS;
	int mbDownloaded;
	int mbuploaded;
public:
	InterOperatorBilling(int incomingVoice = 0, int outgoingVoice = 0, int incomingSMS = 0, int outgoingSMS = 0, int mbDownloaded = 0, int mbuploaded = 0) :
		incomingVoice(incomingVoice), outgoingVoice(outgoingVoice), incomingSMS(incomingSMS), outgoingSMS(outgoingSMS), mbDownloaded(mbDownloaded), mbuploaded(mbuploaded) {}
	int setIncomingVoice(int value) {
		incomingVoice = value;
	}
	int setOutgoingVoice(int value) {
		outgoingVoice = value;
	}
	int setIncomingSMS(int value) {
		incomingSMS = value;

	}
	int setOutgoingSMS(int value) {
		outgoingSMS = value;
	}
	int setmbDownloaded(int value) {
		mbDownloaded = value;
	}
	int setmbUploaded(int value) {
		mbuploaded = value;
	}
	int getIncomingVoice() {
		return incomingVoice;
	}
	int getOutgoingVoice() {
		return outgoingVoice;
	}
	int getIncomingSMS() {
		return incomingSMS;

	}
	int getOutgoingSMS() {
		return outgoingSMS;
	}
	int getmbDownloaded() {
		return 	mbDownloaded;
	}
	int setmbUploaded() {
		return mbuploaded;
	}
	int TotalDataUsed() {
		return mbDownloaded + mbuploaded;
	}



};
		
		
		

