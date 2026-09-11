#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    string empId, empName;
    float empSalary;
    
    public:
    static int counter;
    Employee(string id, string name, float slry){
        empId = id;
        empName = name;
        empSalary = slry;
        counter++;
    }
    friend void display(Employee& emp);    
};

int Employee::counter = 0;


void display(Employee& emp){
    cout<<emp.empId<<" "<<emp.empName<<" "<<emp.empSalary<<endl;
    return;
}

int main(){
    cout<<"\n";
    Employee e1("25A25", "Aman", 285000.0);
    Employee e2("25A20", "Akshat", 585000.0);
    Employee e3("25A23", "Akshit", 285000.0);
    display(e1);
    display(e2);
    display(e3);
    cout<<"Total number of employees : "<<Employee::counter;
    cout<<"\n\n";
    return 0;
}