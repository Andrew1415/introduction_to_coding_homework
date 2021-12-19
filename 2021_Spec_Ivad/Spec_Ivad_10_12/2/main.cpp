#include <iostream>
//power
using namespace std;
double Power(double f, int n);
int main()
{
    double f;
    int n;
    cout<<"Enter base number (f):";
    cin>>f;
    cout<<"Enter ^n:";
    cin>>n;
    cout<<"Number "<<f<<"^"<<n<<" is equal to: "<<Power(f,n);

    return 0;
}
double Power(double f, int n)
{
    if(n==0) return 1;
    else if(n>0) return Power(f,n-1)*f;
    else return 1/Power(f,abs(n));     //f^n=1/f^|n|
}
