#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int calc(int x,int y)
{
    int i,mul3=0,mul5=0;
    for(i=0;i<x;i++)
        mul3+=3*(i+1);
    for(i=0;i<y;i++)
        if((i+1)%3!=0)
            mul5+=5*(i+1);
    return mul3+mul5;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int x,y;
        {if(n%3==0)
            x=(n/3)-1;
        else
            x=n/3;}
        {if(n%5==0)
            y=(n/5)-1;
        else
            y=n/5;}
        cout<<calc(x,y)<<endl;

    }
    return 0;
}

