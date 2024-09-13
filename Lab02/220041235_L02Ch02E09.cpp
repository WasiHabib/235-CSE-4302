#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    char ch;
    cout<<"Enter the first fraction: ";
    cin>>a>>ch>>b;
    cout<<"Enter the second fraction: ";
    cin>>c>>ch>>d;
    int numerator=a*d+b*c;
    int denominator=b*d;
    if(b==0 || d==0)
        cout<<"invalid operation"<<endl;
    else
        cout<<"The desired  result is: "<<numerator<<ch<<denominator<<endl;
}
