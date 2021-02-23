#include<stdio.h>
#include<malloc.h>

/*void InsertFirst(struct Node **First,int Num);
void DisplayLL(struct Node *First);
void DeleteFirst(struct Node **First);
void InsertLast(struct Node **First,int Num);
void DeleteLast(struct Node **First);
void InsertAtPos(struct Node **First,int Num,int Pos);
void DeleteAtPos(struct Node **First,int Pos);
int CountElement(struct Node *First);*/

struct Node
{
    int iNo;
    struct Node *Next;
};
int main()
{
    int A=0;
    struct Node *Head=NULL;

    InsertFirst(&Head,11);
    InsertFirst(&Head,20);
    InsertLast(&Head,50);
    InsertFirst(&Head,45);
    InsertLast(&Head,100);
    InsertFirst(&Head,90);
    DisplayLL(Head);

    InsertAtPos(&Head,200,3);
    InsertAtPos(&Head,400,5);
    DisplayLL(Head);

    DeleteAtPos(&Head,2);
    DeleteAtPos(&Head,6);
    DisplayLL(Head);

    DeleteFirst(&Head);
    DeleteLast(&Head);
    DisplayLL(Head);

    return 0;
}
void InsertFirst(struct Node **First,int Num)
{
    struct Node *Newn=NULL;

    Newn=(struct Node*)malloc(sizeof(struct Node));

    Newn->iNo=Num;
    Newn->Next=NULL;

    if(NULL==*First)
    {
        *First=Newn;
    }
    else
    {
        Newn->Next=*First;
        *First=Newn;
    }
}
void DisplayLL(struct Node *First)
{
    printf("\n------------------------------------------------------------------------\n");
    while(First!=NULL)
    {
        printf("| %d |->",First->iNo);
        First=First->Next;
    }
    printf("\n------------------------------------------------------------------------\n");
}
void DeleteFirst(struct Node **First)
{
    if(NULL==*First)
    {
        printf("Linklist Is Already Empty");
    }
    else
    {
        struct Node *Temp=*First;
        *First=Temp->Next;
        free(Temp);
    }
}
void InsertLast(struct Node **First,int Num)
{
    struct Node *Newn=*First;

    Newn=(struct Node*)malloc(sizeof(struct Node));

    Newn->iNo=Num;
    Newn->Next=NULL;

    if(NULL==*First)
    {
        *First=Newn;
    }
    else
    {
        struct Node *Temp=*First;

        while(Temp->Next!=NULL)
        {
            Temp=Temp->Next;
        }
        Temp->Next=Newn;
    }
}
void DeleteLast(struct Node **First)
{
    if(NULL==*First)
    {
        printf("Linklist Is Already Empty");
    }
    else
    {
        struct Node *Temp=*First;

        while(Temp->Next->Next!=NULL)
        {
            Temp=Temp->Next;
        }
        free(Temp->Next);
        Temp->Next=NULL;
    }
}
void InsertAtPos(struct Node **First,int Num,int Pos)
{
    int Cnt=CountElement(*First);
    if(Pos<=0 || Pos>(Cnt+1))
    {
        printf("There Is No Position Available !");
        return;
    }
    if(Pos==1)
    {
        InsertFirst(First,Num);
    }
    else if(Pos==(Cnt+1))
    {
        InsertLast(First,Num);
    }
    else
    {
        struct Node *Newn=NULL;

        Newn=(struct Node*)malloc(sizeof(struct Node));

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
int CountElement(struct Node *First)
{
    int Cnt=1;
   if(First!=NULL)
   {
       while(First->Next!=NULL)
       {
           Cnt++;
           First=First->Next;
       }
   }
   return Cnt;
}
void DeleteAtPos(struct Node **First,int Pos)
{
    int Cnt=CountElement(*First);
    if(NULL==*First)
    {
        printf("Linklist Is Already Empty");
    }
    if(Pos<=0 || Pos>(Cnt))
    {
        printf("Invalid Position");
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
