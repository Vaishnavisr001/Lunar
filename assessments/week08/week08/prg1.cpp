#include<iostream>
#include<vector>

#include<string>
#include<unordered_map>
#include<set>
#include<fstream>
#include<sstream>
#include<iomanip>
using namespace std;
class logger {
public:
	enum class Level {
		DEBUG, WARNING, ERROR, INFO

	};
	static void log(Level level, const string& msg) {
		
		string strlevel;
		switch (level) {
		case Level::INFO:strlevel = "[INFO]";
			break;
		case Level::DEBUG:strlevel = "[DEBUG]";
			break;
		case Level::WARNING:strlevel = "[WARNING]";
			break;
		case Level::ERROR:strlevel = "[ERROR]";
			break;
		}
		cout << strlevel << ":" << msg << endl;
	}
};
class MicroProcessor {
private:
	unordered_map<string, int> registers;
	vector<int>memory;
	vector<string>instructions;
	set<int>ModifiedMemoryAddress;
	int programCounter = 0;
public:
	MicroProcessor() {
		registers["AX"] = 0;
		registers["BX"] = 0;
		registers["CX"] = 0;
		registers["DX"] = 0;
		memory.resize(65536, 0);
	}
	void loadInstructions(const string& filename)
	{
		instructions.clear();
		programCounter = 0;
		ifstream myfile(filename);
		string line;
		while (getline(myfile, line)) {
			if (!line.empty()) {
				instructions.emplace_back(line);
			}
		}
		logger::log(logger::Level::INFO, "instruction loaded" + to_string(instructions.size()) + "instructions");

	}
	int getOperandValue(const string& operand) {
		if (!operand.empty() && operand.front() == '[' && operand.back() == ']') {
			int addr = stoi(operand.substr(1, operand.size()-2 ));
			if (addr < 0 || addr >= memory.size()) {
				logger::log(logger::Level::ERROR, "Memory access out of bound" + to_string(addr));
				return 0;
			}
				

			return memory[addr];
		}
		else if (registers.count(operand))
		{
			return registers[operand];
		}
		else {
			cout << operand;
			return stoi(operand);
		}
		
	}
	void setOperandValue(const string& dest, int value) {
		if (!dest.empty() && dest.front() == '[' && dest.back() == ']') {
			int addr = stoi(dest.substr(1, dest.size() - 2));
			if (addr < 0 || addr >= memory.size()) {
				logger::log(logger::Level::ERROR, "Memory  out of bound" + to_string(addr));
				return;
			}
			memory[addr] = value;
			ModifiedMemoryAddress.insert(addr);

		}
		else if (registers.count(dest)) {
			registers[dest] = value;
		}
	}
	void runLoadedInstruction() {
		logger::log(logger::Level::INFO, "execution started");
		while (programCounter < instructions.size()) {
			string line = instructions[programCounter++];
			string command, opd1, opd2;
			auto start = 0;
			auto end = line.find(' ');
			command = line.substr(start, end - start);
			start = end + 1;
			end = line.find(',');
			opd1 = line.substr(start, end - start);
			start = end + 1;
			opd2 = line.substr(start);

			if (command == "MOV") {
				setOperandValue(opd1, getOperandValue(opd2));
			}
			else if (command == "ADD") {
				int res = getOperandValue(opd1) + getOperandValue(opd2);
				registers["AX"] = res;


			}
			else if (command == "SUB") {
				int res = getOperandValue(opd1) - getOperandValue(opd2);
				registers["AX"] = res;
			}
			else if (command == "MUL") {
				int res = getOperandValue(opd1) * getOperandValue(opd2);
				registers["AX"] = res;

			}

			else if (command == "DIV") {
				int divisor = getOperandValue(opd2);
				if (divisor == 0)
				{
					logger::log(logger::Level::ERROR, "Division by zero error");
					continue;
				}
				int res = getOperandValue(opd1) / divisor;
				registers["AX"] = res;
			}
			else if (command == "HLT") {
				logger::log(logger::Level::INFO, "HAULTED");
				break;
			}
			else {

				logger::log(logger::Level::ERROR, "NOT IDENTIFIED INSTRUCTION" + command);

			}

		}
	};

		void PrintCpuState() {
			cout << "Received Interrupt" << endl;
			cout << "Snapshot of the processor" << endl;
				cout << "AX:" << registers["AX"] << endl;
			cout << "BX:" << registers["BX"] << endl;
			cout << "CX:" << registers["CX"] << endl;
			cout << "DX:" << registers["DX"] << endl;
			cout << "First 16 Memory Contents" << endl;
				for (int i = 0;i < 16;i++) {
					cout << setfill('0') << setw(2) << i << "->";
					cout << memory[i] << endl;
				}

		}
		void disp()
		{
			for (auto i : instructions)
				cout << i << endl;
		}
	};
	
	int main() {
		MicroProcessor MP;
		MP.loadInstructions("instructions.txt");
		//MP.disp();
		MP.runLoadedInstruction();
		MP.PrintCpuState();
		return 0;
	}






			

			

		

