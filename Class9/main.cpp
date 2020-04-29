#include <iostream>

using namespace std;

class X
{
    int codeno;
    float price;
    static int Count;
public:
    void getVal(int i, float j)
    {
        codeno=i;
        price=j;
        ++Count;
    }
    void display()
    {
        cout<<"codename"<<codeno<<'\t';
        cout<<"Price"<<price<<'\n';
    }
    static void dispcount()
    {
        cout<<"count"<<' '<<Count<<'\n';
    }
};
int X::Count=0;
int main()
{
    X ob1,ob2;
    ob1.getVal(101,25.02);
    ob2.getVal(102,38.19);
    X::dispcount();
    X ob3;
    ob3.getVal(103,49.00);
    X::dispcount();
    ob1.display();
    ob2.display();
    ob3.display();
    return 0;
}
