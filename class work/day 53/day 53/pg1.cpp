#include<iostream>
using namespace std;

int binarySearchRecursive(int arr[], int start, int end, int target) {
    if (start > end) {
        return -1;  

    int middle = start + (end - start) / 2;

    if (arr[middle] == target) {
        return middle;
    }
    else if (arr[middle] < target) {
        return binarySearchRecursive(arr, middle + 1, end, target);  // Search right half
    }
    else {
        return binarySearchRecursive(arr, start, middle - 1, target);  // Search left half
    }
}

