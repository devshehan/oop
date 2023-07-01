#include <bits/stdc++.h>

using namespace std;

// create a class name employee
class Employee{
    public:
        string name;
        string companyName;
        int age;

        void introduceYourself(){
            cout << "I am " << name << ", Company name :" << companyName << endl;
        }

        Employee(){
            cout << "Default constructor called." << endl;
        }
};

int main(){

    // create a object
    Employee emp1;

    emp1.name = "shehaan";
    emp1.companyName = "LSEG";
    emp1.age = 23;

    emp1.introduceYourself();


    return 0;
}