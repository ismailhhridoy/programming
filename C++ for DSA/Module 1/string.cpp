#include <iostream>
using namespace std;

int main()
{
    // char a[100];
    // // cin >> a; without space
    // cin.getline(a,100); // with space
    // cout << a << endl;

    // int x;
    // cin >> x;
    // cin.ignore(); // it'll ignore the enter space
    // char a[100];
    // cin.getline(a, 100);
    // cout << x << endl << a << endl;

    // single word without space
    // string s;
    // cin >> s;
    // cout << s;

    // Reads the entire line, including spaces
    string s;
    getline(cin, s);
    cout << s;

    return 0;
}