#include<iostream>
#include<string>
using namespace std;

class Patient{
    private:
    string id, name;

    public:

    static int activePatients;
    
    Patient(string id, string name){
        this->id = id;
        this->name = name;
        activePatients++;
    }

    ~Patient(){
        activePatients--;
    }
};

int Patient::activePatients = 0;

int main(){
    Patient p1("P1", "Dhruv");
    Patient p2("P2", "Akshit");
    Patient p3("P3", "Deepak");
    {
        cout<<Patient::activePatients<<endl;
        p2.~Patient();
        cout<<"the count changes when an object is destroyed: "<<Patient::activePatients<<endl;
    }
    return 0;
}