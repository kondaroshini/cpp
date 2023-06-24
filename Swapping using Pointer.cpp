/******************************************************************************

swapping using pointer

*******************************************************************************/
#include<iostream>
using namespace std;
int main ()
{
  int x, y;
  cout << "enter x and y values:" << endl;
  cin >> x >> y;
  int *a, *b, temp;
  a = &x;
  b = &y;
  cout << "before swapping:" << endl;
    cout<<"first number:"<<x<<endl;  
    cout << "second number:" <<y<< endl;
    temp = *a;
  *a = *b;
  *b = temp;
  cout << "after swapping:" << endl;
  cout << "first number:" << x << endl;
  cout << "second number:" << y << endl;
  return 0;
}


