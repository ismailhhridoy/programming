#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(4);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    v.resize(2); 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

     cout << endl;

    v.resize(7,3); 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}