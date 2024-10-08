#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "YEASIN ARAFAT";
    // cin>>s;
    // for(int i = 0 ; i<s.size(); i++){
    //     cout<<s[i]<<endl;
    // }

    // print shortest way
    int cnt =0;
    for(char c:s){
        // cout<<c<<endl;
        cnt++;
    }
    cout<<cnt;
}