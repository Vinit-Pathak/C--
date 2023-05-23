#include<iostream>
#include<conio.h>
using namespace std;

// int main()
// {
//     int fact=1,n;
//     cout<<"\nEnter any no : ";
//     cin>>n;

//     for(int i=1;i<=n;i++)
//         {
//             fact = fact*i;
//         }
//     cout<<"Factorial of "<<n<<" is : "<<fact;
//     getch();
// }

//factorial of any no. using call by reference

void factorial( int &x, int &y)
{
    for(int i=1;i<=x;i++)
       y = y*i;
}

int main()
{
    int a, fact=1;

    cout<<"\nEnter any no : ";
    cin>>a;

    factorial(a,fact);
    cout<<"Factorial : "<<fact;

    getch();
}

