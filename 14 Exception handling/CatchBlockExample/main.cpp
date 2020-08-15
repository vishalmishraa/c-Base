#include "iostream"
using namespace std;

class MyException_1{

};
class MyException_2:public MyException_1{

};

int main(){
    try
    {
        // throw 1;
        // throw 1.5 ;
        // throw 'a';
        throw MyException_1();
    }
    catch(MyException_2 e)
    {
        cout<<"Int catch"<<'\n';
    }
    catch(MyException_1 e){
        cout<<"double catch"<<'\n';
    }
    catch(...){
    cout<<"catch all"<<endl;
    }//error: catch-all handler must come last
    
}