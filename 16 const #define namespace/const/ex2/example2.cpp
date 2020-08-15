#include "iostream"
using namespace  std;


class demo{
    public:
    int x=10;
    int y=20;
    

    void display() const {
        //CPMSTANT FUNCTION CANNOT MODIDFY THE DATA MEMBER OF CLASS
        // x++;//error: cannot assign to non-static data member within const member function 'display'
        cout<<x<<" "<<y<<endl;
    }

};

int main(){
demo d;
d.display();

}


