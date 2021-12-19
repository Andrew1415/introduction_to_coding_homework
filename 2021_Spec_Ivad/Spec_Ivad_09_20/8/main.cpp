#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double pi=3.14159265359;
    double e=2.718281828;
    if(pow(pi,e)>pow(e,pi))
    {
        cout<<"pi^e is more"<<endl;
    }
    else if (pow(pi,e)<pow(e,pi))
    {
        cout<<"e^pi is more"<<endl;
    }
    return 0;
}
