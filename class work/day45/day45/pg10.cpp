#include <iostream>
#include <thread>
#include <mutex>

int n = 20;
int current = 1;
std::mutex mtx;

void fizz() {
    while (true) {
        std::lock_guard<std::mutex> lock(mtx);
        if (current > n) break;
        if (current % 3 == 0 && current % 5 != 0) {
            std::cout << "Fizz\n";
            current++;
        }
    }
}

void buzz() {
    while (true) {
        std::lock_guard<std::mutex> lock(mtx);
        if (current > n) break;
        if (current % 5 == 0 && current % 3 != 0) {
            std::cout << "Buzz\n";
            current++;
        }
    }
}

void fizzbuzz() {
    while (true) {
        std::lock_guard<std::mutex> lock(mtx);
        if (current > n) break;
        if (current % 15 == 0) {
            std::cout << "FizzBuzz\n";
            current++;
        }
    }
}

void number() {
    while (true) {
        std::lock_guard<std::mutex> lock(mtx);
        if (current > n) break;
        if (current % 3 != 0 && current % 5 != 0) {
            std::cout << current << "\n";
            current++;
        }
    }
}

int main() {
    std::thread t1(fizz);
    std::thread t2(buzz);
    std::thread t3(fizzbuzz);
    std::thread t4(number);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}
