#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct Node
{
    int iNo;
    struct Node *Next;
};
int main(void)
{
    struct Node *Head=NULL;

    InsertFirst(10,&Head);
    InsertFirst(15,&Head);
    InsertFirst(18,&Head);
    InsertFirst(19,&Head);
    DisplayLL(Head);

    getch();
    return 0;
}
void InsertFirst(int iNo,struct Node **First)
{
    struct Node *NewNode=NULL;
    NewNode=(struct Node*)malloc(sizeof(struct Node));

    NewNode->iNo=iNo;
    NewNode->Next=NULL;

    if(*First==NULL)
    {
        *First=NewNode;
    }
    else
    {
        NewNode->Next=*First;
        *First=NewNode;
    }
}
void DisplayLL(struct Node*First)
{
    while(First!=NULL)
    {
        printf("|%d| -> ",First->iNo);
        First=First->Next;
    }
}









