#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>number_list;
    int num;
    while (cin >> num)
    {
        number_list.push_back(num);        
    }

    number_list.sort();

    number_list.unique();

    for (int num : number_list)
    {
        cout << num << " ";
    }
    
    
    return 0;
}