#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {4,10,15,4,12};

    // l.remove(10);

    // l.sort();
    // l.sort(greater<int>());
    // l.unique(); //REmove duplicate, only work if list is sorted
    l.reverse();
    
    for (int val : l)
    {
        cout << val << endl;
    }
  

    return 0;
}