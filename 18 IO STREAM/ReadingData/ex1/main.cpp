#include "iostream"
#include "fstream"

using namespace std;

int main(){
    //Writing or CEATING a file
    // ofstream ofs("my.txt",ios::trunc);
    // ofs<<"vishal"<<endl;
    // ofs<<19687<<endl;
    // ofs<<"BCA"<<endl;
    // ofs.close();

    //Reading a file
    ifstream ifs;
    ifs.open("my.txt");

    if (ifs.is_open())
    { 
        cout<<"file opened"<<endl;        /* code */
    }else{
        cout<<"file not found"<<endl;
        exit(0);
    }
    
    string name;
    int roll;
    string branch;

    ifs>>name>>roll>>branch;
    ifs.close();

    cout<<"NAME "<<name<<endl;
    cout<<"ROLL "<<roll<<endl;
    cout<<"BRANCH "<<branch<<endl;


}