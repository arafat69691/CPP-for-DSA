#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int marks;
};
bool cp(student a , student b){
   if(a.marks < b.marks){
        return false;
   }
   else if(a.marks > b.marks){
        return true;
   }
   else{
        if(a.roll > b.roll){
            return false;
        }
        else{
            return true;
        }
   }
}
int main()
{
    int n;
    cin >> n;
    student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].roll >> ar[i].marks;
    }
    sort(ar,ar+n,cp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
    }
    cout << endl;
    return 0;
}