#include <iostream>
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
void selectionSort()
{
    int A[N]={4110, 1083, -4106, 4183, 4526, 1473, -359, -3772, 3668, -867, -2835, 828, 2639, -4746, -1257, -1802, 4937, -486, -2971, -1165, -3615, 2848, 2332, -408, 4428};
    cout<< "Selection Sort"<<endl;
    int i, j, min_idx, el=1;;
    for (i = 0; i < N-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < N; j++)
        if (A[j] < A[min_idx])
            min_idx = j;

        Swap(&A[min_idx], &A[i]);
        cout<<el<<". ";
        printArray(A);
        el++;
    }
    cout << "Sorted array: ";
    printArray(A);
}
void bubbleSort()
{
    int el=1;
    int A[N]={4110, 1083, -4106, 4183, 4526, 1473, -359, -3772, 3668, -867, -2835, 828, 2639, -4746, -1257, -1802, 4937, -486, -2971, -1165, -3615, 2848, 2332, -408, 4428};
    cout<<"Bubble sort"<<endl;
    for (int i=0; i<N-1; i++)
        for(int j=i; j<N; j++)
            if (A[i]>A[j])
                {
                    Swap(&A[i], &A[j]);
                    cout<<el<<". ";
                    printArray(A);
                    el++;
                };
    cout << "Sorted array: ";
    printArray(A);
    cout<<endl;
}
void sortWithAnotherArray()
{
    cout<<"Sorting with additional array"<<endl;
    int A[N]={4110, 1083, -4106, 4183, 4526, 1473, -359, -3772, 3668, -867, -2835, 828, 2639, -4746, -1257, -1802, 4937, -486, -2971, -1165, -3615, 2848, 2332, -408, 4428};
    int B[N];
    for (int i=0; i<N; i++)
    {
        int temp=0;
        for(int j=0; j<N; j++)
        {
           if (A[i]>A[j])
            temp++;
        }
        B[i]=temp+1;
    }
    int C[N]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int el=1;
    for(int i=0; i<N; i++)
    {
        C[B[i]-1]=A[i];
        cout<<el<<". "<<"Adding "<<A[i]<<" in "<< B[i]-1 <<" place: ";
        printArray(C);
        el++;

    }
    cout<<"Sorted Array: ";
    printArray(C);

}
void insertionSort()
{
    cout<<"Insertion sort"<<endl;
    int A[N]={4110, 1083, -4106, 4183, 4526, 1473, -359, -3772, 3668, -867, -2835, 828, 2639, -4746, -1257, -1802, 4937, -486, -2971, -1165, -3615, 2848, 2332, -408, 4428};
    int B[N]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int el=1;
    for (int i=0; i<N; i++)
    {
        B[i]=A[i];
        for(int j=0; j<i-1; j++)
        {
            for(int k=j+1; k<i; k++)
            {
                if(B[k]<B[j])
                    Swap(&B[k],&B[j]);
            }
        }
        cout<<el<<". ";
        printArray(B);
        el++;

    }
    cout<<"Sorted array: ";
    printArray(B);

}


int main()
{
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    insertionSort();
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    bubbleSort();
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    selectionSort();
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    sortWithAnotherArray();
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

    return 0;
}
