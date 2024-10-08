// #include<bits/stdc++.h>
// using namespace std;
// class student{
//     public:
//     int roll,gpa,res;

// };
// int main(){
//         student* t=new student;
//         t->roll=489;
//         t->res=40;
//         cout<<t->roll<<" "<<(*t).res;
// }


// DYNAMIC OBJECT CREATE USING CONSTRUCTOR

#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int roll,res;
    double gpa;
    student(int roll,int res,double gpa){
        this->roll=roll;
        (*this).res=res;
        this->gpa=gpa;
    }
};
int main(){
    student* ob=new student(10,20,30);
    cout<<t->roll<<" "<<t->res<<" "<<t->gpa;


}