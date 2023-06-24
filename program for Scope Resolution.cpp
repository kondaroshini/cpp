/******************************************************************************
c++(scope resolution)
*******************************************************************************/
#include<iostream>
using namespace std;
int a=100;
int main()
{
        int a=200;
        cout<<"Global variable: "<<::a<<endl;
        cout<<"local variable: "<<a<<endl;
        return 0;
}

