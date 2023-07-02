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

class Developer: public Employee{
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

class Doctor: public Employee{
private:
    int numberOfsurgeries;
public: 
    Doctor(string username, string companyname, int age, int numberOfSurge)
        : Employee(username, companyname, age){
            numberOfsurgeries = numberOfSurge;
    }

    void doctorRecord(){
        cout << name << " have done " << numberOfsurgeries << " surgeries successfully." << endl;
    }

};

int main(){

    Employee e1 = Employee("Shehan", "LSEG", 23);
    // e1.introduceYourSelf();
    
    Developer d1 = Developer("Anuradha", "IFS", 24, "JavaScript");
    d1.fixBugs();
    d1.introduceYourSelf();

    cout << endl;

    Doctor doc1 = Doctor("Sahan", "Goverment", 24, 12);
    doc1.doctorRecord();
    doc1.introduceYourSelf();


    return 0;
}