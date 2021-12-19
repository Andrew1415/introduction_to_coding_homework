#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    FILE *input;
    input=fopen("Data.txt","r");
    fscanf(input,"%d",&n);
    int A[n];
    for (int i=0; i<n; i++)
        fscanf(input,"%d", &A[i]);
    fclose(input);
    FILE *output;
    output=fopen("Rezults.txt","w");

    int maxx=A[0];
    for(int i=0; i<n;i++)
    {
        if(maxx<A[i])
            maxx=A[i];
    };
    fprintf(output,"Max hight: %d \n", maxx);
    int minn=A[0];
    for(int i=0; i<n;i++)
    {
        if(minn>A[i])
            minn=A[i];
    };
    fprintf(output,"Min hight: %d \n", minn);
    int average=0;
    for (int i=0; i<n; i++)
    {
        average+=A[i];
    };
    average=average/n;
    fprintf(output,"Average hight: %d \n", average);


    fclose(output);
    return 0;
}
