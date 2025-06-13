#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
bool isPingTurn = true;  // Start with Ping

void printPing(int count) {
    for (int i = 0; i < count; ) {
        std::lock_guard<std::mutex> lock(mtx);
        if (isPingTurn) {
            std::cout << "Ping\n";
            isPingTurn = false;
            ++i;
        }
    }
}

void printPong(int count) {
    for (int i = 0; i < count; ) {
        std::lock_guard<std::mutex> lock(mtx);
        if (!isPingTurn) {
            std::cout << "Pong\n";
            isPingTurn = true;
            ++i;
        }
    }
}

int main() {
    int repeatCount = 10;

    std::thread t1(printPing, repeatCount);
    std::thread t2(printPong, repeatCount);

    t1.join();
    t2.join();

    return 0;
}
