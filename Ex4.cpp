#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<< "hello world" << endl;
// dane tekstowe
        const string text0 = "Natalia";
        string text = "Kacper"; 

    cout << "string: " << text0 << endl << endl;
    cout << "string: " << text << endl << endl;
// dane znakowe
    char znak = 127;
    cout << "char: " << (int)znak << ", rozmiar: "<< sizeof(char) << " bajt(ow)" << endl;

// dane całkowite
    short zmienna1 = 32767;
    cout << "short: " << zmienna1 << ", rozmiar: " << sizeof(short) << " bajt(ow)" << endl;

    int zmienna2 = 2147483647;
    cout << "int: " << zmienna2 << ", rozmiar: " << sizeof(int) << " bajt(ow)" << endl;

    long zmienna3 = 2147483647;
    cout << "long: " << zmienna3 << ", rozmiar: " << sizeof(long) << " bajt(ow)" << endl;

    long long zmienna4 = 21474836472147483647;
    cout << "long long: " << zmienna4 << ", rozmiar: " << sizeof(long long) << " bajt(ow)" << endl;

// dane zmiennoprzecinkowe

    float zmienna5 = 3.141592;
    cout << "float: " << setprecision(7) << zmienna5 << ", rozmiar: " << sizeof(float) << " bajt(ow)" << endl;

    double zmienna6 = 3.141592653589;
    cout << "double: " << setprecision(14) << zmienna6 << ", rozmiar: " << sizeof(double) << " bajt(ow)" << endl;

// dane logiczne

    bool logiczna = false;
    cout << "logiczna: " << logiczna << ", rozmiar: " << sizeof(bool) << " bajt(ow)" << endl;

    return 0;
} 