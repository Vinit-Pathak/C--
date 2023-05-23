#include<iostream>
using namespace std;

// int main()
// {
//     int a,b, num=1;

//     cout<<"Enter the value of a : ";
//     cin>>a;
//     cout<<"Enter the value of b : ";
//     cin>>b;

//     for(int i=1;i<=b;i++)
//         {
//             num = num*a;
//         }
//     cout<<"\nPower of "<<a<<"^"<<b<<" is : "<<num;
//     return 0;
// }

//power of any no. using call by reference

void power(int &x, int &y, int &z)
{
    for(int i=1; i<=y; i++)
        {
            z = z*x;
        }
}

int main()
{
    int a,b, num=1;

    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    power(a,b,num);

    cout<<"\nPower of "<<a<<"^"<<b<<" is : "<<num;
    return 0; 
}