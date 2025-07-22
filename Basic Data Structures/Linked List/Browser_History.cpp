#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> ListAddress;
    string address;
    while (cin >> address && address != "end")
    {
        ListAddress.push_back(address);
    }

    // checking the input
    // for (string s:ListAddress)
    // {
    //     cout << s << endl;
    // }
    

    int q;
    cin >> q;
    auto current = ListAddress.begin();
    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string address;
            cin >> address;
            auto is_found = find(ListAddress.begin(), ListAddress.end(), address);
            if (is_found != ListAddress.end())
            {
                cout << *is_found << endl;
                current = is_found;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if(cmd == "prev")
        {
            if (prev(current) != prev(ListAddress.begin()))
            {
                current = prev(current);
                cout << * current << endl;
            }            
            else
            {
                cout << "Not Available" << endl;
            }
            
        }
        else if(cmd == "next")
        {
            if (next(current) != ListAddress.end())
            {
                current = next(current);
                cout << * current << endl;
            }            
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}