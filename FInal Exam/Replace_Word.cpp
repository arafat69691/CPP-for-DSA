#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;



    while (t--)
    {
        string s, s1;
        cin >> s >> s1;
        int t = s1.size();
    //    while(s.find(s1)--){

    //    }
        while (s.find(s1) != -1)
        {
            s.replace(s.find(s1), t, "#");
        }
        cout << s << endl;
    }

    return 0;
}