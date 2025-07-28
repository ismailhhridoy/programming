#include <bits/stdc++.h>
using namespace std;
class mystack
{
    public:
        list<int> l;

        void push(int val)
        {
            l.push_back(val);
        }

        void pop()
        {
            l.pop_back();
        }

        int top()
        {
            return l.back();
        }

        int size()
        {
            return l.size();
        }

        bool empty()
        {
            return l.empty();
        }
};

class myqueue
{
public:
   list<int>l;

    void push(int val) // 0(1)
    {   
        l.push_back(val);
    }

    void pop() // 0(1)
    {
        l.pop_front();
    }

    int front() // 0(1)
    {
        return l.front();
    }
    
    int back() // 0(1)
    {
        return l.back();
    }

    int size() // 0(1)
    {
        return l.size();
    }

    bool empty() // 0(1)
    {        
        return l.empty();
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    mystack st;
    myqueue q;

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