#include "Binary.h"
#include <iostream>
#include <string>
#include <bitset>
using std::bitset;
using std::cout;
using std::endl;
using std::cin;

void Binary::toDecimal(bitset<10>num)
{
	cout << num.to_ullong();
	cout << endl;
}
void Binary::toDecimal()
{
	cout << "������� �����" << endl;
	bitset<10> b;
	cin >> b;
	cout << b.to_ullong();
	cout << endl;
}
void Binary::summation()
{
	bitset<10>num1, num2;
	int i = 0;
	cout << "������� ������ �����" << endl;
	cin >> num1;
	cout << "������� ������ �����" << endl;
	cin >> num2;
	bitset<10> bits3 = num1.to_ullong() + num2.to_ullong();
	cout <<"���������: " << bits3 << endl;
	cout << "1.��������� � ���������� ������� ���������" << endl;
	//if (i==1)

}
void Binary::subtracting()
{
	bitset<10>num1, num2;
	cout << "������� ������ �����" << endl;
	cin >> num1;
	cout << "������� ������ �����" << endl;
	cin >> num2;

	bitset<10> bits3 = num1.to_ullong() - num2.to_ullong();
	cout << "���������: " << bits3 << endl;
}
void Binary:: multiplication()
{
	bitset<10>num1, num2;
	cout << "������� ������ �����" << endl;
	cin >> num1;
	cout << "������� ������ �����" << endl;
	cin >> num2;

	bitset<10> bits3 = num1.to_ullong() * num2.to_ullong();
	cout << "���������: " << bits3 << endl;
}
void Binary::dividing()
{
	bitset<10>num1, num2;
	cout << "������� ������ �����" << endl;
	cin >> num1;
	cout << "������� ������ �����" << endl;
	cin >> num2;
	if (num2 != 0) {
		bitset<10> bits3 = num1.to_ullong() / num2.to_ullong();
		cout << "���������: " << bits3 << endl;
	}
	else
	{
		cout << "�� ���� ������ ������!" << endl;
	}
}



