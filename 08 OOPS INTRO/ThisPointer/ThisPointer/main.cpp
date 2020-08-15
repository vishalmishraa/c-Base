//
//  main.cpp
//  ThisPointer
//
//  Created by vishal mishra on 27/07/20.
//  Copyright © 2020 vishal mishra. All rights reserved.
//

#include <iostream>
using namespace std;

class reactangle{
private:
    int length;
    int breadth;
public:
    reactangle(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
    }
    
    int area(){
        return length*breadth;
    }
};


int main(int argc, const char * argv[]) {
    reactangle r(10,5);
    cout<<r.area()<<endl;
}
