#include "header.h"
#include "Initilization.h"


float Total_Bill(top *t)
{
    Meals *p;
    float a=0;
    p=t->start;
    while(p!=NULL)
    {
        a=a+p->Amount;
        p=p->next;
    }
    return a;
}
