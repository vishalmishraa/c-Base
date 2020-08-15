//
//  main.cpp
//  InstertionOperatorOverloading
//
//  Created by vishal mishra on 01/08/20.
//  Copyright © 2020 vishal mishra. All rights reserved.
//

#include <iostream>
using namespace std;


class complex{
private:
    int real ;
    int img ;
    
public:
    complex(int r=0,int i=0){
        real = r;
        img = i;
    }
    
    friend ostream & operator << (ostream &out,complex &c);
    
};
ostream & operator << (ostream &out,complex &c){
    out<<c.real<<"+"<<c.img<<"i"<<endl;
    return out;
}

int main(int argc, const char * argv[]) {
    complex c(5,7);
    cout<<c;
}
