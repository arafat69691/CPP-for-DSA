//type 1.

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int p, q;
        cin >>p;
        cin>>q;
        int ar[p];
        for (int i = 0; i < p; i++)
            cin >> ar[i];
       

        bool flag = false;

        for (int i = 0; i < p - 2; i++)
        {
            for (int j = i + 1; j < p - 1; j++)
            {
                for (int a = j + 1; a < p; a++)
                {

                    int sum = ar[i] + ar[j] + ar[a];
                    // cout << sum<<endl;
                    if (sum == q)
                    {
                        flag = true;
                        break;
                    }

                }


                if (flag)
                    break;
            }
            if (flag)
                break;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}