#include<iostream>
using namespace std;

int main()
{
    int i,j;
    cout<<"Enter two numbers: ";
    cin>>i>>j;

    int sum = i+j;
    int sub = i-j;
    int mul = i*j;
    int div = i/j;

    cout<<"Addition of given numbers is : "<<sum;
    cout<<"\nSubtraction of given numbers is : "<<sub;
    cout<<"\nMultiplication of given numbers is : "<<mul;
    cout<<"\nDivision of given numbers is : "<<div;
    
    return 0;
}