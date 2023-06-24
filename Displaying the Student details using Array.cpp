/******************************************************************************
c++(using aray)
*******************************************************************************/
#include<iostream>
using namespace std;
class student
{
        public:
                string Name;
                string rollno;
                char Grade;
                void read_data()
                {
                        cout<<"Enter the student details "<<endl;
                        cout<<"Enter Name: ";
                        cin>>Name;
                        cout<<"Enter Rollno: ";
                        cin>>rollno;
                        cout<<"Enter Grade: ";
                        cin>>Grade;
                }
                void display_data()
                {
                        cout<<"Name of the student: "<<Name<<endl;
                        cout<<"rollno: "<<rollno<<endl;
                        cout<<"Grade: "<<Grade<<endl;
                }
};
int main()
{
        int i;
        student arr[4];
        for(i=0;i<4;i++)
        {
                arr[i].read_data();
        }
        for(i=0;i<4;i++)
        {
                cout<<"student"<<i+1<<"details"<<endl;
               arr[i].display_data();
        }
return 0;
}

