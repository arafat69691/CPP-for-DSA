#include<bits/stdc++.h>
using namespace std;
class student {
    public :
    int roll;
    int cls;
    double gpa;
    student(int roll, int cls, double gpa){
       this->roll=roll;
       this->cls=cls;
       this->gpa=gpa;
    }
};
int main(){
    student ob(10,20,4.33);
    cout<<ob.roll<<" "<<ob.cls<<" "<<ob.gpa;
}