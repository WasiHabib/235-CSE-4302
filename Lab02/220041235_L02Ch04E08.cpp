#include <iostream>
using namespace std;
typedef struct fraction
{
    int numerator;
    int denominator;
}fraction;
int main()
{
    fraction f1,f2,result;
    char ch;
    cout<<"Enter the first fraction: ";
    cin>>f1.numerator>>ch>>f1.denominator;
    cout<<"Enter the second fraction: ";
    cin>>f2.numerator>>ch>>f2.denominator;
    result.numerator=f1.numerator*f2.denominator+f2.numerator*f1.denominator;
    result.denominator=f2.denominator*f1.denominator;
    if(f1.denominator==0 || f2.denominator ==0)
        cout<<"Invalid Operation"<<endl;
    else
        cout<<"The desired result is: "<<result.numerator<<ch<<result.denominator<<endl;

}
