#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n; cin >> n;
    long long int digit;
    bool is_lucky = false;
    while (n > 0)
    {
        digit = n % 10;
        if(digit == 7)
        {
            is_lucky = true;
            break;
        }

        n= n/10;
    }

    if(is_lucky)
        cout << "Lucky";
    else
        cout << "Not Lucky";

    

    return 0;
}