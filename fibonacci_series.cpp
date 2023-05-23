//fibonacci series using non-recursion
#include<iostream>
using namespace std;

// int main()
// {
//     int n, a = 0, b = 1, c;
//     cout<<"Enter the nth term : ";
//     cin>>n;
//     cout<<"Fibonacci series of first "<<n<<"th term is: ";

//     for(int i=1; i<=n; i++)
//         {
//             cout<<" "<<a;
//             c = a + b;
//             a = b;
//             b = c;
//         }
// return 0;    
// }

//fibonacci series using recursion
int fibo(int val)
{
    if(val==0)
     return 0;
    else if(val==1)
     return 1;
    else
     return (fibo(val-1) + fibo(val-2));
}

int main()
{
    int i,n;
    cout<<"Enter the nth term : ";
    cin>>n;

    cout<<"Fibonacci series of first "<<n<<"th terms are :- ";
    for(i=0; i<n; i++)
    {
        cout<<" "<<fibo(i);
    }
    return 0;     
}