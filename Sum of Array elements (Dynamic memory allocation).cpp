/******************************************************************************
dynamic memory allocation
*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int sum=0, n,i;
    cout<<"Enter array size:";
    cin>>n;
    int *a = new int[n];
    cout<<"Enter integer numbers:";
    for(int i=0; i<n; i++)
    cin>>a[i];
    cout<<"Input array is.."<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
        sum = sum + a[i]; 
    }
    cout<<"Total Sum: "<<sum;
    delete(a);
    return 0;
}


