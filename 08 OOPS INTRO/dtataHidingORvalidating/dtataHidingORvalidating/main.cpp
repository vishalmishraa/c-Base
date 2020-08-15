//
//  main.cpp
//  dtataHidingORvalidating
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
    r.setLength(9);
    r.setBreadth(2);
    cout<<"length is : "<<r.getLength()<<endl;
    cout<<"breath is : "<<r.getbreadth()<<endl;
    cout<<"Area is "<<r.area()<<endl;
    cout<<"perimeter is :"<<r.perimeter()<<endl;
    
}
