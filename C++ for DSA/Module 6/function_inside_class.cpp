#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;

    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    void fun()
    {
        cout << "Hello from " << name;
    }


};

int main()
{
    Student rakib("Rakib",10);
    rakib.fun();
    return 0;
}