#include<bits/stdc++.h>
using namespace std;
class student {
    public :
    int roll,gpa,res;
    student(int roll,int gpa,int res){
        this->roll=roll;
        this->gpa=gpa;
        this->res=res;
    }
};
student* fun(){
    student ob(10 ,20 ,30);
    student * p =&ob;
    return p;
}
int main(){
    student* t =fun();
    cout<<t->roll<<" "<<t->gpa;
}
// wrong
//  ....karon jokhon amra funution call kori tokhon seee ob er address dei ebong delete hoye jai ....fooole fun er modddhe p ooo ob er sokol kichu muche jaai....Shudhu matro main ee t er moddhe ob er address thake.