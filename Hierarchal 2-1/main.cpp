#include <iostream>
#include <stdio.h>
using namespace std;

class Car
{
    char name[30];
  public:
    void inData()
    {
        cout<<"Enter your car's name ";
        gets(name);
    }
    void outData()
    {
        cout<<"Car "<<name<<endl;
    }
};

class horsepower
{
  public:
     int hp;
     void inData()
    {
        cout<<"Enter your car's Horsepower ";
        cin>>hp;
    }
    void outData()
    {
        cout<<"Horsepower "<<hp<<endl;
    }

};

class Hypercar: public Car, public horsepower
{
    void determine()
    {
        if(hp>750)
            cout<<"Your car is a Hypercar.";
        else
            cout<<"Your car is not a Hypercar.";
    }
public:
    void inData()
    {
        Car::inData();
        horsepower::inData();
    }
    void outData()
    {
        Car::outData();
        horsepower::outData();
        determine();
    }
};

int main()
{
    Hypercar H;
    H.inData();
    H.outData();
    return 0;
}
