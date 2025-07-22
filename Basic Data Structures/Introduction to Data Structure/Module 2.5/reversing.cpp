#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>ar(n);
    for (int i = 0; i < ar.size(); i++)
    {
        cin >> ar[i];
    }

    reverse(ar.begin(),ar.end());
    
    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }
    

    return 0;
}