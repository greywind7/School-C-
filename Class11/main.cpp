#include <iostream>

using namespace std;

class Square
{
    int l;
public:
    Square()
    {
        l=5;
    }
    /*Square(int k=10)
    {
        l=k;
    }*/
    Square(int a)
    {
        l=a;
    }
    Square(Square &S)
    {
        l=S.l;
    }
    void print()
    {
        cout<<l<<endl;
    }
    ~Square()
    {
    }
};
int main()
{
    Square S1,S2(50),S3(S1);
    S1.print();
    S2.print();
    S3.print();
    return 0;
}
