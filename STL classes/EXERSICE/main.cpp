#include "iostream"
#include "fstream"
#include "vector"

using namespace std;

class item
{
private:
    string name;
    int price;
    int qty;

public:
    item() {}
    item(string n, int p, int q);

    friend ostream &operator<<(ostream &out, item &it);

    friend ofstream &operator<<(ofstream &ofs, item &i);

    friend ifstream &operator>>(ifstream &ifs, item &i);
};

int main()
{
    int n;
    string name;
    float price;
    int qty;
    cout<<"enter number of item"<<endl;
    cin>>n;
    vector<item *> list;
    cout<<"Enter details of items"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i+1<<" item name, price and quanity"<<endl;
        cin>>name;
        cin>>price;
        cin>>qty;
        list.push_back(new item(name,price,qty));
    }

//writing data
    ofstream ofs("my.txt");
       vector<item *>::iterator itr;
    for (itr = list.begin(); itr != list.end() ; itr++)
    {
        ofs<<**itr;
    };
   
//reading data
    item item;
    ifstream ifs;
    ifs.open("my.txt");
     if(ifs.is_open()){
        cout<<endl<<"item list:"<<endl;
    }else{
        cout<<"no list found"<<endl;
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        ifs>>item;
        cout<<endl<<"item "<<i+1<<" "<<item<<endl; 
    }   
    ifs.close();
}

//class constructor
item::item(string n, int p, int q)
{
    name = n;
    price = p;
    qty = q;
};

//operator overload
ostream &operator<<(ostream &out, item &i)
{
    out << i.name << endl;
    out << i.price << endl;
    out << i.qty << endl;

    return out;
}

//writing file
ofstream &operator<<(ofstream &ofs, item &i)
{
    ofs << endl <<i.name << endl;
    ofs << i.price << endl;
    ofs << i.qty << endl;

    return ofs;
}

//reading file
ifstream &operator>>(ifstream &ifs, item &i)
{
    ifs >> i.name;
    ifs >> i.price;
    ifs >> i.qty;
    return ifs;
}
