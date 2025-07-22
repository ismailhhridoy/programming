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
    if (l.english_marks != r.english_marks)
    {
        return l.english_marks > r.english_marks;
    }
    else if (l.math_marks != r.math_marks)
    {
        return l.math_marks > r.math_marks;
    }
    else
    {
        return l.id < r.id;
    }
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

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].english_marks << endl;
    }

    return 0;
}