#include<iostream>
using namespace std;

int main()
{
    int num, check=1;

    cout<<"\nEnter the no : ";
    cin>>num;

    for(int i=2; i<=num-1; i++)
        {
            if(num%i==0)
                {
                    check=0;
                    break;
                }
        }
    if(check==1)
        cout<<"\n"<<num<<" is prime";
    else
        cout<<"\n"<<num<<" is not prime";
    
    return 0;
}

