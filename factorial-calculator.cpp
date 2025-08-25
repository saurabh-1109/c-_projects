// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void factorial()
{
    int i ;
    double n ,fact = 1;
    
    cout<<"Enter Number : ";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    
    cout<<"Fctorial of "<< n <<" = "<<fact<<endl;
    
    cout<<"-----------------------------------------------------"<<endl;
}

void exit()
{
    cout<<"Exiting the programm..."<<endl;
    cout<<"-----------------------------------------------------"<<endl;
}
int main()
{   int choice;

    cout<<"1 -> To Calculate Factorial."<<endl;
    cout<<"2 -> To Exit."<<endl;
do{
    cout<<"Enter Your Choice : ";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        {
            factorial();
            break;
        }
        case 2 :
        {
            exit();
            break;
        }
        default :
        {
            cout<<"Invalid choice.."<<endl;
            cout<<"Please Enter Valid Choice...."<<endl;
            cout<<"------------------------------------------------"<<endl;
            break;
        }
    }
  }while(choice != 2);
  return (0);
}