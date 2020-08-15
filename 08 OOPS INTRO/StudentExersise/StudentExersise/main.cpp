//
//  main.cpp
//  StudentExersise
//
//  Created by vishal mishra on 27/07/20.
//  Copyright © 2020 vishal mishra. All rights reserved.
//

#include <iostream>
using namespace std;



class student {
private:
    int roll;
    string name;
    int math;
    int phy;
    int chem;
public:
    student(int r,string n,int m,int p,int c){
        roll=r;
        name=n;
        math=m;
        phy=p;
        chem=c;
    }
    
    int total(){
        return math+phy+chem;
    }
    
    float avg(){
        return (total()/300)*100;
    }
    
    int grade(){
        if(avg()>=60)
            return 'A';
        else if(avg()>=40 && avg()<=60)
            return 'B';
            else
                return 'C';
        
    }
};

int main(int argc, const char * argv[]) {
   int roll;
string name;
int m,p,c;
cout<<"Enter Roll number of a Student: ";
cin>>roll;
cout<<"Enter Name of a Student:";
cin>>name;
cout<<"Enter marks in 3 subjects";
cin>>m>>p>>c;
student s(roll,name,m,p,c);
cout<<"Total Marks:"<<s.total()<<endl;
cout<<"Grade of Student:"<<s.grade()<<endl;
}

