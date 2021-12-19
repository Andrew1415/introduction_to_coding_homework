#include <iostream>
#define N 10
using namespace std;
int main()
{
    //int N;
    //cout << "iveskite el. skaiciu: ";
    //cin >> n;
    int a[N]={8,5,9,7,10,6,4,6,9,10};
    int sum=0, maximum, minimum, sk=0;
    double vidurkis;
    for (int i=0; i<N; i++)
        {
            sum+=a[i];
        }
        vidurkis=(float)sum/N;
        cout<<vidurkis<<endl;
        cout<<"---------------------------"<<endl;
        cout<<"didesni negu vidurkis: "<<endl;
        int n2=0, n3=0;
   for (int i=0; i<N; i++)
   {
       if(a[i]>vidurkis)
        {
            cout << a[i] <<endl;
        n2++;
        }
   }
    cout<<"daugiau negu vidurkis yra "<<n2<<" skt."<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"maziau negu vidrukis: "<<endl;
    for(int i=0; i<N; i++)
    {
        if(a[i]<vidurkis)
          {
            cout << a[i] <<endl;
            n3++;
        }
    }
    cout<<"maziau negu vidurkis yra "<<n3<<" skt."<<endl;
    cout<<"---------------------------"<<endl;
    maximum=minimum=a[0];
    for(int i=0; i<N; i++)
    {
        if(a[i]>maximum) maximum=a[i];
        if(a[i]<minimum) minimum=a[i];
    }
    cout<<"Maks: "<<maximum<<endl<<"Minimum: "<<minimum<<endl;
    cout<<"---------------------------"<<endl;
    // rusiavimas \|/

    return 0;
}
