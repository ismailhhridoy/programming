#include <bits/stdc++.h>
using namespace std;
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
    myqueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    cout << q.size() << " " << q.front() << " " << q.back() << " " << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}