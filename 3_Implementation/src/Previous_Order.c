#include<stdio.h>
#include "header.h"
#include "Initilization.h"

int Previous_Order(top *t)
{
	printf("\n\t"); //console_color(240);
	printf("___________________________________________________________________");//console_color(26);
	printf("\n\t"); //console_color(240);
	printf("  Food Code       Name                       Quantity      Price   ");//console_color(26);
	printf("\n\t");// console_color(240);
	printf("-------------------------------------------------------------------");//console_color(26);

	Meals *p;
    p=t->start;
    while(p!= NULL)
    {
		printf("\n\t");
        printf("  %0.2f   |  %-25s      |    %2d      |  %0.2f   ",p->Data,p->Item_name, p->quant, p->Amount);
		printf("\n\t");
		printf("------------------------------------------------------------------");
        p=p->next;
    }
    return 0;
}
