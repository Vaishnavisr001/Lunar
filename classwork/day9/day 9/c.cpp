
/*#include<iostream>
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
}*/
#include<iostream>
int main()
{
	int slno;
	int id_01, id_02, id_03, id_04, id_05;
	char sNmae_01[10], sNmae_02[10], sNmae_03[10], sNmae_04[10], sNmae_05[10];
	float m1_01, m1_02, m1_03, m1_04, m1_05;
	float m2_01, m2_02, m2_03, m2_04, m2_05;
	float m3_01, m3_02, m3_03, m3_04, m3_05;
	float m4_01, m4_02, m4_03, m4_04, m4_05;

	float avg_01, avg_02, avg_03, avg_04, avg_05;
	scanf("%d%f%f%f%f", &id_01, &m1_01, &m2_01, &m3_01, &m4_01);
	avg_01 = (m1_01+ m2_01+ m3_01+ m4_01) / 4.0;
	alno = 1;
	for (int i = 0;i < 30;i++)
		printf("=");
	printf("\n");
	printf("slno|id|name");
	for (int i = 0;i < 30;i++)
		printf("=");
	printf("\n %03d|%0d\t", slno++);
	print("=" * 30);
}