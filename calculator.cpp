#include<iostream>
using namespace std;

int add(int x , int y)
{
    return(x+y);
}
int subtract(int x,int y)
{
    return(x-y);
}

int product(int x,int y)
{
    return(x*y);
}

int division(int x,int y)
{
    if(y>x)
    {
        return(0);
    }
    else
    {
        return(x/y);
    }
}
int mod(int x,int y)
{
    if(y>x)
    {
        return(0);
    }
    else
    {
        return(x%y);
    }
}
void exit()
{
    cout<<"Exiting the programm....."<<endl;
}
int main()
{   //system("cls");

    int x , y ;
    int oper;

    cout<<"press 1 -> to add"<<endl;
    cout<<"press 2 -> to subtract"<<endl;
    cout<<"press 3 -> to multiply"<<endl;
    cout<<"press 4 -> to divide"<<endl;
    cout<<"press 5 -> to find mod"<<endl;
    cout<<"press 6 -> to Exit"<<endl<<endl;
    
    
do{
    
    cout<<"Choose opertor : ";
    cin>>oper ; 
    cout<<"Enter 1st Number : ";
    cin>>x;
    cout<<"Enter 2nd Number: ";
    cin>>y;
    switch(oper)
    {
        case 1 :
        {
            cout<<"Addition result = " << add(x,y)<<endl;
            break;
        }
        case 2 :
        {
            cout<<"Subtraction result = " << subtract(x,y)<<endl;
            break;
        }
        case 3 :
        {
            cout<<"Multiplication result = " <<product(x,y)<<endl;
            break;
        }
        case 4:
        {
            cout<<"division result = " <<division(x,y)<<endl;
            break;
        }
        case 5 :
        {
           cout<<"Remainder  = " << mod(x,y) <<endl;
            break;
        }
        case 6 :
        {
            exit();
            break;
        }
        default :
        {
            cout<<"invalid choice : "<<endl;
            break;
        }
     
    }
    cout<<"---------------------------------------"<<endl;
}while(oper != 6)   ; 
return(0);
}