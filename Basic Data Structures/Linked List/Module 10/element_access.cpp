#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {5,10,15,12};
    
    cout << l.back() << endl;
    cout << l.front() << endl;
    cout << *next(l.begin(),2) << endl;
    
    for (int val : l)
    {
        // cout << val << endl;
    }

  

    return 0;
}