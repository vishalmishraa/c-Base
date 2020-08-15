#include"iostream"
using namespace std;

class base{
    public:
    void func1(){
        cout<<"func1 data"<<endl;
    }
 };

 class daraived : public base{
public:
void func2(){
    cout<<"func2 data"<<endl;
}
 };

 int main(){
     daraived d;
     base *p = &d;
     p->func1();
     p->func1();
 }