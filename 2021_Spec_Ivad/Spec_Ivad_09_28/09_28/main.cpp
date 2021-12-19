#include <iostream>
using namespace std;
int maks(int , int );
int leap_year(int);

int main()
{
    int a;
    cout << "Iveskite metus: " << endl;
    cin >> a;
    cout << leap_year(a);


    return 0;
}
/*int a,b,c,d;
    cout << "Iveskite 4 pazimius: "<< endl;
    cin >> a >> b >> c >> d;

    cout << "Didesnis pazimys:" << maks(maks(a,b),maks(c,d)) << endl;
        algoritmas...
    maks(a,b)    maks(c,d)
        \           /
        maks(...,...)
                |
    maks(maks(a,b),maks(c,d))
*/
int maks (int x, int y)
{
    if(x>y){return x;}
    else {return y;};
}
int leap_year(int x)
{
    return(x%4==0);
}
