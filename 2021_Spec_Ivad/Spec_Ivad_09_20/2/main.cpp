#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    cout<<"X: ";
    cin>>x;
    //y=1+x+(())/(2*1))+((x*x*x)/(3*2*1))+((x*x*x*x)/(4*3*2*1));
    y=1+x*(1+x/2*(1+x/3*(1+x/4)));
    cout<<"Y: "<<y;
    return 0;
}
/*
y=1+x*(1+x/2*(1+x/3*(1+x/4)));
*/
