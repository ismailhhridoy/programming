#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;  

    while (t--)
    {
        string s;
        cin >> s;
        stack<char>st;
        stack<char>st2;

        for (char c:s)
        {
            st.push(c);
        }        
        
        
        while (1)
        {   
            if(st.empty()) break;        
            
            if( !st2.empty() && st.top() != st2.top())
            {
                st.pop();
                st2.pop();
            }
            else
            {
                st2.push(st.top());
                st.pop();
            }
        }

        cout << (st2.empty() ? "YES" : "NO") << endl;
        
    }


    return 0;
}