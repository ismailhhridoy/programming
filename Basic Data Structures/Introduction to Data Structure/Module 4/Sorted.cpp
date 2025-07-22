    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t;
        cin >> t;

        while (t--)
        {
            int n;
            cin >> n;

            vector<int> ar(n);
            for (int i = 0; i < n; i++)
            {
                cin >> ar[i];
            }

            bool sort = true;

            for (int i = 0; i < n-1; i++)
            {
                if (ar[i] > ar[i + 1])
                {
                    sort = false;
                    break;
                }
            }

            if (sort)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        return 0;
    }