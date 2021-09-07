#include "header.h"
#include "Initilization.h"
#include<string.h>
int Add_Item(top *t, float Data, char Item_name[25], int quant, float AMT)
{
    Meals *p, *q;
    p=(Meals *)malloc(sizeof(Meals));
    p->Data=Data;
    p->quant=quant;
    p->AMT=Amount;
    strcpy(p->Item_name, Item_name);
    p->next=NULL;
    if(t->start==NULL)
    {
        t->start=p;
    }
    else
    {
        q=t->start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
    }
    return 0;
}
