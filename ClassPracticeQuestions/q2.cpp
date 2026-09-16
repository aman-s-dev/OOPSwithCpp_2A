#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private :
    string accNum;
    string accHolder;
    double balance;

    public:
    BankAccount(string ac, string holder, double bal ): accNum(ac), accHolder(holder), balance(bal) {}
    
    friend BankAccount compareBalance(BankAccount& acc1, BankAccount& acc2);

    void display(){
        cout<<endl<<accNum<<" : "<<accHolder<<"   Balance: $"<<balance<<"\n\n";
    }
};

BankAccount compareBalance(BankAccount& acc1, BankAccount& acc2){
    if (acc1.balance < acc2.balance) return acc1;
    else if (acc1.balance > acc2.balance) return acc2;
    cout<<"Both accounts have the same balance";
    return acc1;
}


int main(){
    BankAccount myacc("23480000234", "Aman", 110000.0);
    BankAccount acc2("23480000235", "Ronak", 110200.0);
    cout<<"\n";
    compareBalance(myacc, acc2).display();
    cout<<"\n\n";
}
