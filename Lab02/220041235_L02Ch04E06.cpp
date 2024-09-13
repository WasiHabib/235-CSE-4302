#include <iostream>
using namespace std;
enum employee_type
{laborer, secretary, manager, accountant, executive,researcher};
int main()
{
    char letter;
    cout<<"Enter employee type(first letter only;l for laborer,s for secretary,m for manager,a for accountant,e for executive,r for researcher): ";
    cin>>letter;
    employee_type employee_type;
    switch(letter)
    {
        case 'l':
                employee_type=laborer;
                break;
        case 's':
                employee_type=secretary;
                break;
        case 'm':
                employee_type=manager;
                break;
        case 'a':
                employee_type=accountant;
                break;
        case 'e':
                employee_type=executive;
                break;
        case 'r':
                employee_type=researcher;
                break;

    }
    switch(employee_type)
    {
        case laborer:
                    cout<<"Employee type is laborer"<<endl;
                    break;
         case secretary:
                    cout<<"Employee type is secretary"<<endl;
                    break;
         case manager:
                    cout<<"Employee type is manager"<<endl;
                    break;
         case accountant:
                    cout<<"Employee type is accountant"<<endl;
                    break;
         case researcher:
                    cout<<"Employee type is researcher"<<endl;
                    break;
         case executive:
                    cout<<"Employee type is executive"<<endl;
                    break;

    }
}
