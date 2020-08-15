#include "iostream"
using namespace std;

// #define PI 3.1425

#ifndef PI //for avoid the confusion we use this.
#define PI 3 //warning: 'PI' macro redefined [-Wmacro-redefined]
#endif       // ! PI

int main()
{
    cout << PI << endl; //recent value of PI taken that is 3
}