#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {5,10,15,12};
    
    cout << *l.begin() << endl; // these are iterators that'swhy print by dereference
    l.end();// It can't print because it's point after the last element;

    return 0;
}