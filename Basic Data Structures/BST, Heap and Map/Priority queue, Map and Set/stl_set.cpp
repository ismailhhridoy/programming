#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val);
    }

    for (auto it = s.begin(); it!=s.end(); it++)
    {
        cout << *it << endl;
    }
    
    s.count(3); // return true false check is the value avaialable or not

    
    return 0;
}