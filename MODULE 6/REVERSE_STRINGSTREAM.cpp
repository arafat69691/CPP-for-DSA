#include<bits/stdc++.h>
using namespace std;
void fun(stringstream& ss){
    string word;
    if(ss>>word){
        fun(ss);
        cout<<word<<endl;
    }
}
int main()
{
    string s ="I AM YEASIN ARAFAT . I STUDY AT FENI POLYTECHNIC INSTITUTE";
    stringstream ss(s);
  
    fun(ss);

    return 0;
}
