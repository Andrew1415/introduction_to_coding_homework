#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;
struct cord{
    int x;
    int z;
    int y;
    int length;
    int number;
};
int main()
{
    int n;
    cord A[100];
    ifstream fd("Data.txt");
        fd>>n;
        for(int i=0; i<n; i++)
        {
            fd>>A[i].x>>A[i].z>>A[i].y;
            A[i].length=sqrt(A[i].x*A[i].x+A[i].z*A[i].z+A[i].y*A[i].y);
            A[i].number=i+1;

        };
        fd.close();
    int max_length=A[0].length;
    int max_point=A[0].number;
    for(int i=0; i<n; i++)
    {
        if(A[i].length>max_length)
        {
            max_length=A[i].length;
            max_point=A[i].number;
        }

    }

    ofstream fr("Rez.txt");
    for(int i=0; i<n; i++)
    {
        fr.width(3);
        fr<<A[i].length<<endl;
        cout.width(3);
        cout<<A[i].length<<endl;
    }
    fr<<"Furthest point from 0/0/0 is point number: "<<max_point<<". Away by: "<<max_length<<"."<<endl;
    fr.close();
    cout<<"Furthest point from 0/0/0 is point number: "<<max_point<<". Away by: "<<max_length<<"."<<endl;
    return 0;
}
