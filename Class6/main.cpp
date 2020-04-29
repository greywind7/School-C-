#include <iostream>

using namespace std;

class Employee
{
    char name[25],subject[10];
    float basic,da,hra,salary;
    float calculate()
    {
        return basic+da+hra;
    }
public:
    void read()
    {
        cout<<"Enter Details \n";
        cin>>name>>subject>>basic>>da>>hra;
        salary=calculate();
    }
    void display()
    {
        cout<<"Name and Subject \n"<<name<<' '<<subject<<"\nBasic DA HRA and total salary are ";
        cout<<basic<<' '<<da<<' '<<hra<<' '<<salary;
    }
};
int main()
{
    Employee e;
    e.read();
    e.display();
    return 0;
}
