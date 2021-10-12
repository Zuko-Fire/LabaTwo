#include "Decimal.h"
#include <iostream>
#include "Binary.h"

using std::cout;
using std::cin;
using std::endl;
int main()
{
    system("chcp 1251");
    int i;
    Decimal d;
    Binary b;
    while (true) {
        cout << "Выберите в какой системе счисления будут производиться операции" << endl;
        cout << "1.Десятичная" << endl;
        cout << "2.Двоичная" << endl;
        cin >> i;
        if (i == 1) {
            bool t = true;
            while (t == true) {
                cout << "1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Назад" << endl;
                cout << "6.Выход" << endl;
                cin >> i;
                switch (i) {

                case(1):
                {
                    d.summation();
                    break;
                }
                case(2):
                {
                    d.subtracting();
                    break;
                }
                case(3):
                {
                    d.multiplication();
                    break;
                }
                case(4):
                {
                    d.dividing();
                    break;
                }
                case(5):
                {
                    t = false;
                    break;
                }
                case(6):
                {
                    return 0;
                }
                }
            }
        }
        if(i==2)
        {
            bool t = true;
            while (t == true) {
                cout << "1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Перевод в десятичную систему счисления" << endl;
                cout << "6.Назад" << endl;
                cout << "7.Выход" << endl;
                cin >> i;
                switch (i) {

                case(1):
                {
                    b.summation();
                    break;
                }
                case(2):
                {
                    b.subtracting();
                    break;
                }
                case(3):
                {
                    b.multiplication();
                    break;
                }
                case(4):
                {
                    b.dividing();
                    break;
                }
                case(5):
                {
                    b.toDecimal();
                    break;
                }
                case(6):
                {
                    t = false;
                    break;
                }
                case(7):
                {
                    return 0;
                }
                }
            }
        }
    }
}

