// #include<bits/stdc++.h>
// using namespace std;
// class student{
//     public :
//     int roll,marks;
//     string name;
// };
// int main (){
//     student ar [2]; //Dynamic Array of Object -> student *ar = new student[3];
//     for (int i = 0 ; i< 2 ; i++){
//         cin>>ar[i].name>>ar[i].roll>>ar[i].marks;
//     }
//     for(int i = 0 ; i<2 ; i++){
//         cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<endl;
//     }  
//     return 0;
// }



/*String space soho input nite */




#include<bits/stdc++.h>
using namespace std;
class student{
    public :
    int roll,marks;
    string name;
};
int main (){
    student ar [2];
    for (int i = 0 ; i< 2 ; i++){
        getline(cin,ar[i].name);
    
        cin>>ar[i].roll>>ar[i].marks;
        cin.ignore();
    }
    for(int i = 0 ; i<2 ; i++){
        cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<endl;
    }  
    return 0;
}
