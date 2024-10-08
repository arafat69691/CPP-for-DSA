#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    int roll ;
    int n;
};bool cmp(person a, person b)
{
     if(a.roll > b.roll)   return true;
     else return false;
}
int main()
{
    person ar[2];
    for (int i = 0; i < 2; i++)
    {

        cin >> ar[i].roll>>ar[i].n ;
    }
    for (int i = 0; i < 2; i++){
        cout << ar[i].roll<<" "<<ar[i].n;
    }
    return 0;
}