#include <iostream>
using namespace std;

class employee
{
private:
    int eid;
    string name;

public:
employee(int e, string n){
eid = e;
name = n;
}

int getEmployeeID(){return eid;};

string getEmployeeName(){return name;};
};


class FullTimeEmployee:public employee
{
    private:
    int salary;
    public:
    FullTimeEmployee(int e, string n,int s):employee(e,n){
        salary = s;
    }

    int getSalary(){return salary;};
    
};

class PartTimeEmployee:public employee{
    private:
    int wage;
public:
PartTimeEmployee(int e, string n, int w):employee(e,n){
    wage  = w;
};

int getWage(){return wage;}

};

int main(){
    FullTimeEmployee p1(1,"vishal",70000);
    PartTimeEmployee p2(2,"kunal",40000);
    cout<<"Salary of "<<p1.getEmployeeName()<<" is "<<p1.getSalary()<<endl;
    cout<<"Daily wage of "<<p2.getEmployeeName()<<" is "<<p2.getWage()<<endl;
}

