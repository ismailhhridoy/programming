#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string st; cin >> st;

        stack<char> stk;

        for (char c:st)
        {
            if(!stk.empty() && stk.top() == c)
                stk.pop();
            else
                stk.push(c);
        }

        cout << stk.size() << endl;
        
    }
    

    return 0;
}