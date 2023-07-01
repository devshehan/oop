#include <bits/stdc++.h>

using namespace std;

class Employee{
private: 
    string name;
    string companyName;
    int age;
public: 

    // constructor
    Employee(string username, string usercompany, int userage){
        name = username;
        companyName = usercompany;
        age = userage;
    }

    void introduceYourSelf(){
        cout << "user name : " << name << endl;
        cout << "user company : " << companyName << endl;
        cout << "user age : " << age << endl;
    }

    // to access private properties of class need to build setters and getters
    void setName(string ename){ // setter
        name = ename;
    }

    string getName(){ // getter
        return name;
    }
};


int main(){

    //create a object
    Employee emp1 = Employee("Shehaan", "LSEG", 23);
    Employee emp2 = Employee("Anuradha", "IFS", 24);

    // emp2.introduceYourSelf();

    // set the user name
    emp1.setName("devshehan");
    emp1.introduceYourSelf();
    // get the user name
    cout << emp1.getName() << endl;



    return 0;
}