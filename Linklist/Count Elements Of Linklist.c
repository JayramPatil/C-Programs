#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct Node
{
    int iNo;
    struct Node *Next;
};
int main()
{
    struct Node *Head=NULL;
    int Cnt=0;

    InsertLast(10,&Head);
    InsertLast(15,&Head);
    InsertLast(18,&Head);
    InsertLast(19,&Head);

    Cnt=CountElement(Head);

    printf("%d ",Cnt);

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
int CountElement(struct Node *First)
{
    int cnt=0;

    while(First != NULL)
    {
        cnt++;
        First=First->Next;
    }

    return cnt;
}












