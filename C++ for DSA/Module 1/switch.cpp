#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    
    switch (x)
    {
    case 1:
        cout << "Staurday\n";
        break;
    case 2:
        cout << "Sunday\n";
        break;
    case 3:
        cout << "Monday\n";
        break;
    case 4:
        cout << "Tuesday\n";
        break;
    case 5:
        cout << "Wednesday\n";
        break;
        
    case 6:
        cout << "Thursday\n";
        break;

    default:
        cout << "Friday\n";
    }

    return 0;
}