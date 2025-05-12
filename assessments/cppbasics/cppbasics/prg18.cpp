#include <iostream>
#include <cmath>

using namespace std; 
bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int numDigits = 0;

    
    while (number != 0) {
        number /= 10;
        numDigits++;
    }

    
    number = originalNumber;

    
    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);  
        number /= 10;
    }

    
    return sum == originalNumber;
}

int main() {
    int num;

    
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number.\n";
    }
    else {
        cout << num << " is not an Armstrong number.\n";
    }

    return 0;
}
