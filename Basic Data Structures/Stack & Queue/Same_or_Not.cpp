#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

    int val;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> val;
        q.push(val);
    }

    int st_sz = st.size();
    int q_sz = q.size();

    if (st_sz != q_sz)
    {
        cout << "NO" << endl;
    }
    else
    {   
        bool is_same = true;
        
        while (!st.empty() && !q.empty())
        {
            if(st.top() != q.front())
            {
                cout << "NO" << endl;
                is_same = false;
                break;
            }
            st.pop();
            q.pop();
        }

        if(is_same) cout << "YES" << endl;
    }

    return 0;
}