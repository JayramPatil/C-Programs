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

    InsertAtFirst(&Head,10);
    InsertAtFirst(&Head,20);
    InsertAtFirst(&Head,30);
    InsertAtFirst(&Head,40);

    InsertAtLast(&Head,50);
    InsertAtLast(&Head,60);
    InsertAtLast(&Head,70);
    InsertAtLast(&Head,80);

    DisplayLL(Head);
    printf("\nCount Of Elements Is = %d",CountElement(Head));
    printf("\n\n");

    DeleteFirst(&Head);
    DeleteFirst(&Head);
    DeleteFirst(&Head);

    DisplayLL(Head);
    printf("\nCount Of Elements Is = %d",CountElement(Head));
    printf("\n\n");

    InsertAtPos(&Head,45,3);
    InsertAtPos(&Head,55,1);
    InsertAtPos(&Head,65,4);

    DisplayLL(Head);
    printf("\nCount Of Elements Is = %d",CountElement(Head));
    printf("\n\n");

    DeleteLast(&Head);
    DeleteLast(&Head);
    DeleteLast(&Head);

    DisplayLL(Head);
    printf("Count Of Elements Is = %d",CountElement(Head));
    printf("\n\n");

    DeleteAtPos(&Head,1);
    DeleteAtPos(&Head,5);
    DeleteAtPos(&Head,3);

    DisplayLL(Head);
    printf("Count Of Elements Is = %d",CountElement(Head));
    printf("\n\n");

    getch();
    return 0;
}
void InsertAtFirst(struct Node **First,int Num)
{
    struct Node *Newn=NULL;
    Newn=((struct Node *)malloc(sizeof(struct Node)));

    Newn->iNo=Num;
    Newn->Next=NULL;

    if(*First==NULL)
    {
        Newn->Next=Newn;
        *First=Newn;
    }
    else
    {
        struct Node *Temp=*First;
        while(Temp->Next!=*First)
        {
            Temp=Temp->Next;
        }
        Temp->Next=Newn;
        Newn->Next=*First;
        *First=Newn;
    }
}
void DisplayLL(struct Node *First)
{
    struct Node *Temp = First;

    if(First==NULL)
    {
        printf("Linklist Is Already Empty....\n\n");
    }
    else
    {
        do
        {
            printf("| %d | -> ",Temp->iNo);
            Temp=Temp->Next;

        }while(Temp->Next != First->Next);

        printf("\n\n");
    }
}
void InsertAtLast(struct Node **First,int Num)
{
    struct Node *Newn=NULL;
    Newn=((struct Node *)malloc(sizeof(struct Node)));

    Newn->iNo=Num;
    Newn->Next=NULL;

    if(*First==NULL)
    {
        *First=Newn;
        Newn->Next=*First;
    }
    else
    {
        struct Node *Temp=*First;

        while(Temp->Next!=*First)
        {
            Temp=Temp->Next;
        }
        Temp->Next=Newn;
        Newn->Next=*First;
    }
}
void DeleteFirst(struct Node **First)
{
    if(*First==NULL)
    {
        printf("Linklist Is Already Empty...\n\n");
    }
    else
    {
        struct Node *Temp = *First;

        while(Temp->Next!=*First)
        {
            Temp=Temp->Next;
        }
        *First=Temp->Next->Next;
        free(Temp->Next);
        Temp->Next=*First;
    }
}
void DeleteLast(struct Node **First)
{
    if(*First==NULL)
    {
        printf("Linklist Is Already Empty....\n\n");
    }
    else
    {
        struct Node *Temp=*First;

        while(Temp->Next->Next!=*First)
        {
            Temp=Temp->Next;
        }
        free(Temp->Next);
        Temp->Next=*First;
    }
}
int CountElement(struct Node *First)
{
    struct Node *Temp=First;
    int Cnt=0;
    if(First!=NULL)
    {
        do
        {
            Temp=Temp->Next;
            Cnt++;
        }while(Temp->Next!=First->Next);
    }
    return Cnt;
}
void InsertAtPos(struct Node **First,int Num,int Pos)
{
    int Cnt=CountElement(*First);

    if(Pos<=0 || Pos>(Cnt+1))
    {
        printf("There Is No Position Available...");
        return;
    }
    if(Pos==1)
    {
        InsertAtFirst(First,Num);
    }
    else if(Pos==Cnt)
    {
        InsertAtLast(First,Num);
    }
    else
    {
        struct Node *Newn=NULL;

        Newn=((struct Node*)malloc(sizeof(struct Node)));

        Newn->iNo=Num;
        Newn->Next=NULL;

        struct Node *Temp=*First;

        while(Pos>2)
        {
            Temp=Temp->Next;
            Pos--;
        }
        Newn->Next=Temp->Next;
        Temp->Next=Newn;

    }
}
void DeleteAtPos(struct Node **First,int Pos)
{
    int Cnt=CountElement(*First);
    if(NULL==*First)
    {
        printf("\nLnklist Is Already Empty :)\n\n");
    }
    else if(Pos<=0 || Pos>Cnt)
    {
        printf("\nGiven Position Is Not Valid....\n\n");
    }
    else if(Pos==1)
    {
        DeleteFirst(First);
    }
    else if(Pos==Cnt)
    {
        DeleteLast(First);
    }
    else
    {
        struct Node *Temp=*First;
        struct Node *Temp2=*First;

        while(Pos>2)
        {
            Temp=Temp->Next;
            Pos--;
        }
        Temp2=Temp->Next;
        Temp->Next=Temp2->Next;
        free(Temp2);
    }
}
