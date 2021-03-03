#include<stdio.h>
#include<stdlib.h>
#define MAX 3

float Calc_Per(int*, int**, int*);

int main()
{
    int i = 0, Total = 0, *ptr = NULL;

    ptr = (int*)malloc(MAX * sizeof(int));

    for(i = 0; i < MAX; i++)
    {
        printf("\nEnter %d Subject Marks => ",i+1);
        scanf("%d",&ptr[i]);
    }

    printf("\nTotal Marks Are => %d \nTotal Percentages Are => %f\n",Total,Calc_Per(&Total,&ptr,&i));

    return 0;
}
float Calc_Per(int* Total, int** Marks, int* i)
{
    while((*i)--)
    {
        *Total += **Marks;
        (*Marks)++;
    }
    return ((*Total*100)/300);
}
