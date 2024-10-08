#include <bits/stdc++.h>

using namespace std;

class school
{
public:
    int id;
    char name[1001];
    char section[1001];
    int marks;
};

int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        school p;
        school s;
        school o;
        school student;

        cin >> p.id >> p.name >> p.section >> p.marks;
        cin >> s.id >> s.name >> s.section >> s.marks;
        cin >> o.id >> o.name >> o.section >> o.marks;

        student = p;

        if (s.marks > student.marks || (s.marks == student.marks && s.id <student.id))
        {
            student = s;
        }

        if (o.marks > student.marks || (o.marks == student.marks && o.id <student.id))
        {
            student = o;
        }

        cout << student.id << " " <<student.name << " " << student.section << " " <<student.marks << endl;
    }
    return 0;
}