#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls ;
    double gpa ;
    Student(int r , int c , double g){
        roll = r;
        cls = c;
        gpa=g;
    }
};
int main(){
    Student ob(20,30,4.32);
    cout <<ob.roll<<" "<<ob.cls<<" "<<ob.gpa;
}