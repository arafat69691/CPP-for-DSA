// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
// public:
//     int roll, res;
//     double gpa;
//     student(int roll, int res, double gpa)
//     {

//         this->roll = roll;
//         this->res = res;
//         this->gpa = gpa;
//     }
// };
// student *fun()
// {
//     student *ob = new student(30,55,6.78);

//     return ob;
// }
// int main()
// {
//     student *t = fun();

//     cout << t->roll << " " << t->res << " " << t->gpa;
// }

#include <bits/stdc++.h>
using namespace std;
class student{
    public :
    int roll,res;
    double gpa;

};
student* fun(){
    student * t =new student;
    t->roll=43;
    t->res=80;
    t->gpa=5.43;
    return t;
}
int main(){
   student *t= fun();
   cout<<t->roll<<" "<<t->res<<" "<<t->gpa;
}