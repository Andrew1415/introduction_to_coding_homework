#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, x2, y1, y2, ats;
    cout<<"X1: ";
    cin>>x1;
    cout<<"Y1: ";
    cin>>y1;
    cout<<"X2: ";
    cin>>x2;
    cout<<"Y2: ";
    cin>>y2;
    ats=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    cout<<"Ats: "<<ats;
    return 0;
}
