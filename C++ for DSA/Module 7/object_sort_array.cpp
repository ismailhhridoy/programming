#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r)
{
    // if (l.marks < r.marks)
    // {
    //    return true;
    // } else
    // {
    //     return false;
    // }

    // return l.marks < r.marks;

    // if (l.marks == r.marks)
    // {
    //     return l.roll < r.roll;
    // } else
    // {
    //     return l.marks < r.marks;
    // }
    
    return l.marks == r.marks ? l.roll < r.roll : l.marks < r.marks;

}

int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a,a+3,cmp);

    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << ' ' << a[i].roll << ' ' << a[i].marks << endl;
    }

    return 0;
}