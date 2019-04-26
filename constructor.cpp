#include<iostream>
using namespace std;
class constructor
{
    int a,b;
public:
    constructor();
    constructor(int a,int b);
};
constructor :: constructor()
{
    a=20;
    b=30;
    cout<<"I am called";
}
constructor :: constructor(int x,int y)
{

    cout<<"i am called and i give:\t"<<x+y;
}
int main()
{
    constructor c1; // non-parameterised construtor is called
    cout<<"\nI,ve taken break here"<<endl;
    constructor c2(20,30); // parameterised construtor is called
    return 0;
}
