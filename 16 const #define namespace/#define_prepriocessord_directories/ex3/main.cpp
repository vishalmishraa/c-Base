#include "iostream"
using namespace std;

#define max(x,y)  (x>y?x:y)//if x is greater than Y it take x otherwise Y
#define msg(x) #x//#x is convert the data in string

#ifndef PI //for avoid the confusion we use this.
#define PI 3 //warning: 'PI' macro redefined [-Wmacro-redefined]
#endif       // ! PI

int main()
{ 
    cout << max(10,12)<<endl;
    cout<<msg(program ended)<<endl;
}