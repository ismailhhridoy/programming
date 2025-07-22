#include <bits/stdc++.h>
using namespace std;

void print_forward(list<int> NumberList)
{
    cout << "L ->";
    for (int val : NumberList)
    {
        cout << " " << val;
    }

    cout << endl;
}

void print_backward(list<int> NumberList)
{
    NumberList.reverse();

    cout << "R ->";
    for (int val : NumberList)
    {
        cout << " " << val;
    }

    cout << endl;
}

int main()
{
    list<int> NumberList;

    int q;
    cin >> q;

    while (q--)
    {

        int pos;
        int val;
        cin >> pos >> val;

        int sz = NumberList.size();

        if (pos == 0)
        {
            NumberList.push_front(val);
        }
        else if (pos == 1)
        {
            NumberList.push_back(val);
        }
        else if (pos == 2)
        {

            if (val >= 0 && val < sz)
            {
                auto it = NumberList.begin();
                for (int i = 0; i < val; i++)
                {
                    it++;
                }

                NumberList.erase(it);
            }
        }

        print_forward(NumberList);
        print_backward(NumberList);
    }

    return 0;
}