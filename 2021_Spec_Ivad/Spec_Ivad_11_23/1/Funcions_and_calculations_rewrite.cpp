#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
using namespace std;

const long double EPS = 1e-7;

const char *const mins = "-------------------------------------------------------------------------------------------------------";

typedef long double (*func)(long double x);

bool get_func_roots(long double x1, long double x2, long double& x, func f)
{
    x = x1;
    while ((f(x) > EPS || f(x) < -EPS) && (x2-x1 >= EPS || x2-x1 <= -EPS))
    {
        if (f(x) >= EPS)
			x1 = x;
		else
			x2 = x;

		x = (x1+x2)/2.0;
        cout<< x1 << " " << x2 << endl;
    };
    return (f(x) <= EPS && f(x) >= -EPS);
}

int main()
{
    ofstream fd("Results.txt");
    long double x1, x2;

	cout<<"To calculate the the formulas:\nf(x)=e^x || f(x)=3x || e^x-3x=0 \nf(x)=cos(x) || f(x)=x || cos(x)-x=0\n please provide the left and the right x's\nTo be more specific left is <-- and right is -->\n";
    cout<<"Insert the left x: ";
    cin>>x1;
    cout<<"Insert the right x: ";
    cin>>x2;

	long double x;

	if(x2<x1) swap(x1, x2);

	//e^x = 3x (ats. x ~ 0.619) || e^x-3x=0
  	if (!get_func_roots(x1, x2, x, [](long double x) { return exp(x)-3*x; }))
	{
		cout<<"Formulas f(x)=e^x || f(x)=3x || e^x-3x=0 x doesn't belong between: "<<x1<<" & "<<x2<<endl<<mins<<endl;
    }
	else
	{
    	cout<<"For the formulas f(x)=e^x || f(x)=3x || e^x-3x=0 x is "<< x<<endl<<mins<<endl;
      	fd<<"For the formulas f(x)=e^x || f(x)=3x || e^x-3x=0 x is "<< x<<endl<<mins<<endl;
	}

	//cos x = x (ats. x ~ 0.739) cos(x)-x=0
	if (!get_func_roots(x1, x2, x, [](long double x) { return cos(x)-x; }))
	{
        cout<<"Formulas f(x)=cos(x) || f(x)=x || cos(x)-x=0 x doesn't belong between: "<<x1<<" & "<<x2<<endl<<mins<<endl;
	}
	else
	{

    	cout<<"For the formulas f(x)=cos(x) || f(x)=x || cos(x)-x=0 x is "<< x<<endl<<mins<<endl;
      	fd<<"For the formulas f(x)=cos(x) || f(x)=x || cos(x)-x=0 x is "<< x<<endl<<mins<<endl;
	}
	if(!get_func_roots(x1,x2,x,[](long double x) { return (-2)*x+0.25+sin(x); }))
    {
        cout<<"Formulas f(x)=sin(x) || f(x)=2x-0.25 || -2x+0.25+sin(x)=0 x doesn't belong between: "<<x1<<" & "<<x2<<endl<<mins<<endl;
    }
    else
    {
        cout<<"For the formulas f(x)=sin(x) || f(x)=2x-0.25 || -2x+0.25+sin(x)=0 x is "<< x<<endl<<mins<<endl;
      	fd<<"For the formulas f(x)=sin(x) || f(x)=2x-0.25 || -2x+0.25+sin(x)=0 x is "<< x<<endl<<mins<<endl;
    };
    if(!get_func_roots(x1,x2,x,[](long double x) { return log10(x)+pow(x,3); }))
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

