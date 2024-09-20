#include <bits/stdc++.h>
using namespace std;
class Bank_Account
{
private:
    string Customer_Name;
    string Account_Number;
    string Account_Type;
    int Account_Balance;
public:
    Bank_Account()
    {
        Account_Balance=0;
    }
    void customerDetails(string name,string number)
    {
        Customer_Name=name;
        Account_Number=number;
    }
    void accountType(string type)
    {
        Account_Type=type;
    }
    void balance(int balance)
    {
        Account_Balance=balance;
        cout<<"Account balance is: "<<Account_Balance<<endl;
    }
    void deposit(int ammount)
    {
        if(ammount>=0)
            Account_Balance+=ammount;
        cout<<"Final Balance is: "<<Account_Balance<<endl;
    }
    void withdraw(int ammount)
    {

        if(Account_Balance>=ammount && ammount>=0)
            Account_Balance-=ammount;
        else
            cout<<"Insufficient Account Balance"<<endl;
    }
    void display()
    {
        cout<<"Account Details: "<<endl;
        cout<<"Customer Name: "<<Customer_Name<<endl;
        cout<<"Account Number: "<<Account_Number<<endl;
        cout<<"Account Type: "<<Account_Type<<endl;
        cout<<"Account Balance: "<<Account_Balance<<endl;
    }
};
int main()
{
    Bank_Account c1;
    string name="Wasi";
    string number="220041235";
    int deposit_ammount=10000;
    int withdraw_ammount=3000;
    c1.customerDetails(name,number);
    string type="Current";
    c1.accountType(type);
    c1.balance(2000);
    c1.deposit(deposit_ammount);
    c1.withdraw(withdraw_ammount);
    c1.display();

}
