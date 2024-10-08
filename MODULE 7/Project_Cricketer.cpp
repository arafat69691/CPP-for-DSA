#include<bits/stdc++.h>
using namespace std;
class cricketer{
    public:
    string name;
    int run;
    int match,avg;
};
int main (){
    int n ;
    cin>>n;
    cricketer st[n];
    for(int i = 0; i<n ; i++){
        cin>>st[i].name>>st[i].run>>st[i].match;
    }
    for(int i = 0 ; i<n ; i++){
        st[i].avg=st[i].run/st[i].match;

    }
    for(int i = 0 ; i<n ; i++){
        cout<<st[i].name<<" "<<st[i].run<<" "<<st[i].match<<" "<<st[i].avg;
        
    }

    return 0;
}