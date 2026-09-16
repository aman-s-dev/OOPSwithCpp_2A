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
    void deposit(double amount){
        balance += amount;
        cout<<"balance after deposit : $"<<balance<<endl;
        return;
    }
    void withdrawl(double amount){
        if (amount>=balance){
            cout<<"Withdrawl amount > available balance!\n";
            return;
        }
        balance -= amount;
        cout<<"balance after withdrawl : $"<<balance;
        return;
    }
};

int main(){
    BankAccount myacc("23480000234", "Aman", 110000.0);
    cout<<"\n";
    myacc.withdrawl(130000.0);
    myacc.deposit(50000.0);
    myacc.withdrawl(3000.0);
    cout<<"\n\n";
}
