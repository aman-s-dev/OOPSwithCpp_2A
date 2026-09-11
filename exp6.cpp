#include<iostream>
using namespace std;

class B {
    public:
};

class A {
    public:
    int x;
    
    // No Default constructor 

    // Parameterized constructor
    A(int val): x(val) {}
    
    // Copy constructor
    A(A& a): x(a.x) {}

    // User-Defined Destructor
    ~A() {
        cout << "User-defined Destructor Called\n" << endl;
    }
};

int main(){
    B b1;
    A a2(100);
    A a3(a2);
    cout<<"\n";
  	cout << a2.x<<endl;
  	cout << a3.x<<endl;
    return 0;
}