#include<stdio.h>
#include<conio.h>
#define MAX 10

int Stack[MAX]={};
int Top=0;

int main()
{
    PUSH(10);
    PUSH(20);
    PUSH(30);
    PUSH(40);
    DisplayStack();
    CountElements();
    POP();
    DisplayStack();
    CountElements();
    getch();
    return 0;
}
void PUSH(int iNo)
{
    if(IsStackFull())
    {
        printf("Stack Is Already FULL !!!");
    }
    else
    {
        Stack[Top]=iNo;
        Top++;
    }
}
int IsStackFull()
{
    if(Top==MAX)
    {
        return 1;
    }
    return 0;
}
void DisplayStack()
{
    int i=Top-1;
    while(i>=0)
    {
        printf("\t| %d |\n",Stack[i]);
        i--;
    }
}
void POP()
{
    if(IsStackEmpty())
    {
        printf("Stack Is Already Empty !!!!");
    }
    else
    {
        printf("The Element %d Is POPED OUT\n\n",Stack[--Top]);
        Stack[Top]=0;
    }
}
int IsStackEmpty()
{
    if(Top==0)
    {
        return 1;
    }
    return 0;
}
void CountElements()
{
    int Cnt=1;

    while(Cnt<Top)
    {
        Cnt++;
    }
    printf("Count Of Elements In Stack Are %d \n\n",Cnt);
}
