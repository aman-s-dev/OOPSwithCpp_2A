#include<iostream>
using namespace std;

void sbVal(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    cout<<"After Swap by value, x = "<<x<<", y = "<<y<<endl;
}
void sbRef(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    cout<<"After Swap by reference, x = "<<x<<", y = "<<y<<endl;
}
int main(){
    int a, b;
    cin>>a>>b;
    sbVal(a,b);
    cout<<"But the original x = "<<a<<", y = "<<b<<endl;
    sbRef(a,b);
    cout<<"And the original x = "<<a<<", y = "<<b<<endl;
}