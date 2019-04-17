#include<iostream>
#include<string>
using namespace std;
class student
{
    string name;
    int roll_no,marks;
public:
    void enterdetails();
    void viewdetails();
};
void student :: enterdetails()
{

    cout<<"Enter the name of student : ";
    cin>>name;
    cout<<"Enter the roll number of the student : ";
    cin>>roll_no;
}
void student :: viewdetails()
{
    cout<<"Name of the student is  : "<<name;
    cout<<endl<<"Roll number of the student is : "<<roll_no;
}

int main()
{
    student s1; //creating object of the class student
    s1.enterdetails();
    s1.viewdetails();
    return 0;
}
