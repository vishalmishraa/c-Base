//
//  main.cpp
//  Operqator_Overloading
//
//  Created by vishal mishra on 30/07/20.
//  Copyright © 2020 vishal mishra. All rights reserved.
//

#include <iostream>
using namespace std;

class complex{
public:
    int real;
    int img;
    

    complex(int r=0,int i=0){
        real = r;
        img = i;
    }
    
    complex operator + (complex x){
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main(int argc, const char * argv[]) {
    complex c1(5,7);
    complex c2(3,6);
    complex c3;
    c3 = c1 + c2;
    cout<<c3.real<<"+"<<c3.img<<"i"<<endl;
}
