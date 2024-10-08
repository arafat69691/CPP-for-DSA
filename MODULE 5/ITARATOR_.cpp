#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s = "ARAFAT";
    // cout<<*s.begin();
    // cout<<*(s.end()-1);
    // create Iterator

    // string :: iterator ar;
    // for(ar =s.begin(); ar<s.end();ar++){
    //     cout<<*ar<<endl;
    // }


    // use Another version
    string s ;
    cin>>s;

    for(auto n=s.end(); n>=s.begin() ; n--){
        cout<<*n<<endl;
    }
}