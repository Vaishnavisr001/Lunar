#include <iostream>
#include <thread>
using namespace std;

void backgroundTask() {
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Background task done." << std::endl;
}
void modifyX(int& x) {
	x *= 2;
    std::this_thread::sleep_for(std::chrono::seconds(50));
}

int main() {
    int val = 10;
    std::thread t(backgroundTask);
    t.detach(); // Main won't wait
    thread t(modifyX, std::ref(val));
    std::cout << "Main is not blocked.\n";
    std::this_thread::sleep_for(std::chrono::seconds(50)); // Wait to see output
    return 0;
}             



















































