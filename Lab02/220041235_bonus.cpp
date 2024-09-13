#include <iostream>
#include <string>
using namespace std;
typedef struct car
{
    string brand;
    string model;
    int year;
    string fuel_type;
    double mileage;
}car;
void fuel_efficient(double mileage)
{
    if(mileage==0)
        cout<<"This car is electric, efficiency measured in km/charge."<<endl;
    else if(mileage<=15)
        cout<<"This car is not fuel efficient."<<endl;
    else
        cout<<"This car is fuel efficient."<<endl;
}
double fuel_calc(double mileage)
{
    return 100/mileage;
}
double cost(double consumption,string type)
{
    if(type=="petrol")
        return 0.89*consumption;
    if(type=="diesel")
        return 3.24*consumption;
    else
        return 2.45*consumption;
}
void display(int n, car arr[])
{
     for(int i=0;i<n;i++)
    {
        cout<<"Car: "<<i+1<<endl;
        cout<<"Brand: "<<arr[i].brand<<endl;
        cout<<"Model: "<<arr[i].model<<endl;
        cout<<"Year: "<<arr[i].year<<endl;
        cout<<"Fuel Type: "<<arr[i].fuel_type<<endl;
        cout<<"Mileage: "<<arr[i].mileage<<endl;
        fuel_efficient(arr[i].mileage);
        if(arr[i].mileage!=0)
        {
            double x=fuel_calc(arr[i].mileage);
            double total=cost(x,arr[i].fuel_type);
            cout<<"Estimated fuel cost for 100 k.m is "<<total<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    car arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Car no. "<<i+1<<endl;
        cout<<"Enter brand,model,year,fuel_type,mileage"<<endl;
        cin>>arr[i].brand;
        cin>>arr[i].model;
        cin>>arr[i].year;
        cin>>arr[i].fuel_type;
        cin>>arr[i].mileage;
    }
    display(n,arr);

}
