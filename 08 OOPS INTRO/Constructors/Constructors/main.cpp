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
    
    reactangle(int l=1,int b=1){
        setLength(l);
        setBreadth(b);
    }
    
    reactangle(reactangle(& r)){
        length  = r.length;
        breadth=r.breadth;
    }
    
    void setLength(float l){
        if (l<=0) {
            length = 0;
            cout<<"length should be greater than 0"<<endl;
        }else{
            length = l;
        }
    }
    void setBreadth(float b){
        if (b<=0) {
            breadth = 0;
            cout<<"breadth should be greater than 0"<<endl;
        }else{
            breadth = b;
        }
    }

    int getLength(){
        return length;
    }
    
    int getbreadth(){
        return breadth;
    }
    
    float area(){
        return length*breadth;
    }
    
    float perimeter(){
        if (length<=0) {
            return 0;
        }
        return 2*(length+breadth);
    }

};


int main(){
    reactangle r;
    reactangle r1(r);

    
    
    cout<<"length is for r : "<<r1.getLength()<<endl;
    cout<<"breath is for r: "<<r1.getbreadth()<<endl;
    cout<<"Area is for r:"<<r1.area()<<endl;
    cout<<"perimeter is for r:"<<r1.perimeter()<<endl;
    
 
    
}
