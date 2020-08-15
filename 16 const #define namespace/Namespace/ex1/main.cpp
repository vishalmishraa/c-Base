#include "iostream"
using namespace std;

namespace first
{
    void fun()
    {
        cout << "first" << endl;
    }
}; // namespace first
//error: redefinition of 'fun'
namespace second
{
    void fun()
    {
        cout << "Second" << endl;
    }
}; // namespace second

using namespace first;
int main()
{

    fun();
    second::fun();
}