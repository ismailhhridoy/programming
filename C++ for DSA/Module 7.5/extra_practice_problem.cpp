#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    double marks;
};

bool cmp(Student l, Student r)
{

    return l.marks == r.marks ? l.roll > r.roll : l.marks < r.marks;
}

int main()
{
    int n;
    cin >> n;

    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].roll >> ar[i].marks;
    }

    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << ' ' << ar[i].roll << ' ' << ar[i].marks << endl;
    }

    return 0;
}