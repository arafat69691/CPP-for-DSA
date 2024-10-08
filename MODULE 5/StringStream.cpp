#include<bits/stdc++.h>
using namespace std;
int main(){
    //string er word etra kore print korte stringstram use kora hoi

    string s;
    getline(cin,s);
    // stringstream ss(s);
    //see another way string stream
    stringstream ss;
    ss<<s;
    string word;




    // ss>>word;
    // cout<<word

    // using loop

   while(ss>>word){
    cout <<word<<endl;
   }
  
    
    return 1;
}