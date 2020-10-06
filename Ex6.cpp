#include <iostream>

using namespace std;

int main()
{
    bool test = false || (5 == 5) && 5 > 3;

    string odp = test ? "Prawda = 1" : "Falsz = 0";
    cout << odp << endl;
    return 0;
}