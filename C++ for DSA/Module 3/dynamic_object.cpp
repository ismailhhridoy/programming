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
    Student rahim(45, 10, 4.56);
    return rahim;
}

Student* fun2()
{
    Student* kuddus = new Student (47, 10, 4.56);
    return kuddus;
}

main()
{

    Student obj = fun(); // static object 
    Student* obj2 = fun2(); // dynamic object pointer return possible 
    Student* karim = new Student(46,10,3.56); // Dynamic Object

    cout << obj.roll << ' ' << obj.cls << ' ' << obj.cgpa << endl;
    cout << obj2->roll << ' ' << obj2->cls << ' ' << obj2->cgpa << endl;
    cout << karim->roll << ' ' << karim->cls<< ' ' << karim->cgpa << endl;

    return 0;
}