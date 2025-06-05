#include <iostream>
#include <set>
#include <string>

using namespace std;

class ScoreTracker {
private:
    multiset<int, greater<int>> scores;

public:
    void add(int score) {
        scores.insert(score);
    }

    void top3() {
        int count = 0;
        for (int score : scores) {
            if (count == 3) break;
            cout << score << " ";
            count++;
        }
        cout << endl;
    }

    void count(int score) {
        cout << scores.count(score) << endl;
    }

    void remove(int score) {
        scores.erase(score);
    }
};

int main() {
    ScoreTracker T;
    T.add(50);
    T.add(70);
    T.add(90);
    T.add(70);

    T.count(70);     
    T.top3();        

    T.remove(70);
    T.top3();        

    return 0;
}
