/**
 * @file test_main.c
 * @author your name (sultanbepari2732000@gmail.com)
 * @brief test function
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Initilization.h"
#include "header.h"
#include "string.h"
#include "unity.h"

void setUp(){}
void tearDown(){}
top starter, odr;
float FOOD_CODE;
int qnty;
void test_Clear_Screen(void){
  		TEST_ASSERT_EQUAL(0,Clear_Screen());
}
// void test_console_color(void){
//   		TEST_ASSERT_EQUAL(0,console_color(26));
// }
void test_Add_Item(void){
    starter.start=NULL;
  		TEST_ASSERT_EQUAL(0, Add_Item(&starter, 1.01, "Spring Rolls", 1, 100));
  		TEST_ASSERT_EQUAL(0, Add_Item(&starter, 1.02, "Gobi Manchurian", 1, 100));
}
void test_Item_List(void){
  		TEST_ASSERT_EQUAL(0,Item_List(&starter));
}
void test_Order_Item(void){
    FOOD_CODE=1.01;
    qnty=2;
    odr.start=NULL;
    TEST_ASSERT_EQUAL(0,Order_Item(&starter, &odr, FOOD_CODE, qnty));
}
void test_Previous_Order(void){
  		TEST_ASSERT_EQUAL(0,Previous_Order(&odr));
}
void test_Total_Bill(void){
  		TEST_ASSERT_EQUAL(0,Total_Bill(&odr));
}

void main()
{

    UNITY_BEGIN();

    RUN_TEST(test_Add_Item);
    //RUN_TEST(test_console_color);
    RUN_TEST(test_Item_List);
    RUN_TEST(test_Previous_Order);
    RUN_TEST(test_Total_Bill);
    RUN_TEST(test_Order_Item);
    RUN_TEST(test_Clear_Screen);

    return UNITY_END();

    /*top starter, main_course, dessert, odr;
    starter.start=main_course.start=dessert.start=odr.start=NULL;
    float FOOD_CODE;
    int qnty;
    console_color(26);
    Add_Item(&starter, 1.01, "Spring Rolls", 1, 100);
    Add_Item(&starter, 1.02, "Gobi Manchurian", 1, 100);
    Add_Item(&starter, 1.03, "Momos", 1, 100);
    Add_Item(&starter, 1.04, "Nacho Chips", 1, 120);
    Add_Item(&starter, 1.05, "Aloo Cheese Croquettes", 1, 150);
    Add_Item(&starter, 1.06, "Chinese Chilli Potatoes", 1, 150);
    Add_Item(&starter, 1.07, "Tandoori Paneer Tikka", 1, 200);
    Add_Item(&starter, 1.08, "Mezze Platter", 1, 250);
    Add_Item(&starter, 1.09, "Hara Bhara Kebab", 1, 300);
    Add_Item(&starter, 1.10, "Sweet Corn", 1, 300);

    Add_Item(&main_course, 2.01, "Veg Biryani", 1, 200);
    Add_Item(&main_course, 2.02, "Kerala Chicken Curry", 1, 200);
    Add_Item(&main_course, 2.03, "Hydrabadi Biryani", 1, 250);
    Add_Item(&main_course, 2.04, "Dal Makhani", 1, 250);
    Add_Item(&main_course, 2.05, "Kaju Masala Curry", 1, 250);
    Add_Item(&main_course, 2.06, "Sabudana Khichadi", 1, 250);
    Add_Item(&main_course, 2.07, "Paneer Biryani", 1, 300);
    Add_Item(&main_course, 2.08, "Tawa Paneer", 1, 300);
    Add_Item(&main_course, 2.09, "Chicken Biryani", 1, 350);
    Add_Item(&main_course, 2.10, "Methi Matar Malai", 1, 350);

    Add_Item(&dessert, 3.01, "Cappucino", 1, 80);
    Add_Item(&dessert, 3.02, "Malai Ghevar", 1, 100);
    Add_Item(&dessert, 3.03, "Guab Jamun", 1, 150);
    Add_Item(&dessert, 3.04, "Gajar ka Halwa", 1, 150);
    Add_Item(&dessert, 3.05, "Kulfi", 1, 150);
    Add_Item(&dessert, 3.06, "Vanilla Ice Cream", 1, 150);
    Add_Item(&dessert, 3.07, "Exotica Falooda", 1, 200);
    Add_Item(&dessert, 3.08, "Phirni", 1, 200);
    Add_Item(&dessert, 3.09, "Kaju Ki Barfi", 1, 250);
    Add_Item(&dessert, 3.10, "Shahi Tukda", 1, 350);

    //login
    char username[20], password[20], username2[20], password2[20], c=' ', k=' ';
    int i=0, ch,chs;
    while(1)
    {
        Clear_Screen();
Main_Screen: printf("\n\nEnter Choice: 1. Login 2.New User 3.Exit\n");
        scanf("%d", &ch);
        if(ch==3)
            break;
    //register new user
        if(ch==2)
        {
            printf(" \n\n                  ENTER USERNAME:-");
            scanf("%s", &username2);
            printf(" \n\n                  ENTER PASSWORD:-");
            while(i<20)
            {
                password2[i]=getch();
                c=password2[i];
                if(c=='\r') break;
                else printf("*");
                i++;
            }
            password2[i]='\0';
            printf("\n\n            Registered Successfully!\n");
            Sleep(2000);
        }
        else
        {
            printf("\n\n1. Administration\n2. Customer\n3. Back to Main Menu\n");
            scanf("%d",&chs);
            if(chs==2){
                printf("\n  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  ");
            printf(" \n\n                  ENTER USERNAME:-");
            scanf("%s", &username);
            printf(" \n\n                  ENTER PASSWORD:-");
            c=' '; i=0;
            while(i<20)
            {
                password[i]=getch();
                c=password[i];
                if(c=='\r') break;
                else printf("*");
                i++;
            }
            password[i]='\0';
            //USERMENU
            if(strcmp(username,username2)==0&&strcmp(password,password2)==0)
            {
                printf("\n\n            LOGIN SUCCESFULL!");
                Sleep(2000);
                Clear_Screen();
                int i, ch;
      Main_Menu: printf("Enter choice: 1.View Menu 2.View Previous Order 3.Log Out\n");
                scanf("%d", &ch);
                if(ch==2)
                {
                    if(odr.start==NULL)
                    {
                        printf("Previous Order does not exist!\n");
                        Sleep(2000);
                        Clear_Screen();
                        goto Main_Menu;
                    }
                    else
                    {
                        Clear_Screen();
                        Previous_Order(&odr);
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                            goto Main_Menu;
                        }
                    }

                }
                else if(ch==1)
                {
             Order: printf("Enter Choice:\n");
                    printf("1.Snacks\n2.Main Course\n3.Dessert\n");
                    scanf("%d", &ch);
                    while(1){
                    switch(ch)
                    {
                        case 1: Item_List(&starter);
                                printf("\n");
                                printf("Enter Food Code:\n");
                                scanf("%f", &FOOD_CODE);
                                printf("Enter Quantity of Food:\n");
                                scanf("%d", &qnty);
                                Order_Item(&starter, &odr, FOOD_CODE, qnty);
                                Previous_Order(&odr);
                                break;
                        case 2: Item_List(&main_course);
                                printf("\n");
                                printf("Enter Food Code:\n");
                                scanf("%f", &FOOD_CODE);
                                printf("Enter Quantity of Food:\n");
                                scanf("%d", &qnty);
                                Order_Item(&main_course, &odr, FOOD_CODE, qnty);
                                Previous_Order(&odr);
                                break;
                        case 3: Item_List(&dessert);
                                printf("\n");
                                printf("Enter Food Code:\n");
                                scanf("%f", &FOOD_CODE);
                                printf("Enter Quantity of Food:\n");
                                scanf("%d", &qnty);
                                Order_Item(&dessert, &odr, FOOD_CODE, qnty);
                                Previous_Order(&odr);
                                break;
                        default: printf("Invalid Choice.\n");
                    }
        After_Order: printf("\n\n");
                    printf("\n\t\tEnter Choice: \n\t\t1.Hungry For More? \n\t\t2.View Order \n\t\t3.Confirm Order?\n");
                    scanf("%d", &ch);
                    if(ch==1)
                    {
                        Clear_Screen();
                        goto Order;
                    }
                    else if(ch==2)
                    {
                        Clear_Screen();
                        printf("Current Order:\n");
                        Previous_Order(&odr);
                        goto After_Order;
                    }
                    //billing
                    else if(ch==3)
                    {
                        Clear_Screen();
                        Previous_Order(&odr);
                        printf("\nTotal amount to pay: %0.2f\n", Total_Bill(&odr));
                        printf("\nEnjoy Your Meal!\n");
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                            Clear_Screen();
                            goto Main_Menu;
                        }
                    }
                }
                }
                else if(ch==3)
                {
                    Clear_Screen();
                    goto Main_Screen;
                }
                else
                    printf("\nInvalid Choice.\n");
            }
            }
            else if(chs==1){
                     printf("\n  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  ");
            printf(" \n\n                  ENTER USERNAME:-");
            scanf("%s", &username);
            printf(" \n\n                  ENTER PASSWORD:-");
            c=' '; i=0;
            while(i<20)
            {
                password[i]=getch();
                c=password[i];
                if(c=='\r') break;
                else printf("*");
                i++;
            }
            password[i]='\0';
                //Admin
            if(strcmp(username,"Admin")==0&&strcmp(password,"admin123")==0)
            {
                printf("\n\n            WELCOME Admin");
                Sleep(3000);
                Clear_Screen();
                int admn;
        Admin:  printf("\n\n            Enter Choice:\n");
                printf("            1. View Menu\n");
                printf("            2. Update Menu\n");
                printf("            3. View Recent Order\n");
                printf("            4. Log Out\n");
                scanf("%d", &admn);
                Clear_Screen();
                if(admn==4)
                    goto Main_Screen;
                switch(admn)
                {
                    case 1:Clear_Screen();
                        printf("\nSNACKS:\n");
                        Item_List(&starter);
                        Sleep(3000);
                        printf("\nMAIN COURSE:\n");
                        Item_List(&main_course);
                        Sleep(3000);
                        printf("\nDESSERT:\n");
                        Item_List(&dessert);
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                            goto Admin;
                        }
                        break;
                    case 3: //Sleep(3000);
                        Clear_Screen();
                        printf("Recent Order:\n");
                        Previous_Order(&odr);
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                            goto Admin;
                        }

                        break;
                    case 2:
                        Clear_Screen();
                        float food_code, food_price;
                        char food_name[50];
                        printf("UPDATE MENU\n");
                        printf("What do you want to update?\n");
                        printf("Enter Choice:\n");
                        printf("1.Snacks\n2.Main Course\n3.Dessert\n");
                        scanf("%d", &ch);
                        switch(ch)
                        {
                            case 1: printf("\nEnter Food Code:\n");
                                    scanf("%f", &food_code);
                                    printf("\nEnter Food name:\n");
                                    gets(food_name);
                                    printf("\nEnter price:\n");
                                    scanf("%f", &food_price);
                                    Add_Item(&starter, food_code, food_name, 1, food_price);
                                    printf("\nMENU UPDATED\n");
                                    Item_List(&starter);
                                    break;
                            case 2: printf("\nEnter Food Code:\n");
                                    scanf("%f", &food_code);
                                    printf("\nEnter Food name:\n");
                                    scanf("%s", &food_name);
                                    printf("\nEnter price:\n");
                                    scanf("%f", &food_price);
                                    Add_Item(&main_course, food_code, food_name, 1, food_price);
                                    printf("\nMENU UPDATED\n");
                                    Item_List(&main_course);
                                    break;
                            case 3: printf("\nEnter Food Code:\n");
                                    scanf("%f", &food_code);
                                    printf("\nEnter Food name:\n");
                                    scanf("%s", &food_name);
                                    printf("\nEnter price:\n");
                                    scanf("%f", &food_price);
                                    Add_Item(&dessert, food_code, food_name, 1, food_price);
                                    printf("\nMENU UPDATED\n");
                                    Item_List(&dessert);
                                    break;

                        }
                        goto Admin;
                        break;

                default:printf("\nInvalid Choice\n");
                }
            }
            else
            {
                printf("\n\n        INCORRECT USERNAME OR PASSWORD");
                Sleep(2000);
            }
            }

            else
            {
                goto Main_Screen;
            }
    }
}*/


}
