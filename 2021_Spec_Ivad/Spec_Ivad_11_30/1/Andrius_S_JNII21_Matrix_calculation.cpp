#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
const string mins="-----------------------------------";
const char* array_data="Data.txt"; //defining data file
const char* array_res="Results.txt"; // defining results file
int main()
{
    ofstream fr(array_res);
    ifstream fd(array_data);
    if(fd.fail())return 1;
    int x, n, m; //x - number of matrix's | n - matrix row count | m - matrix column count
    string M1n, M2n;
    fd>>n>>m;
    int M1[n][m]; //Matrix 1
    int M2[n][m]; //Matrix 2
    fd>>M1n;
    cout<<"Reading "<<M1n<<endl;
    for(int i=0; i<n; i++)  //Reading matrix 1 from data file
    {
        for(int j=0; j<m; j++)
        {
            fd>>M1[i][j];
        }
    }
    fd>>M2n;
    cout<<"Reading "<<M2n<<endl;
    for(int i=0; i<n; i++)  //Reading matrix 2 from data file
    {
        for(int j=0; j<m; j++)
        {
            fd>>M2[i][j];
        }
    }
    //Matrix addition
    cout<<mins<<endl<<"Matrix addition in progress..."<<endl;
    int M_addition[n][m];
    int M_Transpose[n][m];
    for (int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            M_addition[i][j]=M1[i][j]+M2[i][j];
            M_Transpose[i][j]=M_addition[i][j];
            cout<<"In M_addition["<<i<<"]["<<j<<"] is: "<<M_addition[i][j]<<endl;
        }
    };
    cout<<mins<<endl;
    //Matrix transpose
    cout<<mins<<endl<<"Matrix transposition in progress..."<<endl;
    for (int i=0; i<n;i++)
    {
        for(int j=i; j<m; j++)
        {
            swap(M_Transpose[i][j],M_Transpose[j][i]);
            cout<<"In M_Transpose["<<i<<"]["<<j<<"] is: "<<M_Transpose[i][j]<<endl;
        }
    };
    cout<<mins<<endl;
    //Matrix multiplication
    cout<<mins<<endl<<"Matrix multiplication in progress..."<<endl;
    int M_multiplide[n][m];
    for (int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            M_multiplide[i][j]=0;
            for (int k=i; k==i;k++)
            {
                for(int l=0; l<m; l++)
                {
                    M_multiplide[i][j]=M_multiplide[i][j]+(M1[k][l]*M2[l][k]);
                }
            };
            cout<<"In M_multiplide["<<i<<"]["<<j<<"] is: "<<M_multiplide[i][j]<<endl;
        }
    };
    cout<<mins<<endl;

    //result printing
    cout<<mins<<endl;
    cout<<"Matrix after addition:"<<endl;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            cout.width(3);
            cout<<M_addition[i][j];
        }
        cout<<endl;
    };
    cout<<mins<<endl;
    cout<<mins<<endl;
    cout<<"Matrix after transposing:"<<endl;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            cout.width(3);
            cout<<M_Transpose[i][j];
        }
        cout<<endl;
    };
    cout<<mins<<endl;
    cout<<mins<<endl;
    cout<<"Matrix after multiplication:"<<endl;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            cout.width(3);
            cout<<M_multiplide[i][j];
        }
        cout<<endl;
    };
    cout<<mins<<endl;


    fd.close();
    fr.close();
    return 0;
}
