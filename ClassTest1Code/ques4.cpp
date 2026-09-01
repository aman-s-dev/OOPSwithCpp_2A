#include<iostream>
using namespace std;

double area(double side){ return side*side; }
double area(double length, double breadth){ return length*breadth; }

double si(int principal, double time, double rate = 8.65){ return (double)principal*time*rate/100; }

int main(){
    double ar = area(23.59);
    cout<<ar<<endl;
    double in = si(150000, 9.5);
    cout<<in;
}