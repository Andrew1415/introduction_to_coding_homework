#include <iostream>
using namespace std;
long int SumTotal();
int main()
{
    long int sum;
    cout << "Enter your chosen numbers: " << endl;
    sum=SumTotal();
    cout <<"Jusu pasirinktu skaiciu suma: "<<sum<<endl;
    return 0;
}
long int SumTotal()
{
    int x;
    cin>>x;
    if(x<0) return 0;
    else return SumTotal()+x;
}
