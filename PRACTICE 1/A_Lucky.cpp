#include<bits/stdc++.h>
using namespace std;
int main (){
    class lucky{
        public :
        int n,n1,n2,n3,n4,n5;
    };
    int n ;
    cin>>n;
    lucky ar[n];
    for(int i = 0 ; i<n ; i++){
        cin>>ar[i].n>>ar[i].n1>>ar[i].n2>>ar[i].n3>>ar[i].n4>>ar[i].n5;
    }
    for(int i = 0 ; i<n ; i++)
    {
        int p = ar[i].n+ar[i].n1+ar[i].n2;
        int r =ar[i].n3+ar[i].n4+ar[i].n5;
        if(p==r){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }    
        return 0;
        
}