
#include<iostream>
int main()
{
	int a = 10;
	float b = 15.7;
	char c = 'A';
	double d = 101.999999;
	char s[20];
	printf("\n%c\n%d\n%f\n%lf\n%s\n", c, a, b, d, "vaish");
	scanf("%d%f%lf%s", &a, &b, &d, &s);
	
	scanf(" %c", &c);
	printf("\n %c  \n %d \n %f \n %lf \n %s\n", c, a, b, d, s);
	
}