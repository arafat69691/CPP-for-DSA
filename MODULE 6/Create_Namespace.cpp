#include<bits/stdc++.h>
using namespace std;
namespace yeasin{ // Namespace er vhitor ekadhik variable , Function , class Group akare rakha jaaai..
    int age = 30;
    void fun(){
        cout<<age;
    }
    class orko{
        public :
        int roll;
        string name;
    };
}
using namespace yeasin;
int main(){
    fun(); // Access function
    orko ob; // Access  class
    ob.roll=30;
    cout<<ob.roll;

}

//** namespace er upadan same hote parbe na..Same hole spacified kore dite hobe...