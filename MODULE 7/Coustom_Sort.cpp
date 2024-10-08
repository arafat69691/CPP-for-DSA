#include <bits/stdc++.h>
using namespace std;
class fr
{
public:
    char value;
    int count;
};
bool cmp(fr a, fr b)
{
    return a.count > b.count;
}
int main()
{
    string s;
    cin >> s;
    fr ar[26];
    for (int i = 0; i < 26; i++)
    {
        ar[i].value = char(i + 'a');
        ar[i].count = 0;
    }
    for (char c : s)
    {
        int ascii = c - 'a';
        ar[ascii].count++;
    }
    sort(ar, ar + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        if (ar[i].count > 0)
        {
            for (int j = 0; j < ar[i].count; j++)
            {
                cout << ar[i].value;
            }
        }
    }

    return 0;
}