// #include<bits/stdc++.h>
// using namespace std;
// class Student {
//     public :
//     int roll;
//     int cls;
//     double cgpa;
//     Student(int roll,int cls , double cgpa){
//         this->roll=roll;
//         this->cls=cls;
//         this->cgpa=cgpa;
//     }
// };
// Student fun(){
//     Student ob(10,20,4.56);
//     return ob;
// }
// int main(){
//     // fun();
//     Student t = fun();
    
//     cout<<t.roll<<" "<<t.cls<<" "<<t.cgpa;
// }


#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    int roll,cls,gpa;

};
Student fun(){
    Student ob;
    ob.roll=432;
    ob.cls=9;
    ob.gpa=5;
    return ob;
}
int main(){
   Student t=fun();
   cout<<t.roll<<" "<<t.cls<<" "<<t.gpa;
}