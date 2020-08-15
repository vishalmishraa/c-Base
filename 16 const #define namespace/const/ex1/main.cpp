#include"iostream"
using namespace std;


int main(){
    // const int x = 10;
     int  x = 10;
    // x++;  //error: cannot assign to variable 'x' with const-qualified type 'const int'
    //pointer to integer consttant 
//    int  const *ptr = &x; //error: cannot initialize a variable of type 'int *' with an rvalue of type 'const int *'
//cannot assign ptr to some another variable
    int  *const ptr = &x;
    int   y=20;
    // ptr = &y;//error: cannot assign to variable 'ptr' with const-qualified type 'int *const'
    // ++*ptr;//error: read-only variable is not assignable
    cout<<*ptr;
}