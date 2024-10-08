#include<bits/stdc++.h>
using namespace std;
class student{
    public :
    string name;
    int roll,cls,marks1,marks2;
    student (string name,int roll,int cls,int marks1,int marks2){
        this->name=name;
        this->roll=roll;
        this->cls=cls;
        (*this).marks1=marks1;
        this->marks2=marks2;
    }
    void fun(){
        
        cout<<name<<" "<<roll<<" "<<cls;
    }
    int sum(){
        return marks1+marks2;
    }
};
int main(){
        student ob("YEASIN",45,12,45,45);
        // cout<<ob.name<<" "<<ob.roll<<" "<<ob.cls;
        ob.fun();
       cout<<" "<< ob.sum();
}