#include <iostream>
using namespace std;

class shape
{
public:
    virtual float area() = 0;
    virtual float paremeter() = 0;
};

class reactangle : public shape{
private:
    float length;
    float breadth;

public:
 reactangle(int l=1, int b=1){
    length = l;
    breadth = b;
}

float area(){
    return length*breadth;
}
float paremeter(){
    return 2*(length+breadth);
}
};


class circle: public shape{
private:
float radius;
public:
circle(int r){
    radius=r;
}

float area(){
    return 3.14*radius*radius;
}

float paremeter(){
    return 2*3.14*radius;
}


};


int main(){
reactangle r(2,4);
circle c(2);
cout<<"area of reactangle "<<r.area()<<endl;
cout<<"paremeter of reactangle "<<r.paremeter()<<endl;
cout<<"area of circle "<<c.area()<<endl;
cout<<"paremeter of circle "<<c.paremeter()<<endl;

}
