#include<iostream>
using namespace std;

class Product{
    public:
    string name;
    float price;

    Product(string n, float p): name(n), price(p) {}

    void display(){
        cout<<name<<"   Price: "<<price<<endl;
    }
};

Product comparePrice(Product p1, Product p2){
    if (p1.price > p2.price) return p1;
    else if (p2.price > p1.price) return p2;
}

int main(){
    Product bike1("Pulsar N160", 210000);
    Product bike2("RE Classic 350", 250000);
    comparePrice(bike1, bike2).display();
}