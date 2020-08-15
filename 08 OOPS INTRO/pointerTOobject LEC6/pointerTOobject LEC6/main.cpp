//
//  main.cpp
//  pointerTOobject LEC6
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

//IT IS  IN DYNAMIC MEMORY

//int main(){
//    reactangle r;
//    reactangle *ptr;
//    ptr = &r;
//    ptr->length=10;
//    ptr->breadth=5;
//    cout<<"IT IS  IN DYNAMIC MEMORY"<<endl;
//    cout<<"area is "<<ptr->area()<<endl;
//
//}
//IN HEAP MEMORY
int main(){
    
    reactangle *ptr= new reactangle;
    ptr->length=10;
    ptr->breadth=5;
    cout<<"IT IS  IN HEAP MEMORY:"<<endl;
    cout<<"area is "<<ptr->area()<<endl;

}
