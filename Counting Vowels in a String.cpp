/******************************************************************************
counting vowels
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
char str[100];
cout<<"Enter the string :"<<endl;
cin>>str; 
ptr=str;
int vowels=0;
char *ptr;

 for(ptr=0;(*ptr)!=o;ptr++)
    {
    if(*ptr=='a'|| =='e'|| *ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr]=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O' ||*ptr=='U')
       {
     vowels++;
       }
   }
cout<<"Total number of vowels in a given string are = "<<vowels<<endl;;
     return 0;
}

