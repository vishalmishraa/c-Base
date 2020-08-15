//
//  main.cpp
//  Inheritance_cuboid
//
//  Created by vishal mishra on 04/08/20.
//  Copyright © 2020 vishal mishra. All rights reserved.
//

#include <iostream>

using namespace std;
    
class reactangle{
public:
    float length;
    float breadth;
    
public:

//default set in below
//    reactangle(){
//        length=1;
//        breadth=1;
//    }
    reactangle(int l=1,int b=1);
    reactangle(reactangle(& r));
    int getLength();
    int getbreadth();
    void setLength(float l);
    void setBreadth(float b);
    float area();
    float perimeter();
    bool isSquare();
    ~reactangle();
    friend ostream & operator <<(ostream&out ,reactangle & r);

};


//Inheriting CLASS
class cuboied : public reactangle{
private:
    int hight;
public:
    cuboied(int l,int b,int h=1);
    int getHight();
    void setHight(int h);
    int volume();
    friend ostream & operator <<(ostream & out, cuboied & c);
};

int main(){
//    reactangle r1(2,4);
//    reactangle r(r1);
//    cout<<r;
    cuboied c(1,4,8);
    cout<<c;
}



//USING SCOPE RESOLUTION~~~~~~~REACTANGLE

ostream & operator <<(ostream&out ,reactangle & r){
    out<<"area of reactangle is "<<r.area()<<" and perimeter is "<<r.perimeter()<<endl;
    return out;
}

reactangle::reactangle(int l,int b){
    setLength(l);
    setBreadth(b);
};

reactangle::reactangle(reactangle(& r)){
    length  = r.length;
    breadth=r.breadth;
};

void reactangle::setLength(float l){
    if (l<=0) {
        length = 0;
        cout<<"length should be greater than 0"<<endl;
    }else{
        length = l;
    }
};

void reactangle::setBreadth(float b){
       if (b<=0) {
           breadth = 0;
           cout<<"breadth should be greater than 0"<<endl;
       }else{
           breadth = b;
       }
};

int reactangle:: getLength(){
    return length;
};

int reactangle::getbreadth(){
    return breadth;
};

float reactangle::area(){
    return length*breadth;
};

float reactangle::perimeter(){
    if (length<=0) {
        return 0;
    }
    return 2*(length+breadth);
};

bool reactangle::isSquare(){
    return length==breadth;
};

reactangle::~reactangle(){
//    cout<<"reactangle destroid"<<endl;
}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~+++++++++++~~~CUBOID
cuboied:: cuboied(int l,int b,int h){
       hight  = h;
       setLength(l);
       setBreadth(b);
   }

int cuboied:: getHight(){
    return hight;
};

void cuboied::setHight(int h){
       if (h<=0) {
            hight = 0;
            cout<<"hight should be greater than 0"<<endl;
        }else{
            hight = h;
        }
};

int cuboied::volume(){
    return getLength()*getbreadth()*hight;
};

ostream & operator <<(ostream & out, cuboied & c){
    out<<"volume of cuboid is "<<c.volume()<<endl;
    return out;
}
