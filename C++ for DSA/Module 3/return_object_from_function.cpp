#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double cgpa;

    Student(int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

Student fun()
{
    Student rahim(45, 10, 4.56); // static object created
    return rahim;
}

main()
{

    Student obj = fun(); // it's only return static object not return pointer. that'swhy we need dynamic object

    cout << obj.roll << ' ' << obj.cls << ' ' << obj.cgpa << endl;

    return 0;
}