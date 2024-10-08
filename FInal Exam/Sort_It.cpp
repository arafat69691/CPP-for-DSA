#include<bits/stdc++.h>
using namespace std;
class school{
    public :
    string name;
    int cl ,id,math,eng,total;
    string sec;
};
bool cmp(school a, school b){
    if(a.total>b.total){
        return true;
    }
    else if(a.total<b.total) {
        return false;
    }
    else{
        if(a.id<b.id){
            return true;
        }
        else if(a.id > b.id){
            return false;
        }
    }
}
int main (){
    int n;
    cin>>n;
    school ar[n];
    for(int i = 0; i<n ;i++){
        cin>>ar[i].name>>ar[i].cl>>ar[i].sec>>ar[i].id>>ar[i].math>>ar[i].eng;
    }
    for(int i = 0; i<n ;i++){

        ar[i].total=ar[i].math+ar[i].eng;
    }
    sort(ar,ar+n,cmp);
    for(int i = 0; i<n ;i++){


        cout<<ar[i].name<<" "<<ar[i].cl<<" "<<ar[i].sec<<" "<<ar[i].id<<" "<<ar[i].math<<" "<<ar[i].eng<<" "<<endl;
    }
    return 0;
}