#include <bits/stdc++.h>

using namespace std;

//create class
class Employee{
private:
    string company;
    int empAge;
protected:
    string empName;
public:
    // create constructor
    Employee(string inputName, string inputCompany, int inputAge){
        empName = inputName;
        company = inputCompany;
        empAge = inputAge;
    }

    // create method
    void introduceYourSelf(){
        cout << "Your name is : " << empName << endl;
        cout << "Company name is : " << company << endl;
        cout << "You are " << empAge << " years old." << endl;
    }

    virtual void work(){
        cout << "Employer check email, work hard, earn money." << endl;
    }
};

// create developer class
// child not allowed to access parent methods to do that need to set employee as the public
class Devloper : public Employee{
private:
    string favProgrammingLang;
public: 
    // create developer constructor
    Devloper(string devName, string company, int devAge, string favProgrammingLanguage)
        : Employee(devName,company, devAge){
            favProgrammingLang = favProgrammingLanguage;
    }

    // method unique for developer
    void fixBugs(){
        cout << empName << " fixed bugs using" << favProgrammingLang << endl;
    }

    void work(){
        cout << empName << " work hard to build new innovations." << endl;
    }
};

// create doctor class
class Doctor : public Employee{
private:
    int numberOfSurgeries;
public:
    // create doctor costructor
    Doctor(string docName, string company, int age, int docNumberOfSurgeries) 
        : Employee(docName, company, age){
            numberOfSurgeries = docNumberOfSurgeries;
    }

    void chanelPatients(){
        cout << empName << " chanel patients and have done " << numberOfSurgeries << " surgeries successfully." << endl;
    }

    void work(){
        cout << empName << " work hard to make people feels better." << endl;
    }

};


int main(){

    Devloper d1 = Devloper("devshehan", "LSEG", 23, "C++");
    // d1.introduceYourSelf();
    // d1.fixBugs();
    // d1.work();

    // polymorphism -> poly + morphism -> many forms

    cout << endl;

    Doctor doc1 = Doctor("sahan", "Goverment", 23, 3);
    // doc1.introduceYourSelf();
    // doc1.chanelPatients();
    // doc1.work();

    Employee* e = &d1;
    Employee* d = &doc1;

    e->work();
    d->work();


    return 0;
}















