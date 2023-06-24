/******************************************************************************
program on operator precedence
*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int a=40,b=50,c=20,d=80;
    int x;
    x=(a/b)*c+d-a++;
    cout<<"the value of x is:"<<x<<endl;
    x=d*b+a-d/b;
    cout<<"the value of x is:"<<x<<endl;
    return 0;
}
