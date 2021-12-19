#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#define e 2.718281828
#define EPS 1e-10
#define PI 3.14159265
#define mins "----------------------------------------------------------------------------------------------------------------"

typedef long double (*func)(long double x);
using namespace std;
bool func_root(long double x1, double long x2, double long & x, func f)
{
    x=(x1+x2)/2;
    while ((f(x) > EPS || f(x) < -EPS) && (x2-x1 >= EPS || x2-x1 <= -EPS))
    {
        if(f(x)*f(x2)<0)
        {
            x1=x;
        }
        else
        {
            x2=x;
        }
        cout<<x1<<" "<<x2<<endl;
        x=(x1+x2)/2;
    };
    return (f(x)<=EPS && f(x)>=-EPS);

}

int main()
{
    ofstream fd("Results.txt");
    long double x1, x2, x;
    cout<<"To calculate the the formulas:\nf(x)=e^x || f(x)=3x || e^x-3x=0 \nf(x)=cos(x) || f(x)=x || cos(x)-x=0\nf(x)=sin(x) || f(x)=2x-0.25 || -2x+0.25+sin(x)=0 \nf(x)=log10(x) || f(x)=-x^3 || log10(x)+x^3=0\nplease provide the left and the right x's\nTo be more specific left is <-- and right is -->\n";
    cout<<"Insert the left x: ";
    cin>>x1;
    cout<<"Insert the right x: ";
    cin>>x2;
    if(x2<x1)
    {
        swap(x1,x2);
    }
    if(!func_root(x1,x2,x,[](long double x) { return exp(x)-3*x; }))
    {
        cout<<"Formulas f(x)=e^x || f(x)=3x || e^x-3x=0 x doesn't belong between: "<<x1<<" & "<<x2<<endl<<mins<<endl;
    }
    else
    {
        cout<<"For the formulas f(x)=e^x || f(x)=3x || e^x-3x=0 x is "<< x<<endl<<mins<<endl;
      	fd<<"For the formulas f(x)=e^x || f(x)=3x || e^x-3x=0 x is "<< x<<endl<<mins<<endl;
    };
    if(!func_root(x1,x2,x,[](long double x) { return cos(x)-x; }))
    {
        cout<<"Formulas f(x)=cos(x) || f(x)=x || cos(x)-x=0 x doesn't belong between: "<<x1<<" & "<<x2<<endl<<mins<<endl;
    }
    else
    {
        cout<<"For the formulas f(x)=cos(x) || f(x)=x || cos(x)-x=0 x is "<< x<<endl<<mins<<endl;
        fd<<"For the formulas f(x)=cos(x) || f(x)=x || cos(x)-x=0 x is "<< x<<endl<<mins<<endl;
    }
    if(!func_root(x1,x2,x,[](long double x) { return (-2)*x+0.25+sin(x); }))
    {
        cout<<"Formulas f(x)=sin(x) || f(x)=2x-0.25 || -2x+0.25+sin(x)=0 x doesn't belong between: "<<x1<<" & "<<x2<<endl<<mins<<endl;
    }
    else
    {
        cout<<"For the formulas f(x)=sin(x) || f(x)=2x-0.25 || -2x+0.25+sin(x)=0 x is "<< x<<endl<<mins<<endl;
      	fd<<"For the formulas f(x)=sin(x) || f(x)=2x-0.25 || -2x+0.25+sin(x)=0 x is "<< x<<endl<<mins<<endl;
    };
    if(!func_root(x1,x2,x,[](long double x) { return log10(x)+pow(x,3); }))
    {
        cout<<"Formulas f(x)=log10(x) || f(x)=-x^3 || log10(x)+x^3=0 x doesn't belong between: "<<x1<<" & "<<x2<<endl<<mins<<endl;
    }
    else
    {
        cout<<"For the formulas f(x)=log10(x) || f(x)=-x^3 || log10(x)+x^3=0 x is "<< x<<endl<<mins<<endl;
        fd<<"For the formulas f(x)=log10(x) || f(x)=-x^3 || log10(x)+x^3=0 x is "<< x<<endl<<mins<<endl;
    }


    return 0;
}

