#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout<<"X:";
    cin>>x;
    cout<<"Y:";
    cin>>y;
    z=y;
    y=x;
    x=z;
    cout<<"X:"<<x<<endl<<"Y:"<<y;
    return 0;
}
