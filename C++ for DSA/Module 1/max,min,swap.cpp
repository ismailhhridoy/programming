#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    cout << max(a,b) << endl;
    cout << min({115, 40, 30, 40}) << endl;
    swap(a,b);
    cout << a << " " << b << endl;
    return 0;
}