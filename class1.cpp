
#include<iostream>
#include<string>
using namespace std;
class student
{
public:
    string name;
    int roll_no,marks;
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
class prajjwal: public student
{
public:
    void ppclass();
};
void prajjwal:: ppclass()
{
    cout<<endl<<"The class has name :  " <<name;
    cout<<endl<<"The class has roll no : "<<roll_no;
}
int main()
{
    prajjwal p1;
    p1.enterdetails();
    p1.viewdetails();
    p1.ppclass();
    return 0;

}
