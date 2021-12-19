#include <iostream>
//factorial
using namespace std;
long int Fact(int n);
int main()
{
    int n;
    cout<<"Insert interger: ";
    cin>>n;
    cout<<"Factoriar out of "<<n<<" is: "<<Fact(n);
    return 0;
}

long int Fact(int n)
{
    if (n == 0) return 1;
    else return Fact(n-1)*n;
}
