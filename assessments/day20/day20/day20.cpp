#include<iostream>
#define MAX 5
#include<cstring>
#include<cstdlib>
using namespace std;
bool completedQuiz() {
	char completed;
	cout << "Have you done completed(Y/N)";
	cin >> completed;

	return(completed == 'Y' || completed == 'y')
}
bool askQuestion(string question,string answer){
	string userAnswer;
	cout << question << endl;
	cin >> ws;
     cin>>userAnswer;
	if (userAnswer == answer) {
		cout << "Correct" << endl;
		return true;
	}
	else {
		cout << "Wrong answer" << answer << endl;
		return false;
	}

	}
void showSummary(int total, int correct) {
	cout << "QUIZ SUMMARY";
	cout << "TOTAL QUESTION:" << total << endl;
	cout << "CORRECT ANSWER:" << correct << endl;
}
void Quiz()
{
	string Question[MAX] = {
		"Q1.what is Ribosomes?","Q2.What are two types of ribosomes?",
		"Q3.What is vacuoles?","Q4. What are plastids","Q5.What are the types of plastids?"
	};
	string Answer[MAX] = {
		"Ribosomes are known as protein factory.","Two types of ribosomes are eukaryotic and prokaryotic",
		"Membrane-bound space found in cytoplasm.","It is found in all plant cells.",
		"Two types of plastids are chloroplast and chromoplast. "
	};



	bool asked[5] = { false };
	int totalAsked = 0;

	int correctCount = 0;
	char choice;
	

	do {
		int index;

		do {
			index = rand() % 5;
		} while (asked[index]);
		asked[index] = true;
		totalAsked++;

		if (askQuestion(Question[index], Answer[index]))
		{
			correctCount++;
		}
		if (totalAsked < 5) {
			cout << "Do you want another Question(Y/N)";
			cin >> choice;
		}
		else {
			cout << "All questions are completed";
			break;

		}
		while (choice == 'Y' || choice == 'y');
		showSummary(totalAsked, correctCount);

		int main() {
			if (completedQuiz()) {
				cout << "Already completed";
			}
			else {
				Quiz();
			}
			return 0;
		}
	}

		
	


