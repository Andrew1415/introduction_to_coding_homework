#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Insert a number: ";
    cin >> number;

    for(int i=1; i<=number; i++)
    {
        for(int j=1;j<=number;j++)
        {
            cout.width(5);
            cout<<i*j;
        }
        cout<<endl;
    }
    return 0;
}
