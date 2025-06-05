#include<iostream>
#include<list>
#include<string>

using namespace std;
list<string>tasks;
void addTask(const string& task) {
	if (task.find("critical") != string::npos) {
		tasks.push_front(task);
		cout << "" << task << """added to front[critical]\n";

	}
	else {
		tasks.push_back(task);
		cout << "added to the back" << endl;
	}
}
void addUrgentTask(const string& task)
{
	tasks.push_front(task);
	cout << "" << task << """added to front(urgent)";

}
void removeTask(const string& task) {
	auto it = find(tasks.begin(), tasks.end(), task);
	if (it != tasks.end()) {
		tasks.erase(it);
		cout << "" << task << "removed";
	}
	else {
		cout << "" << task << "not found\n";
	}
}

void showTasks() {
	if (tasks.empty()) {
		cout << "NO TASK";
	}
	else {
		cout << "Current Task:\n";
		for (const string task : tasks) {
			cout << task << "\n";
		}
	}
}
void Commands(const string&input){
	size_t spacePos = input.find("");
	string command = input.substr(0, spacePos);
	string task = (spacePos != string::npos) ? input.substr(spacePos + 1) : "";
	if (command == "add") {
		addTask(task);

	}
	else if(command=="urgent"){
		addUrgentTask(task);
		}
	else if (command == "remove")
	{
		removeTask(task);
	}
	else
	{
		showTasks();
	}


}
int main()
{
	string input;
	cout << "commands:add<task>,urgent<task>,remove<task>,show,exit\n";
	while (true)
	{
		cout << "\n>";
		getline(cin, input);
		if (input == "exit")
			break;
		Commands(input);
	}
	return 0;
}
