//
//  main.cpp
//  StudentExerciseRational
//
//  Created by vishal mishra on 01/08/20.
//  Copyright © 2020 vishal mishra. All rights reserved.
//

#include <iostream>
using namespace std;

class rational{
private:
    int p;
    int q;
    
public:
    rational(){
        p=0;
        q=0;
    }
    
    rational (int p,int q){
        this -> p = p;
        this ->q = q;
    }
    
    rational (rational& r){
        this -> p = r.p;
        this ->q = r.q;
    }
    
    int getp(){
        return  p;
    }
    
    int getq(){
        return  q;
    }
    
    void setp(int p){
        this->p= p;
    }
    
    void setq(int q){
        this->q= q;
    }
    
    
    
    rational operator+(rational r){
        rational temp;
        temp.p = this->p*r.q + this->q*r.q;
        temp.q = this->q*r.q;
        return temp;
    }
    
   friend ostream & operator << (ostream &out, rational & r);
    
};

ostream & operator << (ostream &out, rational & r){
    out<<r.p<<"/"<<r.q;
    return out;
}

int main(int argc, const char * argv[]) {
    rational r1(4,3), r2(6,8),r3;
    r3 = r1+r2;
    cout<<r3<<endl;
}
