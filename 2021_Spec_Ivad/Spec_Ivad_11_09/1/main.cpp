#include <iostream>
#include <fstream>
#define N (25)
using namespace std;

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int A[])
{
    int i;
    for (i=0; i < N; i++)
    {
        cout.width(6);
        cout << A[i];
    }

    cout << endl;

}
int binarySearch(int A[], int temp, int minn, int maxx)
{
    if(maxx<=minn)
        return (temp>A[minn])?(minn+1):minn;
    int middle=(minn+maxx)/2;
    if(temp==A[middle])
        return middle+1;
    if(temp>A[middle])
        return binarySearch(A,temp,middle+1,maxx);
    return binarySearch(A,temp,minn,middle-1);

}
void insertionSort()
{
    cout<<"Insertion sort with binary search"<<endl;
    int B[N]={4110, 1083, -4106, 4183, 4526, 1473, -359, -3772, 3668, -867, -2835, 828, 2639, -4746, -1257, -1802, 4937, -486, -2971, -1165, -3615, 2848, 2332, -408, 4428};
    int A[N]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int el=1;
    for (int i=0; i<N; i++)
    {
        A[i]=B[i];
        int j=i-1;
        int temp=A[i];
        int place=binarySearch(A,temp,0,j);
        while(j>=place)
        {
            A[j+1]=A[j];
            j--;
        };
        A[j+1]=temp;
        cout<<el<<". ";
        printArray(A);
        el++;


    }
    cout<<"Sorted array: ";
    printArray(A);

}
void shakerSort()
{
    int A[N]={4110, 1083, -4106, 4183, 4526, 1473, -359, -3772, 3668, -867, -2835, 828, 2639, -4746, -1257, -1802, 4937, -486, -2971, -1165, -3615, 2848, 2332, -408, 4428};
    int i, j, k, m=N, el=1;;
       for(i = 0; i < m; i++)
        {
            for(j = i+1; j < m; j++)
            {
                if(A[j] < A[j-1])
                    Swap(&A[j], &A[j-1]);
            }
            m--;
            for(k = m-1; k > i; k--)
            {
                if(A[k] < A[k-1])
                Swap(&A[k], &A[k-1]);
            }
            cout<<el<<". ";
            printArray(A);
            el++;
       }
       cout<<"Sorted array: ";
       printArray(A);
}

int main()
{
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    insertionSort();
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    shakerSort();
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    return 0;
}
