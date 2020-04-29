#include <iostream>

using namespace std;

class Container
{
    int type;
    float radius,height,volume;
    void calVolume()
    {
        if(type==1)
            volume=3.14*radius*height;
        else if(type==2)
            volume=3.14*radius*height/3;
    }
public:
    void getValue()
    {
        cout<<"Enter Details \n";
        cin>>radius>>height>>type;
        calVolume();
    }
    void showAll()
    {
        cout<<"Radius, height type and volume are \n"<<radius<<' '<<height<<' '<<type<<' '<<volume;
    }
};
int main()
{
    Container c;
    c.getValue();
    c.showAll();
    return 0;
}
