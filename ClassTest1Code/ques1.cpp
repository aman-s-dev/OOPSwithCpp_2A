#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    float marks;

    Student(int r, string n, float m): name(n), roll(r), marks(m) {}

    void display(){
        cout<<roll<<" "<<name<<" "<<marks<<"\n";
    }
};

int main(){
    Student s1(25, "Aman", 91);
    s1.display();
}
