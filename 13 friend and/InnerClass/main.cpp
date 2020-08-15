#include "iostream"
using namespace std;

class outer{
public:
    void func(){
        i.display();
    }

    class inner{
    public:
        void display(){
            cout<<"Display of inner"<<endl;
        }
    };

    inner i;
};

int main(){
    outer::inner i;
    i.display();
}