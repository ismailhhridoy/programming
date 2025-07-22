#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
        {
            for (int s = 0; s < i; s++)
            {
                cout << " ";
            }

            cout << "\\";

            int spaces_inside = n - 2 - 2 * i;
            for (int s = 0; s < spaces_inside; s++)
            {
                cout << " ";
            }

            cout << "/" << endl;
        }
        else if (i == n / 2)
        {
            for (int s = 0; s < i; s++)
            {
                cout << " ";
            }

            cout << "X" << endl;
        }
        else
        {
            int j = n - 1 - i;

            for (int s = 0; s < j; s++)
            {
                cout << " ";
            }

            cout << "/";

            int spaces_inside = n - 2 - 2 * j;
            for (int s = 0; s < spaces_inside; s++)
            {
                cout << " ";
            }

            cout << "\\" << endl;
        }
    }

    return 0;
}
