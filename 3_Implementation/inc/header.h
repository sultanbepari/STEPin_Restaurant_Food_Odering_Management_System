#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include "Initilization.h"

int Add_Item(top *t, float Data, char Item_name[25], int quant, float Amount);
int Item_List(top *t);
int Previous_Order(top *t);
float Total_Bill(top *t);
int Order_Item(top *t, top *l, float fc, int qty);
int Clear_Screen();

#endif // HEADER_H_INCLUDED
