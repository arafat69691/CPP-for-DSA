#include<iostream>
// #include<algorithm>
#include<utility>
using namespace std;
// void fun(int *a,int *b){
//     int tmp = *a;
//     *a=*b;
//     *b=tmp;
//     // cout<<a<<b;
// }
int main(){
    int a,b;
    cin>>a>>b;
   swap(a,b);
   cout<<a<<" "<<b;
}