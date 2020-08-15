#include <iostream>
using namespace std;


class base{
public:
virtual void display(){
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
    base *ptr = &d;
    // d.display();
    ptr->display();

}