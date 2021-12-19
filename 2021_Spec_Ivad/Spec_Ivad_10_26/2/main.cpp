#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "iveskite el. skaiciu: ";
    cin >> n;
    int a[n]={8,5,9,7,10,6,4,6,9,10};
    int sum=0, amximum, minimum, sk=0;
    double vidurkis;
    for (int i=0; i<n; i++)
        {
            sum+=a[i];
        }
        vidurkis=sum/n;
        cout << vidurkis;
    return 0;
}
