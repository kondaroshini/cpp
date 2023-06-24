/******************************************************************************
area(pointer)
*******************************************************************************/

#include <iostream>  
using namespace std;  
class rec
{  
    public:  
       int l;
       int b;
    public:
        void Area(int l,int b) 
        {
            int a;
            this->l=l;    
            this->b=b;
            a=l*b;
            cout<<"Area="<<a;
        }   
};  
int main() 
{  
    rec r;
    r.Area(3,3);
    return 0;  
}  
