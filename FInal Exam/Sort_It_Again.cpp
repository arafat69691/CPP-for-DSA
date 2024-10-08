#include<bits/stdc++.h>
using namespace std;
class person{
    public :
    string name,sec;
    int cl,id,math,english;
};
bool cmp(person a , person b){
    if(a.english>b.english){
        return true;
    }
    else if(a.english<b.english){
        return false;
    }
    else{
        if(a.math>b.math){
            return true;
        }
        else if(a.math<b.english){
            return false;
        }
        else{
            if(a.id<b.id){
                return true;
            }
            else {
                return false;
            }
        }
    }
}
int main (){
    int n;

    cin>>n;
    person ar[n];
    for(int i = 0; i<n ; i++){
        cin>>ar[i].name>>ar[i].cl>>ar[i].sec>>ar[i].id>>ar[i].math>>ar[i].english;
    
    }
    sort(ar,ar+n,cmp);

    for(int i = 0; i<n ; i++){
        cout<<ar[i].name<<" "<<ar[i].cl<<" "<<ar[i].sec<<" "<<ar[i].id<<" "<<ar[i].math<<" "<<ar[i].english<<endl;
    }
    return 0;
}