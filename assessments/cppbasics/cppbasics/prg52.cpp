#include <iostream>
#include <limits>

void checkLimits(int value) {
    if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max()) {
        std::cout << "The value " << value << " exceeds the limits for int.\n";
    }
    else {
        std::cout << "The value " << value << " is within the limits for int.\n";
    }
}

void checkShortLimits(short value) {
    if (value < std::numeric_limits<short>::min() || value > std::numeric_limits<short>::max()) {
        std::cout << "The value " << value << " exceeds the limits for short.\n";
    }
    else {
        std::cout << "The value " << value << " is within the limits for short.\n";
    }
}

void checkLongLimits(long value) {
    if (value < std::numeric_limits<long>::min() || value > std::numeric_limits<long>::max()) {
        std::cout << "The value " << value << " exceeds the limits for long.\n";
    }
    else {
        std::cout << "The value " << value << " is within the limits for long.\n";
    }
}

int main() {
    int intValue;
    short shortValue;
    long longValue;

    // Input values from the user
    std::cout << "Enter an integer: ";
    std::cin >> intValue;
    checkLimits(intValue);

    std::cout << "Enter a short value: ";
    std::cin >> shortValue;
    checkShortLimits(shortValue);

    std::cout << "Enter a long value: ";
    std::cin >> longValue;
    checkLongLimits(longValue);

    return 0;
}
