#include<iostream>
using namespace std;
class myArray {
private:
	int* arr;
	int size;
	int capacity;
public:
	myArray() { capacity = 1;size = 0;arr = new int[capacity]; }
	int push_back(int);
	int biggest();
	bool sortAsc();
	bool sortDesc();
	void printArray();
	int getSize() const;
	int getCapacity() const;
	int resize();//called whenever size==cap



};
int myArray::getCapacity()const
{
	return capacity;
}
int myArray::getSize()const
{
	return size;
}
int myArray::push_back(int v){
	if (size == capacity) {
		cout << "Capacity is equal to size when adding element" << v << endl;
		resize();
	}
	arr[size++] = v;
	return 0;
}
void myArray::printArray() {
	for (int i = 0;i < size;i++)
		cout << arr[i] << " ";
	cout << endl;
}
int myArray::resize() {
	capacity = capacity * 2;
	int* newdata = new int[capacity];
	//copy the contents of earlier data to new data
	for (int i = 0;i < size;i++)
		newdata[i] = arr[i];
	delete[]arr;//free the earlier data
	arr[] = newdata;//

		
}