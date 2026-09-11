#include<iostream>
#include<array>
using namespace std;

class Marks{
    private :
    array<int, 5> submarx;

    public:
    Marks(int m1, int m2, int m3, int m4, int m5){
        submarx = {m1, m2, m3, m4, m5};
    }
    
    void display(){
        cout<<"\nMarks: ";
        for (auto mark : submarx){
            cout<<mark<<" ";
        }
        cout<<"\n\n";
        return;
    }
};

int main(){
    Marks aman(91, 89, 93, 95, 98);
    aman.display();
}

