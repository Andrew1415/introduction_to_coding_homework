#include <iostream>
using namespace std;
//gregoryan leap year
bool gregorian_leap_year(int);

int main()
{
    int a;
    cout << "Iveskite metus: " << endl;
    cin >> a;
    if (gregorian_leap_year(a)!=0)
    {
        cout << a << " It is a leap year"<<endl;
    }
    else
    {
        cout << a << " It is not a leap year"<<endl;
    }


    return 0;
}

bool gregorian_leap_year(int x)
{
    return(x%400==0)||(x%100!=0) && (x%4==0);
}
