#include<iostream>
#include<conio.h>
using namespace std;

int a=20;
int main()
{
    int a=10;

    cout<<"\nLocal A: "<<a;
    cout<<"\nGlobal A: "<<::a;
    
    cout<<"\n**************";

    a=100;
    ::a=200;

    cout<<"\nLocal A: "<<a;
    cout<<"\nGlobal A: "<<::a;

    getch();
}