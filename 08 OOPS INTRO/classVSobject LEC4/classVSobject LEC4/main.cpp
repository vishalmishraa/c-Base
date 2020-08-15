//
//  main.cpp
//  classVSobject LEC4
//
//  Created by vishal mishra on 27/07/20.
//  Copyright © 2020 vishal mishra. All rights reserved.
//

#include <iostream>
using namespace std;

class reactangle{
public:
    int length;
    int breadth;
    
    
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(int argc, const char * argv[]) {
    reactangle r1,r2;
    r1.length=10;
    r1.breadth=5;
    cout<<"Area is "<<r1.area()<<endl;
    
    r2.length=16;
    r2.breadth=10;
    cout<<"perimeter "<<r2.perimeter()<<endl;
}
