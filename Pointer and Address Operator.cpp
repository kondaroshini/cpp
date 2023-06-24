//program on pointer and address operator
#include<iostream>
using namespace std;
int main()
{
    int var;
    int*ptr;
    int val;
    var=1500;
    ptr=&var;
    val=*ptr;
    cout<<"value of var:"<<var<<endl;
    cout<<"value of ptr:"<<ptr<<endl;
    cout<<"value of val:"<<val<<endl;
    return 0;
}
    
    
    
