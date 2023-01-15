#include <iostream>
#include <cmath>
#include <bitset>
#include <string>
using namespace std;

double dodawanie(double num1, double num2);
double odejmowanie(double num1, double num2);
double mnozenie(double num1, double num2);
double dzielenie(double num1, double num2);
double potegowanie(double num1, int num2);
unsigned long long silnia(int num);
string binary(int num);
string octal(int num);
string hexadecimal(int num);

int main() {
    setlocale(LC_ALL, "polish");
    int choice;
    double num1, num2;
    int num3;
    do {
        cout << "Menu:" << endl;
        cout << "1) Dodawanie" << endl;
        cout << "2) Odejmowanie" << endl;
        cout << "3) Mno�enie" << endl;
        cout << "4) Dzielenie" << endl;
        cout << "5) Pot�gowanie" << endl;
        cout << "6) Silnia" << endl;
        cout << "7) System binarny (dw�jkowy)" << endl;
        cout << "8) System oktalny (�semkowy)" << endl;
        cout << "9) System heksadecymalny (szesnastkowy)" << endl;
        cout << "10) Wyj�cie" << endl;
        cout << "Tw�j wyb�r: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Podaj dwie liczby: ";
                cin >> num1 >> num2;
                cout << "Tw�j wynik to: " << dodawanie(num1, num2) << endl;
                break;
            case 2:
                cout << "Podaj dwie liczby: ";
                cin >> num1 >> num2;
                cout << "Tw�j wynik to: " << odejmowanie(num1, num2) << endl;
                break;
            case 3:
                cout << "Podaj dwie liczby: ";
                cin >> num1 >> num2;
                cout << "Tw�j wynik to: " << mnozenie(num1, num2) << endl;
                break;
            case 4:
                cout << "Podaj dwie liczby: ";
                cin >> num1 >> num2;
                if (num2 == 0) {
                    cout << "Stop! Nie mo�na dzieli� przez zero." << endl;
                } else {
                    cout << "Tw�j wynik to: " << dzielenie(num1, num2) << endl;
                }
                break;
            case 5:
                cout << "Podaj podstaw� i wyk�adnik: ";
                cin >> num1 >> num3;
                if (num3 < 0) {
                    cout << "Stop! Wyk�adnik nie mo�e by� ujemny." << endl;
                } else {
                    cout << "Tw�j wynik to: " << potegowanie(num1, num3) << endl;
                }
                break;
            case 6:
                cout << "Wprowad� dodatni� liczb� ca�kowit�: ";
                cin >> num3;
                if (num3 < 0) {
                    cout << "Stop! Silnia mo�e by� obliczona tylko dla dodatnich liczb ca�kowitych." << endl;
                } else {
                    cout << "Tw�j wynik to: " << silnia(num3) << endl;
                }
                break;
            case 7:
                cout << "Wprowad� dodatni� liczb� ca�kowit�: ";
                cin >> num3;
                if (num3 < 0) {
                    cout << "Stop! Wprowad� prawid�ow� liczb�." << endl;
                } else {
                    cout << "Tw�j wynik to: " << binary(num3) << endl;
                }
                break;
            case 8:
                cout << "Wprowad� dodatni� liczb� ca�kowit�: ";
                cin >> num3;
                if (num3 < 0) {
                    cout << "Stop! Wprowad� prawid�ow� liczb�." << endl;
                } else {
                    cout << "Tw�j wynik to: " << octal(num3) << endl;
                }
                break;
            case 9:
                cout << "Wprowad� dodatni� liczb� ca�kowit�: ";
                cin >> num3;
                if (num3 < 0) {
                    cout << "Stop! Wprowad� prawid�ow� liczb�." << endl;
                } else {
                    cout << "Tw�j wynik to: " << hexadecimal(num3) << endl;
                }
                break;
            case 10:
                cout << "Wyjscie..." << endl;
                break;
            default:
                cout << "Nieprawid�owy wyb�r. Wprowad� liczb� od 1 do 10." << endl;
                break;
        }
    } while (choice != 10);
    return 0;
}

double dodawanie(double num1, double num2) {
    return num1 + num2;
}

double odejmowanie(double num1, double num2) {
    return num1 - num2;
}

double mnozenie(double num1, double num2) {
    return num1 * num2;
}

double dzielenie(double num1, double num2) {
    return num1 / num2;
}

double potegowanie(double num1, int num2) {
    return pow(num1, num2);
}
unsigned long long silnia(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * silnia(num - 1);
}
}
string binary(int num) {
    if (num == 0) {
            return "0";
    } else {
        return binary(num / 2) + to_string(num % 2);
    }
}
string octal(int num) {
    if (num == 0) {
            return "0";
    } else {
        return octal(num / 8) + to_string(num % 8);
    }
}
string hexadecimal(int num) {
    if (num == 0) {
            return "0";
    } else {
        string hex = "0123456789ABCDEF";
        return hexadecimal(num / 16) + hex[num % 16];
    }
}

