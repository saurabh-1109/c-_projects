
#include <iostream>
#include<cmath>
using namespace std;

void simple()
{
    double amount , rate , months , years, interest;
    long totalamount;
    // data input from user
    cout<<"Enter Principle Amount : "<<endl;
    cin>>amount;
    cout<<"Enter rate of interest : "<<endl;
    cin>>rate;
    cout<<"Enter Number of years: "<<endl;
    cin>>years;
    
    months = years * 12 ;// year to months conversion ;
    
    interest =(amount * rate  * years ) / 100 ; 
    totalamount=amount+((interest *12));
    
    cout<<"Monthly intrest is rs : "<<interest / years<<endl;
    cout<<"Intrest  for " << years << " years is rs : "<<(interest * 12)<<endl;;
    cout<<"Total Amount Receivable at end of "<<years <<" year is rs : "<<totalamount<<endl;
}

void compound()
{
    double amount , rate , months , years, interest;
    long totalamount;
    // data input from user
    cout<<"Enter Principle Amount : "<<endl;
    cin>>amount;
    cout<<"Enter rate of interest : "<<endl;
    cin>>rate;
    cout<<"Enter Number of years: "<<endl;
    cin>>years;
    
    months = years * 12 ;// year to months conversion ;
    
    interest = amount* pow((1  + rate / 100 ),years); 
    totalamount=amount+interest;
    
    cout<<"Yearly intrest is rs : "<<interest<<endl;;
    cout<<"Total Amount Receivable at end of "<<years <<" year is rs : "<<totalamount<<endl;
}

int main() {
    
    int choice ;
    cout <<"1 -> To calculate simple interest "<<endl;
    cout <<"1 -> To calculate compound interest "<<endl;
    cout<<"Press Your Option : "<<endl;
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        {
            simple();
            break;
        }
        case 2:
        {
            compound();
            break;
        }
        
        default:
        {
            cout<<"Enter Valid Choice...."<<endl;
            break;
        }
        
    }
    return 0;
}
