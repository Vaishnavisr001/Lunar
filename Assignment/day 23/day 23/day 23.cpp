#include <iostream>
#include <string>
using namespace std;

const int MAX_QUESTIONS = 5;
const int MAX_QUIZZES = 5;

struct Question {
    string questionText;
    string options[4];
    int correctOption;
};

struct Quiz {
    string title;
    Question questions[MAX_QUESTIONS];
    int questionCount;
};

Quiz quizList[MAX_QUIZZES];
int quizCount = 0;

void loadDefaultQuizzes() {
    quizList[0].title = "General Knowledge";
    quizList[0].questionCount = 2;
    quizList[0].questions[0] = {
        "What is the capital of France?",
        { "Berlin", "London", "Paris", "Madrid" }, 2 };
    quizList[0].questions[1] = {
        "Which planet is known as the Red Planet?",
        { "Earth", "Mars", "Jupiter", "Venus" }, 1 };

    quizList[1].title = "Math Quiz";
    quizList[1].questionCount = 2;
    quizList[1].questions[0] = {
        "What is 5 + 7?",
        { "10", "12", "13", "14" }, 1 };
    quizList[1].questions[1] = {
        "What is 9 * 3?",
        { "27", "18", "24", "30" }, 0 };

    quizList[2].title = "Science Quiz";
    quizList[2].questionCount = 2;
    quizList[2].questions[0] = {
        "What gas do plants absorb from the atmosphere?",
        { "Oxygen", "Carbon Dioxide", "Nitrogen", "Helium" }, 1 };
    quizList[2].questions[1] = {
        "What part of the cell contains DNA?",
        { "Cytoplasm", "Nucleus", "Membrane", "Ribosome" }, 1 };

    quizList[3].title = "History Quiz";
    quizList[3].questionCount = 2;
    quizList[3].questions[0] = {
        "Who was the first President of the United States?",
        { "Abraham Lincoln", "George Washington", "John Adams", "Thomas Jefferson" }, 1 };
    quizList[3].questions[1] = {
        "In which year did World War II end?",
        { "1943", "1944", "1945", "1946" }, 2 };

    quizList[4].title = "Computer Basics";
    quizList[4].questionCount = 2;
    quizList[4].questions[0] = {
        "What does CPU stand for?",
        { "Central Performance Unit", "Central Processing Unit", "Control Program Unit", "Central Power Unit" }, 1 };
    quizList[4].questions[1] = {
        "Which of the following is not an input device?",
        { "Keyboard", "Mouse", "Monitor", "Scanner" }, 2 };

    quizCount = 5;
}

void takeQuiz() {
    if (quizCount == 0) {
        cout << "No quizzes available.\n";
        return;
    }

    cout << "\nAvailable quizzes:\n";
    for (int i = 0; i < quizCount; ++i) {
        cout << i + 1 << ". " << quizList[i].title << endl;
    }

    int choice;
    cout << "Select quiz number: ";
    cin >> choice;

    if (choice < 1 || choice > quizCount) {
        cout << "Invalid choice!\n";
        return;
    }

    Quiz selectedQuiz = quizList[choice - 1];
    int score = 0;

    cout << "\n--- " << selectedQuiz.title << " ---\n";
    for (int i = 0; i < selectedQuiz.questionCount; ++i) {
        Question q = selectedQuiz.questions[i];
        cout << "\nQ" << i + 1 << ": " << q.questionText << endl;
        for (int j = 0; j < 4; ++j) {
            cout << j + 1 << ". " << q.options[j] << endl;
        }

        int ans;
        cout << "Your answer (1-4): ";
        cin >> ans;

        if (ans - 1 == q.correctOption) {
            cout << "Correct!\n";
            score++;
        }
        else {
            cout << "Wrong! Correct answer: " << q.options[q.correctOption] << "\n";
        }
    }

    cout << "\nQuiz Completed! Your Score: " << score << "/" << selectedQuiz.questionCount << endl;
}

int main() {
    string uname;
    cout << "Welcome to Quiz App\n";
    cout << "Enter your name (or press Enter to continue as Guest): ";
    cin.ignore();
    getline(cin, uname);
    if (uname.empty()) {
        uname = "Guest";
    }

    cout << "Hello, " << uname << "! Enjoy the quiz.\n";

    loadDefaultQuizzes();

    int option;
    do {
        cout << "\n MENU\n";
        cout << "1. Take a Quiz\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
        case 1: takeQuiz(); break;
        case 2: cout << "Goodbye!\n"; break;
        default: cout << "Invalid option!\n";
        }
    } while (option != 2);

    return 0;
}
