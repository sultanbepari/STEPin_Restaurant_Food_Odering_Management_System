#ifndef INITILIZATION_H_INCLUDED
#define INITILIZATION_H_INCLUDED

typedef struct Meals
{

	float Data;
	char Item_name[30];
	int quant;
	float Amount;
    struct Meals *next;

}Meals;
typedef struct top
{
    Meals *start;
}top;
# include <unistd.h>
#define sleep(x) Sleep(1000 * (x))

#endif // INITILIZATION_H_INCLUDED
