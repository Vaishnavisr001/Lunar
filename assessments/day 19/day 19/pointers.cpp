
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	char ch = 'A';
	float f = 10.4;
	int b = 30;
	//void* ptr = nullptr;//declare  and initialize a pointer,generic pointer
	int* ptr1 = nullptr;

	


	printf ( "\nAddress of a=%u and it value=%d \n", & a, a); //here we used unsigned because address can be only positive value..long means if we have more address then we can use long; 
	printf ( "\nAddress of a=%u and it value=%c \n", & ch, ch);
	printf("\nAddress of a=%u and it value=%f\n", &f, f);

	printf("\nAddress of a=%u and it value=%u\n", &ptr1,ptr1);//to get address of ptr
	a = 10;
	ptr1 = &a;//how the ptr is pinting to adrress of variable,here ptr content will be address of a
	printf("Address pf ptr=%u and value=u%\n", &ptr1, ptr1);
	printf("\nptr1 is pointing to =%u", ptr1);
	//content of ptr1->&a
	//CO(CO(ptr1))->value of a=dereferencing the pointer
	printf("\n%u is having a value stored as=%d\n", ptr1, *ptr1);
	ptr1 = &b;
	printf("\n%u is having a value stored as=%d\n", ptr1, *ptr1);
	*ptr1 = 101;

	return 0;



}