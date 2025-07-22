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
    
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << ' ' << a[i].roll << ' ' << a[i].marks << endl;
    }
     
    return 0;
}