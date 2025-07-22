#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 5};
    // vector<int> v2;
    // v2 = v; // assign array
    // for (int x : v2)
    // {
    //     cout << x << " ";
    // }

    // v.pop_back();
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // vector<int> v2 = {100,200,300};

    // // v.insert(v.begin()+1,5);// single value insert
    // v.insert(v.begin()+1,v2.begin(),v2.end());// multiple value insert
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // v.erase(v.begin()+1);// single value erase
    // v.erase(v.begin()+1,v.end()-1);// multiple value erase
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // replace(v.begin(),v.end(),2,9);
 
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    auto it = find(v.begin(),v.end(),2); // use iterator
    if (*it == 2)
    {
        cout << "Found";
    } else{
        cout << "Not Found";
    }


    return 0;
}