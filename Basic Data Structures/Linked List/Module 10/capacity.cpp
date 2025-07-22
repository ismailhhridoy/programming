#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {5,10,15,12};
    // l.clear();
    l.resize(5,100);
    // cout << l.size() << endl;
    
    for (int val : l)
    {
        cout << val << endl;
    }

  

    return 0;
}