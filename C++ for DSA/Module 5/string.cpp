#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string s;
    // cin >> s; // take without space input
    cin.ignore(); // use for ignore the enter, \n, line
    getline(cin,s); // take with space input, but enter problem
    cout << x; 
    cout << s; 
    return 0;
}