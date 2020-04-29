#include <iostream>
#include <fstream>
using namespace std;
ofstream f,g;
ifstream l,m;
void da()
{
    f.open("txt1.dat");
    int x=10;
        f<<x;
    f.close();
    l.open("txt1.dat");
    while(l>>x)
        cout<<x;
}

int main()
{

    da();
    g.open("txt2.txt");
    int y;
    while(cin>>y)
        g<<y;
    g.close();
    m.open("txt2.txt");
    while(m>>y)
        cout<<y;
    m.close();
    return 0;
}
