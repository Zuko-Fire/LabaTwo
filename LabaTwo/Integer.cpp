#include "Integer.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void Integer::summation()
{
	int num1, num2;
	cout << "¬ведите первое число" << endl;
	cin >> num1;
	cout << "¬ведите второе число" << endl;
	cin >> num2;

	
	cout << ((num1 + num2)) << endl;
	cout << endl;
}
void Integer::subtracting()
{
	int num1, num2;
	cout << "¬ведите первое число" << endl;
	cin >> num1;
	cout << "¬ведите второе число" << endl;
	cin >> num2;


	cout << ((num1 - num2)) << endl;
	cout << endl;
}
void Integer::multiplication()
{
	int num1, num2;
	cout << "¬ведите первое число" << endl;
	cin >> num1;
	cout << "¬ведите второе число" << endl;
	cin >> num2;


	cout << ((num1 * num2)) << endl;
	cout << endl;
}
void Integer::dividing()
{
	int num1, num2;
	cout << "¬ведите первое число" << endl;
	cin >> num1;
	cout << "¬ведите второе число" << endl;
	cin >> num2;


if (num2 !=0)
{
	cout<<(num1/num2)<<endl;
	cout << endl;
}
else
{
	cout << "Ќа ноль делить нельз€!" << endl << endl;
	cout << endl;
	
}
}