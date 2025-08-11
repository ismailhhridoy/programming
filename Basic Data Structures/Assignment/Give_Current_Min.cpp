#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int q;
    cin >> q;

    int current_min = INT_MAX;
    if (!arr.empty())
    {
        for (int v : arr)
            if (v < current_min)
                current_min = v;
    }

    while (q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            int x;
            cin >> x;
            arr.push_back(x);
            if (x < current_min)
                current_min = x;
            cout << current_min << endl;
        }
        else if (cmd == 1)
        {
            if (arr.empty())
                cout << "Empty" << endl;
            else
                cout << current_min << endl;
        }
        else if (cmd == 2)
        {
            if (arr.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                auto it = find(arr.begin(), arr.end(), current_min);
                if (it != arr.end())
                    arr.erase(it);

                if (arr.empty())
                {
                    cout << "Empty" << endl;
                    current_min = INT_MAX;
                }
                else
                {
                    current_min = INT_MAX;
                    for (int v : arr)
                        if (v < current_min)
                            current_min = v;
                    cout << current_min << endl;
                }
            }
        }
    }
    return 0;
}
