#include <iostream>
using namespace std;


class base{
public:
void display(){
    cout<<"display of base";
}
};

class derived:public base{
public:
void display(){
    cout<<"display of derived";
}
};

int main(){
    derived d;
    d.display();
}