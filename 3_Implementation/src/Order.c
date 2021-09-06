#include "header.h"
#include "Initilization.h"

int Order_Item(top *t, top *l, float fc, int qty)
{
    Meals *p;
    p=t->start;
    while(p->Data!=fc)
    {
        p=p->next;
    }
    Add_Item(l, fc, p->Item_name, qty, (p->Amount*qty));
    return 0;
}
