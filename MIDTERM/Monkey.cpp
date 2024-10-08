#include <bits/stdc++.h>

using namespace std;

int main()
{
    char st[100010];
    while (fgets(st, 100010, stdin))
    {
        char tmp[100010];
        int len = strlen(st);
        int ct = 0;

        for (int i = 0; i < len; i++)
        {
            if (st[i] >= 'a' && st[i] <= 'z')
            {
                tmp[ct++] = st[i];
            }
        }
        tmp[ct] = '\0';

        sort(tmp, tmp + ct);

        cout << tmp << "\n";
    }
    return 0;
}