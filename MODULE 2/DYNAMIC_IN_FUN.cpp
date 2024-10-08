#include<bits/stdc++.h>
using namespace std;
int * fun(){
    int * p =new int;
    *p=400;
    cout<<"fun : "<<p<<endl;
    return p;
}
int main (){
    int *t = fun();
    cout<<*t;
}