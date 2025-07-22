#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // int mn = INT_MAX;

    // for (int i = 0; i < 3; i++)
    // {
    //     mn = min(a[i].marks, mn);
    // }

    //    cout << mn << endl;

    Student mn;
    mn.marks = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        if (a[i].marks < mn.marks)
        {
            mn = a[i];
        }
    }

    cout << mn.name << mn.roll << mn.marks;

    return 0;
}