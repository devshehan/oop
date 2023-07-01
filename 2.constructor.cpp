#include <bits/stdc++.h>

using namespace std;

class Employee{

public:
    string name;
    string companyName;
    int age;

    //create custom constructor
    Employee(string empName, string empCompany, int empAge){
        name = empName;
        companyName = empCompany;
        age = empAge;
    }

    void introduceYourSelf(){
        cout << "Hello my name is: " << name << " and I am " << age << " years old." << endl;
    }
};

int main(){

    // create a object
    Employee emp1 = Employee("Shehaan","LSEG",23);
    emp1.introduceYourSelf();

    Employee emp2 = Employee("Anuradha","IFS", 24);
    emp2.introduceYourSelf();

    // allow to access private details in the class
    cout << emp1.age << endl;

    return 0;
}