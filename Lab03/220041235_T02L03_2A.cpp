#include <bits/stdc++.h>
using namespace std;
class RationalNumber
{
private:
    int _numerator,_denominator;
public:
    void assign(int numerator,int denominator)
    {
        if(denominator==0)
            cout<<"You can not assign 0 as denominator."<<endl;
        else
        {
            _numerator=numerator;
            _denominator=denominator;
        }
    }
    double convert()
    {
        if(_denominator!=0)
        {
            double numerator=(float)_numerator;
            double denominator=(float)_denominator;
            double result=numerator/denominator;
            return result;
        }
    }
    void invert()
    {
        if(_numerator==0)
        {
            cout<<"You can not assign 0 as denominator."<<endl<<"Inversion Failed"<<endl;
        }
        else
        {
            int temp;
            temp=_numerator;
            _numerator=_denominator;
            _denominator=temp;
        }
    }
    void print()
    {
        if(_denominator==0)
            cout<<"Not a rational number"<<endl;
        else if(_numerator==0)
            cout<<"The desired rational number is 0"<<endl;
        else
        cout<<"The Rational number is "<<_numerator<<"/"<<_denominator<<endl;
    }
};
int main()
{
    RationalNumber f1;
    int numerator=5,denominator=0;
    f1.assign(numerator,denominator);
    f1.print();
    denominator=2;
    f1.assign(numerator,denominator);
    cout<<f1.convert()<<endl;
    f1.invert();
    f1.print();
}
