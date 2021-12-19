#include <iostream>
#include <fstream>
#include <cmath>
#define e 2.718281828
#define EPS 1e-7
//const float EPS=1e-7;
#define PI 3.14159265
struct f1Ats{
    double x1;
    double x2;
};
struct f2Ats{
    double x1;
    double x2;
};

using namespace std;
void func1(int x1, int x2,ofstream & fd)
{   //e^x = 3x (ats. x ~ 0.619). || e^x-3x=0
    f1Ats A;
    string mins="-------------------------------------------------------------------------------------------------------";
    //fd.open("Results.txt");
    long double x;
    A.x1=x1;
    A.x2=x2;
    if((A.x2-A.x1)<EPS && (A.x2-A.x1)>-EPS )
    {
        cout<<"Formulas f(x)=e^x || f(x)=3x || e^x-3x=0 x doesn't belong between"<<x1<<" & "<<x2<<endl<<mins<<endl;
        return;

    }
    x=A.x1;
    while (pow(e,x)-3*x>=EPS || pow(e,x)-3*x<=-EPS)
    {

            if(pow(e,x)-3*x<=EPS && pow(e,x)-3*x>=-EPS)
            {
                break;
            }
            else if((A.x2-A.x1)<EPS && (A.x2-A.x1)>-EPS)
            {
                break;
            }
            else if(pow(e,x)-3*x>=EPS || pow(e,x)-3*x<=-EPS)
            {
                if (pow(e,x)-3*x>=EPS)
                A.x1=x;
                else A.x2=x;
                x=(A.x1+A.x2)/2;
                cout<<A.x1<<" "<<A.x2<<endl;
            }
    };
    if (pow(e,x)-3*x<=EPS && pow(e,x)-3*x>=-EPS)
    {
       cout<<"For the formulas f(x)=e^x || f(x)=3x || e^x-3x=0 x is "<< x<<endl<<mins<<endl;
        fd<<"For the formulas f(x)=e^x || f(x)=3x || e^x-3x=0 x is "<< x<<endl<<mins<<endl;
    }
    else
    {
        cout<<"Formulas f(x)=e^x || f(x)=3x || e^x-3x=0 x doesn't belong between: "<<x1<<" & "<<x2<<endl<<mins<<endl;
    }
}
void func2(int x1, int x2,ofstream & fd)
{
    //cos x = x (ats. x ~ 0.739);
        f2Ats A;
    string mins="-------------------------------------------------------------------------------------------------------";
    //fd.open("Results.txt");
    long double x;
    A.x1=x1;
    A.x2=x2;
    if((A.x2-A.x1)<EPS && (A.x2-A.x1)>-EPS )
    {
        cout<<"Formulas f(x)=cos(x) || f(x)=x || cos(x)-x=0 x doesn't belong between"<<x1<<" & "<<x2<<endl<<mins<<endl;
        return;

    }
    x=A.x1;
    while (cos(x)-x>=EPS || cos(x)-x<=-EPS)
    {

            if(cos(x)-x<=EPS && cos(x)-x>=-EPS)
            {
                break;
            }
            else if((A.x2-A.x1)<EPS && (A.x2-A.x1)>-EPS)
            {
                break;
            }
            else if(cos(x)-x>=EPS || cos(x)-x<=-EPS)
            {
                if (cos(x)-x>=EPS)
                A.x1=x;
                else A.x2=x;
                x=(A.x1+A.x2)/2;
                cout<<A.x1<<" "<<A.x2<<endl;
            }
    };
    if (cos(x)-x<=EPS && cos(x)-x>=-EPS)
    {
       cout<<"For the formulas f(x)=cos(x) || f(x)=x || cos(x)-x=0 x is "<< x<<endl<<mins<<endl;
        fd<<"For the formulas f(x)=cos(x) || f(x)=x || cos(x)-x=0 x is "<< x<<endl<<mins<<endl;
    }
    else
    {
        cout<<"Formulas f(x)=cos(x) || f(x)=x || cos(x)-x=0 x doesn't belong between: "<<x1<<" & "<<x2<<endl<<mins<<endl;
    }

}

int main()
{
    ofstream fd("Results.txt");
    double x1, x2;
    cout<<"To calculate the the formulas:\nf(x)=e^x || f(x)=3x || e^x-3x=0 \nf(x)=cos(x) || f(x)=x || cos(x)-x=0\n please provide the left and the right x's\nTo be more specific left is <-- and right is -->\n";
    cout<<"Insert the left x: ";
    cin>>x1;
    cout<<"Insert the right x: ";
    cin>>x2;
    if(x2<x1)
    {
        double temp=x1;
        x1=x2;
        x2=temp;
    }
    func1(x1,x2,fd);
    func2(x1,x2,fd);


    return 0;
}
//nd universal program
//cos x = x (ats. x ~ 0.739);

