#include <iostream>
using namespace std;
//julain leap year
bool leap_year(int);

int main()
{
    int a;
    cout << "Iveskite metus: " << endl;
    cin >> a;
    if (leap_year(a)!=0)
    {
        cout << "It is a leap year"<<endl;
    }
    else
    {
        cout << "It is not a leap year"<<endl;
    }


    return 0;
}

bool leap_year(int x)
{
    return(x%4==0);
}
