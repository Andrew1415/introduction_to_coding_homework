#include <iostream>
//fibonaci
using namespace std;
long int fibonaci (int n);
int main()
{
    int n;
    cout<<"Which of the fibonacci sequence numbers you would like to know: "<<endl;
    cin>>n;
    cout<<"fibonaci of: "<<n<<" is: "<<fibonaci(n);
    return 0;
}
long int fibonaci (int n)
{
    if(n==1) return 1;
    else if(n==2) return 1;
    else return fibonaci(n-1)+fibonaci(n-2);
}
