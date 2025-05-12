#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool isStringPalindrome(const string& str) {
   string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());  
    return str == reversedStr;  
}


bool isNumberPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return originalNumber == reversedNumber;  

int main() {

    cout << "Enter a string: ";
    cin >> str;
    if (isStringPalindrome(str)) {
        cout << str << " is a palindrome.\n";
    }
    else {
        cout << str << " is not a palindrome.\n";
    }

    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isNumberPalindrome(num)) {
        cout << num << " is a palindrome.\n";
    }
    else {
        cout << num << " is not a palindrome.\n";
    }

    return 0;
}
