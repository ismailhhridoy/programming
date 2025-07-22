#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {4,10,15,12};
    list<int> l2 = {9,10,11,5};

    // l = l2;

    // l.push_back(5);
    // l.push_front(7);
    // l.pop_front();
    // l.pop_back();

    // cout << *next(l.begin(),2);

    // l.insert(next(l.begin(),2),100);
    // l.insert(next(l.begin(),2),l2.begin(),l2.end()); // we can insert vector,array

    // l.erase(next(l.begin(),2),next(l.begin(),4));
    // replace(l.begin(),l.end(),10,5);
    auto it = find(l.begin(),l.end(),10); // Returns an iterator pointing to the element
    if (it == l.end())
    {
        cout << "Not Found" <<endl;
    }
    else{
        cout << "Found" <<endl;
    }
    
    for (int val : l)
    {
        cout << val << endl;
    }

  

    return 0;
}