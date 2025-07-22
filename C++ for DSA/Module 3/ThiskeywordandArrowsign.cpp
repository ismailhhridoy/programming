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
        // (*this).roll = roll;
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

main()
{   

    Student rahim(45, 10, 4.56);
    Student karim(46, 10, 4.56);
        

    cout << rahim.roll << ' ' << rahim.cls << ' ' << rahim.cgpa << endl;
    cout << karim.roll << ' ' << karim.cls << ' ' << karim.cgpa << endl;
    
    return 0;
}