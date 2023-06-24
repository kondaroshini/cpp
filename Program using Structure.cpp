/******************************************************************************
c++(student datails using structure)
*******************************************************************************/
#include<iostream>
using namespace std;
struct student
{
        string Name;
        string Rollno;
        char grade;
};
int main()
{
        student s1;
        cout<<"Enter name: "<<endl;
        cin>>s1.Name;
        cout<<"Enter Rollno: "<<endl;
        cin>>s1.Rollno;
        cout<<"Enter grade: "<<endl;
        cin>>s1.grade;
        cout<<"Details of the student"<<endl;
        cout<<"Name= "<<s1.Name;
        cout<<"Rollno= "<<s1.Rollno;
        cout<<"Grade= "<<s1.grade;
        return 0;
}

