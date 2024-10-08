#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int id, Math, Bangla, English;

    int Total_Mark, ROLL;
    float avg;
    string GPA;
};
bool cmp(person a, person b)
{
    if (a.avg > b.avg)
    {
        return true;
    }
    else if (a.avg < b.avg)
    {
        return false;
    }
    else
    {
        if (a.English < b.English)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    person ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].id >> ar[i].Math >> ar[i].Bangla >> ar[i].English;
    }
    cout << endl;
    cout << "\t \t Student Result Card" << endl
         << "SL " << "NAME " << "ID " << "MATH " << "BANGLA " << "ENGLISH " << "TOTAL  " << "AVERAGE " << "GPA" << endl
         << "** **** *** **** ****** ******* ***** **** ****" << endl
         << "";
    // sort(ar, ar + n, cmp);
    for (int i = 0; i < n; i++)
    {
        ar[i].Total_Mark = ar[i].Math + ar[i].Bangla + ar[i].English;
        ar[i].avg = ar[i].Total_Mark / 3;
    }
    sort(ar, ar + n, cmp);
    for (int i = 0; i < n; i++){
        if (ar[i].avg >= 80)
        {
            ar[i].GPA = "A+";
        }
        else if (ar[i].avg >= 70)
        {
            ar[i].GPA = "A";
        }
        else if (ar[i].avg >= 60)
        {
            ar[i].GPA = "B+";
        }
        else if (ar[i].avg >= 50)
        {
            ar[i].GPA = "B";
        }
        else if (ar[i].avg >= 40)
        {
            ar[i].GPA = "C+";
        }
        else if (ar[i].avg > 33)
        {
            ar[i].GPA = "C";
        }
        else
            ar[i].GPA = "FAIL";

        cout << i + 1 << "\t" << ar[i].name << "\t" << ar[i].id << "\t" << ar[i].Math << "\t" << ar[i].Bangla << "\t" << ar[i].English << "\t" << ar[i].Total_Mark << "\t\t" << setprecision(4) << ar[i].avg << "\t\t" << ar[i].GPA << endl;
    }
}
