#include "iostream"
using namespace std;

class car
{
public:
    virtual void start() = 0;
};


class Inova : public car
{
public:
    void start()
    {
        cout << "Inova started" << endl;
    }
};


class swift : public car
{
public:
    void start()
    {
        cout << "Swift started" << endl;
    }
};

int main()
{
    car *p = new Inova();
    p->start();
    car *q = new swift();
    q->start();
}
