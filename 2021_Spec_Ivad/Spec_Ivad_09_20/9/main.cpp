#include <iostream>

using namespace std;

int main()
{
    int x,ats;
    cout<<"Ieveskite naturaluji trizenkli skaiciu:";
    cin>>x;
    ats=x/100+x%100/10+x%100%10;
    cout<<x<<"="<<ats;
    return 0;
}
