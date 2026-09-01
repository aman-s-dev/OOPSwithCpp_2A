#include<iostream>
using namespace std;

class Employee{
    private:
    string empId, empName;
    float empSalary;

    public:
    void Input(string id, string name, float slry);
    void display();    
};

void Employee::Input(string id, string name, float slry){
    empId = id;
    empName = name;
    empSalary = slry;
    return;
}

void Employee::display(){
    cout<<empId<<" "<<empName<<" "<<empSalary<<endl;
    return;
}

int main(){
    Employee e1;
    e1.Input("25A25", "Aman", 85000.0);
    e1.display();


}