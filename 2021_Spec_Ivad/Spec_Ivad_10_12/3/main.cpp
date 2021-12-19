#include <iostream>
//deriniai
using namespace std;
long int C (int n, int m);
long int Fact(int n);
double Power(int n, int m, double c);
int main()
{
    int n,m;
    double c;
    cout<<" m"<<endl;
    cout<<"C"<<endl;
    cout<<" n"<<endl;
    cout<<" |C - DERINIAI. \n |m - grupes kiekis  \n |n - aibes elementu skaicius"<<endl;
    cout<<"m: ";
    cin>>m;
    cout<<"n: ";
    cin>>n;
    cout<<endl<<"ATS.: "<<C(n,m);
    return 0;
}
long int C (int n, int m)
{
    if(m==0 || m==n) return 1;
    else if (n>m>0) return (Fact(n-1)/(Fact(m)*Fact(n-1-m)))+(Fact(n-1)/(Fact(m-1)*Fact(n-1-m)));
    else return 0;
}
long int Fact(int n)
{
    if (n == 0) return 1;
    else return Fact(n-1)*n;
}

/*
--------------------------------------------------
   0    n       m    m      m-1
  C  = C  = 1; C  = C    + C    , jei 0 < m < n.
   n    n       n    n-1    n-1

   (Fact(n-1)/(Fact(m)*Fact(n-1-m)))+(Fact(n-1)/(Fact(m-1)*Fact(n-1-m)));
--------------------------------------------------
*/


