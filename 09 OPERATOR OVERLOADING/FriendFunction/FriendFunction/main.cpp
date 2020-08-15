//
//  main.cpp
//  FriendFunction
//
//  Created by vishal mishra on 01/08/20.
//  Copyright © 2020 vishal mishra. All rights reserved.
//

#include <iostream>
using namespace std;

class complex{
private:
    int real;
    int img;
public:

    complex(int r=0,int i=0){
        real = r;
        img = i;
    }
    
    void dispplay(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    
    friend complex operator + (complex c1,complex c2);
};

complex operator + (complex c1,complex c2){
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
    
}

int main(int argc, const char * argv[]) {
    complex c1(5,7) ,c2(3,6), c3;
    c3 = c1 + c2;
    c3.dispplay();
}

