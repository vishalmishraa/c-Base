#include"iostream"
using namespace std;

class BasicCar{
    public:
    virtual void start(){
        cout<<"Basic car started"<<endl;
    }
 };

 class AdvancedCar : public BasicCar{
public:
void start(){
    cout<<"Advanced car started"<<endl;
}
 };

 int main(){
     
     BasicCar *p = new AdvancedCar();
    // BasicCar b;
    // AdvancedCar *p = &b;//error: cannot initialize a variable of type 'AdvancedCar *' with an rvalue of type
     p->start();
    //  p->start();//error: no member named 'start' in 'BasicCar'
    // d.start();
    //  d.start();
 }