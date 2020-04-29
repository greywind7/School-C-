#include <iostream>
#include<graphics.h>
#include<dos.h>
using namespace std;

int main()
{
    void heart();
    int gd=DETECT,gm=0x,y;
    for(int i=-80;i<=200;i++)
    {
        setcolor(0+i);
        line(0+i,0+i,80+i);
        line(0+i,0+i,81+i);
        line(70+i,47+i,80+i);
    }
    return 0;
}
