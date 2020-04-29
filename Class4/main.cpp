#include <iostream>
#include <fstream>

using namespace std;

class Worker
{
    int Wno;
    char Wname[25];
    float hrwrk,wgrate,totwage;
    float calcWg()
    {
        return hrwrk*wgrate;
    }
public:
    void inData()
    {
        cout<<"Enter Details \n";
        cin>>Wno>>Wname>>hrwrk>>wgrate;
        totwage=calcWg();
    }
    void outData()
    {
        cout<<"Name and wno \n"<<Wno<<Wname<<"\n Hours worked, Wage rate and total Wage are ";
        cout<<hrwrk<<' '<<wgrate<<' '<<totwage;
    }
};
int main()
{
    Worker w;
    fstream f;
    f.open("Work.txt",ios::app|ios::binary|ios::in|ios::out);

    w.inData();

    f.write((char*)&w, sizeof(w));

    f.read((char*)&w, sizeof(w));
    w.outData();
    f.close();
    return 0;
}
