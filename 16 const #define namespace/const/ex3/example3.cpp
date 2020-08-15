#include"iostream"
using namespace std;

void fun(const int &a, int &b){
    cout<<a<<" "<<b<<endl;
    a++; //error: cannot assign to variable 'a' with const-qualified type 'const int &'
}

int main(){
    int x= 20;
    int y=30;

    fun(x,y);
    cout<<x<<" "<<y<<endl;  
}