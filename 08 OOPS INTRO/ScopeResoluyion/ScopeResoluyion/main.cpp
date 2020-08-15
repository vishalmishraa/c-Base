//
//  main.cpp
//  constructors
//
//  Created by vishal mishra on 27/07/20.
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
    
    void setLength(float l);
    
    void setBreadth(float b);

    int getLength();
    
    int getbreadth();
    
    float area();
    
    float perimeter();

};
//USING SCOPE RESOLUTION

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

int main(){
    reactangle r(6,3);
    reactangle r1(r);

    cout<<"length is for r : "<<r1.getLength()<<endl;
    cout<<"breath is for r: "<<r1.getbreadth()<<endl;
    cout<<"Area is for r:"<<r1.area()<<endl;
    cout<<"perimeter is for r:"<<r1.perimeter()<<endl;
    
}
