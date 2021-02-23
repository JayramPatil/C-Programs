#include<stdio.h>

typedef struct
{
    int Data;
    struct NODE* Next;
}NODE;

int main()
{
    NODE* Head = NULL;

    Insert_Last(&Head,11);
    Insert_Last(&Head,22);
    Insert_Last(&Head,33);
    Insert_Last(&Head,44);
    Insert_Last(&Head,55);
    Insert_Last(&Head,101);
    Insert_Last(&Head,121);
    Insert_Last(&Head,151);
    Insert_Last(&Head,201);
    Insert_Last(&Head,221);
    Display_LL(Head);
    Find_LL_Element_From_Last(Head,10);
    Find_LL_Element_From_Last(Head,11);
    Find_LL_Element_From_Last(Head,5);
    return 0;
}
void Insert_Last(NODE** First, int Data)
{
    NODE* Newn = NULL;

    Newn = (NODE*)malloc(sizeof(NODE));

    Newn->Data=Data;
    Newn->Next=NULL;

    if(*First == NULL)
    {
        *First = Newn;
    }
    else
    {
        NODE* Temp = *First;

        while(Temp->Next != NULL)
        {
            Temp = Temp->Next;
        }
        Temp->Next = Newn;
    }
}
void Display_LL(NODE* First)
{
    if(NULL == First)
    {
        printf("\n LL is Already Empty!!!");
        return;
    }
    printf("\n Elements in LL are below => \n");

    while(First  !=  NULL)
    {
        printf(" | %d | -> ",First->Data);
        First = First ->Next;
    }
}
int Find_LL_Element_From_Last(NODE* First, int Pos)
{
    static int i=0;

    if(First == NULL)
    {
        if(--i < Pos)
        {
            printf("\n\nINVALID POSITION");
        }
        return 1;
    }
    i++;

    i = Find_LL_Element_From_Last(First->Next,Pos);

    if(i == Pos)
    {
        printf("\n\n %d ",First->Data);
    }
    return ++i;
}
