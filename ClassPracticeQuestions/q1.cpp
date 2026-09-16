#include<iostream>
using namespace std;

class Product{
    public:
    string id, name;
    float price;

    Product(string id, string name, float price){
        this->id = id;
        this->name = name;
        this->price = price;
    }

    Product comparePrice( Product& p2){
        if (this->price > p2.price) return *this;
        else if (p2.price > this->price) return p2;
        cout<<"Both products have the same price";
        return *this;
    }

    void display(){
        cout<<endl<<id<<" : "<<name<<"   Price: "<<price<<"\n\n";
    }
};


int main(){
    Product bike1("B1","Pulsar N160", 210000);
    Product bike2("B2","RE Classic 350", 250000);
    bike1.comparePrice(bike2).display();
}