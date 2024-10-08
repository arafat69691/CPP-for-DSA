#include<bits/stdc++.h>
using namespace std;
class person{
    public :
    string name;
    int cl;
    string sec;
    int id;
};
int main (){
    int n ;
    cin>>n;
    person ar[n];
    for(int i = 0 ;i<n ; i++){
        cin>>ar[i].name>>ar[i].cl>>ar[i].sec>>ar[i].id;
    }
    for(int i = 0 ; i< n-1; i++){
        for(int j = i+1; j<n ;j++){
            swap(ar[i].sec,ar[j].sec);
        }
    }
    for(int i = 0 ; i<n ;i++){
        cout<<ar[i].name<<" "<<ar[i].cl<<" "<<ar[i].sec<<" "<<ar[i].id<<endl;
    }
    return 0;
}