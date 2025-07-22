#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int ar[5];// static array
    int* ar = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> ar[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << " ";
    }
    
    return 0;
}