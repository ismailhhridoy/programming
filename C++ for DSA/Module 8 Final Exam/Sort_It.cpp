#include <bits/stdc++.h>
using namespace std;
class Student
{   
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int english_marks;
};

bool cmp(Student l, Student r)
{
    int l_total_marks = l.math_marks + l.english_marks;
    int r_total_marks = r.math_marks + r.english_marks;

    return l_total_marks == r_total_marks ? l.id < r.id : l_total_marks > r_total_marks;
}

int main()
{
    int n;
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].english_marks;
    }

    sort(students,students+n,cmp);
    
    
    for (int i = 0; i < n; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].english_marks << endl;
    }

    return 0;
}