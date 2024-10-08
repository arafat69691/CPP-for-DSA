#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string w;
    int flag=0;
    while(ss>>w){
        if(w=="Jessica"){
            flag =1;
        }

    }
    if (flag == 1) cout<<"YES";
    else cout<<"NO";
    return 0;
}