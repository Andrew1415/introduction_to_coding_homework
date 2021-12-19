#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14159265359
int main()
{
    double ats, x, y;
    cout<<"Laipsnis: ";
    cin>>x;
    cout<<"Lyginamas su: ";
    cin>>y;
    ats=sin(x*PI/180);
    if(ats==y)
    {
        cout<<"LYGUS";
    }
    else
    {
        cout<<"NELYGUS";
    }
    return 0;
}
