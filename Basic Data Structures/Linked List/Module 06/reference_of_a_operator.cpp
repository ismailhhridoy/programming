#include <bits/stdc++.h>
using namespace std;
void fun(int* &p)
{
    // int y = 300;
    p = NULL;
    // *p = 200;
    cout << "In fun:" << p << endl;
    cout << "In fun:" << &p << endl;
}

int main()
{
    
    int x = 10;
    int* p = &x;
    fun(p);
    
    cout << "In main:" << p << endl;
    cout << "In main:" << &p << endl;
    return 0;
}