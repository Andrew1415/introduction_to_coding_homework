#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, y;
    bool B;
    cout<<"X: ";
    cin>>x;
    cout<<"Y: ";
    cin>>y;
   /* if (x==y)
    {
        cout<<"B = true"<<endl;
        B="True";
        cout<<B;

    }
    else
    {
        cout<<"B = false"<<endl;
        B="False";
        cout<<B;
    }*/
    B= x==y;
cout<<"B= "<< boolalpha <<B<<endl;

    return 0;
}
/*
B= x==y;
cout<<"B= "<<B<<endl;*/
