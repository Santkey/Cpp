#include <iostream>

using namespace std;
 int main()
 {
     int day = 0;
     cout << "Enter the day of the week: ";
     cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    default:
        cout << "Weekend";
        break;

    }
    
    return 0;
 }