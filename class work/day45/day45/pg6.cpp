#include <iostream>
#include <thread>


void print1to10() {
    for (int i = 1; i <= 10; ++i) {
        std::cout << "Thread 1: "<< i << std::endl;
    }
}


void print11to20() {
    for (int i = 11; i <= 20; ++i) {
        std::cout << "Thread 2: " << i << std::endl;
    }
}

int main() {
    
    std::thread t1(print1to10);
    t1.join();
    std::thread t2(print11to20);
    t2.join();

  

   
    return 0;
}
