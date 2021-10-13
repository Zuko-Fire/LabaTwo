#include "Binary.h"
#include <iostream>
#include <string>
#include <bitset>
using std::bitset;
using std::cout;
using std::endl;
using std::cin;

void Binary::toDecimal(bitset<32>num)
{
	cout << num.to_ullong();
	cout << endl;
}
void Binary::toDecimal()
{
	cout << "Введите число" << endl;
	bitset<32> b;
	cin >> b;
	cout << b.to_ullong();
	cout << endl;
}
void Binary::summation()
{
	bitset<32>num1, num2;
	int i = 0;
	cout << "Введите первое число" << endl;
	cin >> num1;
	cout << "Введите второе число" << endl;
	cin >> num2;
	bitset<32> bits3 = num1.to_ullong() + num2.to_ullong();
	cout <<"Результат: " << bits3.to_string() << endl;
	cout << "1.Перевести в десятичную систему счисления" << endl;
	cin >> i;
	if (i==1)
	{
		toDecimal(bits3);
	}

}
void Binary::subtracting()
{
	int i = 0;
	bitset<32>num1, num2;
	cout << "Введите первое число" << endl;
	cin >> num1;
	cout << "Введите второе число" << endl;
	cin >> num2;

	bitset<32> bits3 = num1.to_ullong() - num2.to_ullong();
	cout << "Результат: " << bits3 << endl;
	cout << "1.Перевести в десятичную систему счисления" << endl;
	cin >> i;
	if (i == 1)
	{
		toDecimal(bits3);
	}
}
void Binary:: multiplication()
{
	int i = 0;
	bitset<32>num1, num2;
	cout << "Введите первое число" << endl;
	cin >> num1;
	cout << "Введите второе число" << endl;
	cin >> num2;

	bitset<32> bits3 = num1.to_ullong() * num2.to_ullong();
	cout << "Результат: " << bits3 << endl;
	cout << "1.Перевести в десятичную систему счисления" << endl;
	cin >> i;
	if (i == 1)
	{
		toDecimal(bits3);
	}
}
void Binary::dividing()
{
	int i = 0;
	bitset<32>num1, num2;
	cout << "Введите первое число" << endl;
	cin >> num1;
	cout << "Введите второе число" << endl;
	cin >> num2;
	if (num2 != 0) {
		bitset<32> bits3 = num1.to_ullong() / num2.to_ullong();
		cout << "Результат: " << bits3 << endl;
		cout << "1.Перевести в десятичную систему счисления" << endl;
		cin >> i;
		if (i == 1)
		{
			toDecimal(bits3);
		}
	}
	else
	{
		cout << "На ноль делить нельзя!" << endl;
	}
}



