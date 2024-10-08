#include <bits/stdc++.h>
using namespace std;
class Student
{
public://Input perametes;
    
    string name,section;
    
    int id,math,english,cl;
   
};
bool cmp(Student a, Student b)

{
    if (a.english == b.english)
    {

        if (a.math == b.math)
            
            return a.id < b.id;
        else

            return a.math > b.math;
    }
    else
    {

        return a.english> b.english;
    }
}
int main()
{

    int n;

    cin >> n;

    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        //input;
        cin >> ar[i].name >> ar[i].cl >> ar[i].section >> ar[i].id >> ar[i].math >> ar[i].english;

    }

    sort(ar, ar + n, cmp);//sort
    for (int i = 0; i < n; i++)

    {  //Output
        cout << ar[i].name << " " << ar[i].cl << " " << ar[i].section << " " << ar[i].id << " " << ar[i].math << " " << ar[i].english << endl;
    }

    return 0;
}