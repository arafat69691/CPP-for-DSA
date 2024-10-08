#include <bits/stdc++.h>
using namespace std;
int main()
{
    char n;
    cin >> n;
    if (n>='0'&&n<='9' )
    {
        cout << "IS DIGIT"<<endl;
    }
    else if (n>='A'&&n<='Z' )
    {
        cout << "ALPHA"<<"\n"<<"IS CAPITAL";
    }
    else
    {
        cout<<"ALPHA" <<"\n"<< "IS SMALL";
    }
}