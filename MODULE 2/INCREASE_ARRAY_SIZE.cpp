#include<bits/stdc++.h>
using namespace std;
int main(){
    int *a =new int [3];
    int *b = new int [3];
    for(int i = 0 ; i<3 ; i++){
        cin>>a[i];
        b[i]=a[i];

    }
    delete[] a;
 
    a = new int [5];
    for(int i = 0 ; i<3 ; i++){
        
      
        a[i]=b[i];
    }
    delete[] b;
    a[1]=0;
    a[3]=9;
    a[4]=8;
    for(int i = 0 ; i<5 ; i++){
        
        cout <<a[i]<<endl;
    }
    for(int i = 0 ; i<3 ; i++){
        
        cout <<b[i];
    }

}