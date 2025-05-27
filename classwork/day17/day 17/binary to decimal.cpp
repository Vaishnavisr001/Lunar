/*#include<iostream>
using namespace std;
int DecimaltoBinary(int binary) {
	int decimal = 0,base = 1;
	while (binary > 0) {
		int lastdigit = binary % 10;
		decimal = lastdigit * base;
		base = base * 10;
		decimal = decimal / 2;
	}
	return binary;

}
int OctaltoDecimal(int octal) {
	int decimal = 0, base = 1;
	while (octal > 0) {
		int lastdigit = octal % 10;
		decimal = decimal + lastdigit * base;
		base = base * 8;
		octal = octal / 10;

	}
	return decimal;
}
int main()
{*/
#include<iostream>
using namespace std;
//dec2base:
//user input:1st arg decimal value,2nd arg to the base for convertion
//return:converted base value
int dec2bin(int, int);
int main()
{
	cout << dec2bin(10, 5) << endl;
	cout << base2dec(67, 8) << endl;
	return 0;
}
int dec2bin(int num, int base);
{
	int r;
	int place = 0;
	int sum = 0;
	while (num) {
		r = num % base;
		sum += r * pow(10, place);
		num = num / base;
		place++;
	}
	return sum;

	}
int base2dec(int num, int base);
{
	int r;
	int place = 0;
	int sum = 0;
	while (num) {
		r = num % 10;
		sum = sum + r * pow(base, place);
		num = num / 10;
		place++;
	}
	return sum;
}
	
}

