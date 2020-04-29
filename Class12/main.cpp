#include <iostream>
#include <string.h>

using namespace std;

class Clothing
{
    int Size;
    char code[20],type[20],material[20];
    float Gprice;
    void calc_Price();
public:
    Clothing()
    {
        strcpy(code,"Not Assigned");
        strcpy(type,"Not Assigned");
        strcpy(material,"Not Assigned");
        Size=0;
        Gprice=0;
    }
    void enter()
    {
        cout<<"Enter Details \n";
        cin>>code>>type>>Size>>material;
        calc_Price();
    }
    void show()
    {
        cout<<"Code type size material and price are \n";
        cout<<code<<' '<<type<<' '<<Size<<' '<<material<<' '<<Gprice;
    }
    ~Clothing()
    {
    }
};
int main()
{
    Clothing C;
    C.enter();
    C.show();
    return 0;
}
void Clothing::calc_Price()
    {
        if(strcmpi(type,"trouser")==0)
        {
            if(strcmpi(material,"COTTON")==0)
                Gprice=1500;
            else
                Gprice=1125;
        }
        else if(strcmpi(type,"SHIRT")==0)
        {
            if(strcmpi(type,"COTTON")==0)
                Gprice=1200;
            else
                Gprice=900;
        }
    }
