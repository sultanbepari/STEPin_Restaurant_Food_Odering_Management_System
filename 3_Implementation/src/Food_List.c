#include<stdio.h>
#include "header.h"
#include "Initilization.h"

int Item_List(top *t)
{

// 	printf("\n\t"); //console_color(240);
// 	printf("_______________________________________________________");//console_color(26);
// 	printf("\n\t");// console_color(240);
// 	printf("  Food Code          Name                Price         ");//console_color(26);
// 	printf("\n\t"); //console_color(240);
// 	printf("-------------------------------------------------------");//console_color(26);

	Meals *p;
    p=t->start;
    while(p!= NULL)
    {
//         printf("\n\t");
//         printf("  %0.2f   |  %-25s     |    %0.2f   ",p->Data,p->Item_name,p->Amount);
// 		//console_color(26);
// 		printf("\n\t");
//         printf("-------------------------------------------------------");
        p=p->next;
    }
    return 0;
}
