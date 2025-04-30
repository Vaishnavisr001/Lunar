#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char dest[5], src[20] = "1234567891234667";
	char dest2[5];
	strcpy(dest, src);
	printf("\nDest:%s\n", dest);
	strcpy(dest2, src, 4);
	printf("\ndest:%s\n", dest2);
	char s1[30] = "hello";
	char s2[20]="wold";

	return 0;
}