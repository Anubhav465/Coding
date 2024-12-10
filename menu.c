#include <stdio.h>

struct name_order_details
{
    int item;
    int order_quantity;
} obj[10];

void dashboard()
{
    printf("\t ========Music and Chai Cafe========\t \n");
    printf("1.press 1 to view the Menu Card\n");
    printf("2.press 2 to Order items\n");
    printf("3.press 3 to exit\n");
}

void menu()
{
    printf("Displaying the Menu Card:\n");
    printf("1.Veg Burger :120\n");
    printf("2.Chicken Burger :100\n");
    printf("3.Sandwich :99\n");
    printf("4.French Fries :50\n");
    printf("5.Chicken momo :100\n");
    printf("6.Veg pokora :80\n");
    printf("7.paneer Pakora :100\n");
    printf("8.Egg Roll :80\n");
    printf("9.Tea :10\n");
    printf("10.Coffee :20\n");
}

void menu_name(int num, int quantity)
{
    if (num == 1)
    {
        printf("%d Veg Burger :%d\n", quantity, quantity * 120);
    }
    else if (num == 2)
    {
        printf("%d Chicken Burger:%d\n", quantity, quantity * 100);
    }
    else if (num == 3)
    {
        printf("%d Sandwich:%d\n", quantity, quantity * 99);
    }
    else if (num == 4)
    {
        printf("%d French Fries : %d\n", quantity, quantity * 50);
    }
    else if (num == 5)
    {
        printf("%d Chicken momo : %d\n", quantity, quantity * 100);
    }
    else if (num == 6)
    {
        printf("%d Veg pokora : %d\n", quantity, quantity * 80);
    }
    else if (num == 7)
    {
        printf("%d Paneer Pakora : %d\n", quantity, quantity * 100);
    }
    else if (num == 8)
    {
        printf("%d Egg Roll : %d\n", quantity, quantity * 80);
    }
    else if (num == 9)
    {
        printf("%d Tea : %d\n", quantity, quantity * 10);
    }
    else if (num == 10)
    {
        printf("%d Coffee : %d\n", quantity, quantity * 20);
    }
    else
    {
        printf("Item number %d is not valid.\n", num);
    }
}
int main()
{
    int choice,total=0;
    char ch[3];
    while (1)
    {
        dashboard();
        printf("Enter your choice\t:");
        scanf("%d", &choice);
        if (choice == 3)
        {
            printf("Thankyou\n");
            printf("Visit again\n");
            break;
        }
        switch (choice)
        {

        case 1:
            menu();
            break;


        case 2:
        {
            int number;
            char name[100];
            printf("Enter your name\t:");
            getchar();
            gets(name);
            printf("Enter the number of Items\t:");
            scanf("%d", &number);

            for (int i = 0; i < number; i++)
            {
                printf("Enter the %d item number\t:", i + 1);
                scanf("%d", &obj[i].item);

                printf("Enter the %d item quantity\t:", i + 1);
                scanf("%d", &obj[i].order_quantity);
            }
            printf("order complete\n");
            printf("your order will be delevered soon\n");
            printf("To view your order press Y or N \n");
            getchar(); // To consume the newline left by previous scanf
            fgets(ch, sizeof(ch), stdin);
            if (ch[0] == 'Y' || ch[0] == 'y')
            {
                 for (int i = 0; i < number; i++)
                {
                    switch (obj[i].item)
                    {
                    case 1:
                        total += obj[i].order_quantity * 120;
                        break;
                    case 2:
                        total += obj[i].order_quantity * 100;
                        break;
                    case 3:
                        total += obj[i].order_quantity * 99;
                        break;
                    case 4:
                        total += obj[i].order_quantity * 50;
                        break;
                    case 5:
                        total += obj[i].order_quantity * 100;
                        break;
                    case 6:
                        total += obj[i].order_quantity * 80;
                        break;
                    case 7:
                        total += obj[i].order_quantity * 100;
                        break;
                    case 8:
                        total += obj[i].order_quantity * 80;
                        break;
                    case 9:
                        total += obj[i].order_quantity * 10;
                        break;
                    case 10:
                        total += obj[i].order_quantity * 20;
                        break;
                    default:
                        printf("Item number %d is not valid.\n", obj[i].item);
                        break;
                    }
                    menu_name(obj[i].item, obj[i].order_quantity);
                }
                printf("Total price: %d\n", total);
            }
            
            else if (ch[0] == 'N' || ch[0] == 'n')
            {
                printf("ok,thankyou for ordering\n");
                printf("your order will be delevered soon\n");
            }
            else
            {
                printf("Invalid choice\n");
            }

            break;
        }

        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}