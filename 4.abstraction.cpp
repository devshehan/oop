#include <bits/stdc++.h>

using namespace std;

// Abstraction
class AbstractEmployee{
    virtual void askForPromotion()=0;
};


class Employee{
private:
    string name;
    string companyName;
    int age;

public: 
    Employee(string username, string usercompany, int userAge){
        name = username;
        companyName = usercompany;
        age = userAge;
    }

    void introduceYourSelf(){
        cout << "Your name is : " << name << " , and I am " << age << " years old. work for " << companyName << endl;
    }


    //implement abstract function
    void askForPromotion(){
        if(age>=23){
            cout << "got promoted!!" << endl;
        }else{
            cout << "sorry no promotion!!" << endl;
        }
    }
};


int main(){

    Employee emp1 = Employee("devshehan", "LSEG", 23);
    emp1.introduceYourSelf();

    emp1.askForPromotion();
    return 0;
}