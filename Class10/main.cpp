#include <iostream>

using namespace std;

class Length
{
    int feet,inch;
public:
    void getData()
    {
        cout<<"Enter Details \n";
        cin>>feet>>inch;
    }
     void display()
    {
        cout<<"Length is ";
        cout<<feet<<' '<<inch<<'\n';
    }
    void sum(Length L1,Length L2)
    {
        feet=L1.feet+L2.feet;
        inch=L1.inch+L2.inch;
        if(inch>12)
        {
            inch=inch-12;
            feet=feet+1;
        }
    }
};
int main()
{
    Length L1,L2,L3;
    L1.getData();
    L2.getData();
    L3.sum(L1,L2);
    L1.display();
    L2.display();
    L3.display();
    return 0;
}
