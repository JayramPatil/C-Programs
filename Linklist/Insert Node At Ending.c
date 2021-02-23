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

    InsertLast(10,&Head);
    InsertLast(15,&Head);
    InsertLast(18,&Head);
    InsertLast(19,&Head);
    DisplayLL(Head);

    getch();
    return 0;
}
void InsertLast(int iNo,struct Node **First)
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
        struct Node *temp=*First;
        while(temp->Next != NULL)
        {
            temp=temp->Next;
        }
        temp->Next=NewNode;
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
