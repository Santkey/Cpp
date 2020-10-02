#include <iostream>

using namespace std;
int main()
{
   // operatory arytmetyczne
    int a, b, c, d, e, g, h, i;
    float f;
    a = 20;
    b = 15;
    h = 12;
    i = 15;
   // h++; // inkrementacja
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;
    b += a; // skrócony operator arytmetyczny

    cout << "Wynik b: " << b << endl;
    cout << "Wynik h: " << ++h << endl; //preinkrementacja - h jest zwiększane o 1, a potem brane jako 12
    cout << "Wynik h: " << h++ << endl; //postinkrementacja - h brane jest jako 12
    cout << "Wynik h: " << h++ << endl; // nastpęny wynik postinkrementacji to 12 + 1 = 13

    cout << "Wynik i: " << i << endl; // i = 15
    // cout << "Wynik i: " << i-- << endl;// postdekrementacja odczytuje i jako 15 i zmniejsza je o 1
    cout << "Wynik i: " << --i << endl;// predekrementacja zmniejsza i o 1 i odczytuje wynik -1+15=14

    cout << "a + b = " << c << endl;

    cout << "a - b = " << d << endl;

    cout << "a * b = " << e << endl;

    cout << "a / b = " << (float)a / (float)b << endl; //część ułamkowa float

    cout << "a % b = " << g << endl;

    return 0;
}