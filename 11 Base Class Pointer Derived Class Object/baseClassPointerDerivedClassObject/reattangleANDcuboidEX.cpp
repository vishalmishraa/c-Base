#include"iostream"
using namespace std;

class reactangle{
    public:
    void area(){
        cout<<"area of reactangle"<<endl;
    }
 };

 class cuboid : public reactangle{
public:
void volume(){
    cout<<"volume of cubpoid"<<endl;
}
 };

 int main(){
     cuboid d;
     reactangle *p = &d;
     p->area();
    //  p->volume();
 }