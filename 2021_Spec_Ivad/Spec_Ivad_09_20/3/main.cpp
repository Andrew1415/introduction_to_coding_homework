#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double m1, m2, R, F;
    cout<<"m1: ";
    cin>>m1;
    cout<<"m2: ";
    cin>>m2;
    cout<<"R: ";
    cin>>R;
    F=6.673*pow(10,-8)*((m1*m2)/pow(R,2));
    cout<<"F: "<<F;
    return 0;
}
//6.673*pow(10,-8) = 6.673E-8
