#include <bits/stdc++.h>

using namespace std;


class Employee{
private:
    string company;
    int age;
protected:
    string name;
public: 
    Employee(string username, string usercompany, int userage){
        name = username;
        company = usercompany;
        age = userage;
    }

    void introduceYourSelf(){
        cout << "Your name : " << name << endl;
        cout << "Company : " << company << endl;
        cout << "Your age : " << age << endl;
    }
};

class Developer:Employee{
private:
    string favProgrammingLang;
public: 
    Developer(string username, string companyname, int age, string favPrgrammingLanguage)
        : Employee(username, companyname, age) {
        favProgrammingLang = favPrgrammingLanguage;
    }

    void fixBugs(){
        cout << name << " fixed bugs using " << favProgrammingLang << endl;
    }

};

int main(){

    Employee e1 = Employee("Shehan", "LSEG", 23);
    e1.introduceYourSelf();
    

    Developer d1 = Developer("Anuradha", "IFS", 24, "JavaScript");
    d1.fixBugs();


    return 0;
}