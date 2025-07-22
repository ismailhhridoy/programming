#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    int t;
    cin >> t;

    for (int tc = 0; tc < t; tc++)
    {
        
        Student one, two, three;
        cin >> one.id >> one.name >> one.section >> one.marks;
        cin >> two.id >> two.name >> two.section >> two.marks;
        cin >> three.id >> three.name >> three.section >> three.marks;

        Student topper = one;

        if (two.marks > topper.marks) {
            topper = two;
        }
        else if (two.marks == topper.marks) {
            if (two.id < topper.id) {
                topper = two;
            }
        }

        if (three.marks > topper.marks) {
            topper = three;
        }
        else if (three.marks == topper.marks) {
            if (three.id < topper.id) {
                topper = three;
            }
        }
        
        cout << topper.id << ' ' << topper.name << ' ' << topper.section << ' ' << topper.marks << endl;
        
    }

    return 0;
}