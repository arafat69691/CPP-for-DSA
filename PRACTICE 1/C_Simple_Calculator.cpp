#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a;
    cin >>n>>a;
    long long  int sum = n+a; 
     long long int mul = n*a; 
    long int sub = n-a; 
    cout<<n<<" "<<"+"<<" "<<a<<" "<<"="<<" "<<sum<<endl; 
    cout<<n<<" "<<"*"<<" "<<a<<" "<<"="<<" "<<mul<<endl; 
    cout<<n<<" "<<"-"<<" "<<a<<" "<<"="<<" "<<sub<<endl; 
}