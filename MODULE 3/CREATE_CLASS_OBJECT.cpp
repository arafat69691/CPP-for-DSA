#include<bits/stdc++.h>
using namespace std;
class Student{
    public :
    int roll;
    string name;
    float cgpa;
    char ob[100];
};
int main(){
    Student a,b;
    // a.name="ARAFAT";

    // a.cgpa=5.838;

    // a.roll=793;

    // char ar[100]="YEASIN";
    // strcpy(a.ob,ar);

    //Using input;
     cin.getline(a.ob,100);
    cin>>a.roll>>a.cgpa;

     getchar();

    cin.getline(b.ob,100);
    cin>>b.roll>>b.cgpa;
    
    cout<<" STUDENT 1"<<" "<<a.ob<<" "<<a.cgpa<<" "<<a.roll<<endl;
    cout<<" STUDENT 2"<<" "<<b.ob<<" "<<b.cgpa<<" "<<b.roll<<endl;
    return 0;
}