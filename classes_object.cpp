#include<iostream>
#include<conio.h>
using namespace std;
const float pi=3.14;

/* addition using classes & objects
class Addition
    {
        private:
            int a,b,sum;
        public:
        void get()
            {
                cout<<"Enter two nos : ";
                cin>>a>>b;
            }
        void add()
            {
                sum = a+b;
            }
        void show()
            {
                cout<<"\nAddition : "<<sum;
            }
    };
int main()
{
    Addition x;

    x.get();
    x.add();
    x.show();

    getch();
}
*/

//Area of circle using classes & objects
/*
class Circle
    {
        private:
            float r, area;
        public:
        void get()
            {
                cout<<"\nEnter the radius : ";
                cin>>r;
            }
        void process()
            {
                area = pi*r*r;
            }
        void show()
            {
                cout<<"\nArea of circle : "<<area;
            }
    };
int main()
{
    Circle x;

    x.get();
    x.process();
    x.show();

    getch();
}
*/

//factorial of any no. using class & objects
/*
class Factorial
    {
        private:
            int n, fact;
        public:
            void get();
            void process();
            void show();
    };

    void Factorial::get()
    {
        cout<<"\nEnter any no.s : ";
        cin>>n;
    }
    void Factorial::process()
    {
        fact=1;
        for(int i=1;i<=n;i++)
            {
                fact = fact*i;
            }
    }
    void Factorial::show()
    {
        cout<<"\nFactorial of "<<n<<" is : "<<fact;
    }

int main()
{
    Factorial x;

    x.get();
    x.process();
    x.show();

    getch();
}
*/

//Table of any nos using classes & objects

class Table
{
    private:
        int n,p;
    public:
        void input();
        void show();
};

void Table::input()
    {
        cout<<"Enter the no : ";
        cin>>n;
    }
void Table::show()
    {
        for(int i=1;i<=10;i++)
            {
                p = n*i;
                cout<<"\n"<<n<<" X "<<i<<" = "<<p;
            }
    }

int main()
{
    Table x;

    x.input();
    x.show();

    getch();  
}