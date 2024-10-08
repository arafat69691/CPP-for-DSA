#include<bits/stdc++.h>
using namespace std;
class person{
    public :
    string name;
    int age;

    person(string nm,int ag){
        name = nm;
        age = ag;
    }
};
int main(){
    person* ob= new person("YEASIN",23); //Dynammic class ebong object e always pointer use korte hobe..
    person* ob1= new person("ARAFAT",24);
    person* ar= new person("for test" , 34);
    
    
    // ob = ob1;   //1-> evhabe copy kora jai..kitu ata wrong ..karon ob1 jodi delete hoye jai tahole heap memory theke delete hoye jabe foole ob er kono value pabe naa..

    // ob->age=ob1->age;    //2 -> Dereference kore ob er value ob1 e copy kora jaai ..
    // ob->name=ob1->name;   // Ekadhik object copy korar khetre evhabe kora jai.
    // delete ob1;
    *ob=*ob1;   //   3 -> Avhabe copy kora easy..

    cout<<ob->name<<" "<<ob->age;   //printf korar somoy always derefernce korte hobe!!!
}