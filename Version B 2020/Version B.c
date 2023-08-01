#include <stdio.h>

int main(void)
{
    int room_opt, gust_no, no_days, tour_opt;
    char additional_tours;
    float total = 0.0;

    printf("Input Room Option : ");
    scanf("%d", &room_opt);

    if (room_opt < 1 || room_opt > 3)
    {
        printf("Invalid Room Option!\n");
        return -1;
    }

    printf("Number of guests : ");
    scanf("%d", &gust_no);

    if (gust_no <= 0)
    {
        printf("Invalid Number of Guests!\n");
        return -1;
    }

    printf("Number of Days : ");
    scanf("%d", &no_days);

    if (no_days <= 0)
    {
        printf("Invalid Number of Days!\n");
        return -1;
    }

    if (room_opt == 1 && gust_no <= 2)
    {
        total = 45000.00 * no_days;
    }
    else if (room_opt == 2 && gust_no <= 2)
    {
        total = 40000.00 * no_days;
    }
    else if (room_opt == 3 && gust_no <= 2)
    {
        total = 37500.00 * no_days;
    }
    else if (room_opt == 1 && gust_no <= 5)
    {
        total = 44000.00 * no_days;
    }
    else if (room_opt == 2 && gust_no <= 5)
    {
        total = 38000.00 * no_days;
    }
    else if (room_opt == 3 && gust_no <= 5)
    {
        total = 35000.00 * no_days;
    }
    else if (room_opt == 1 && gust_no >= 5)
    {
        total = 43000.00 * no_days;
    }
    else if (room_opt == 2 && gust_no >= 5)
    {
        total = 35000.00 * no_days;
    }
    else if (room_opt == 3 && gust_no >= 5)
    {
        total = 32000.00 * no_days;
    }

    total *= gust_no;

    printf("Do you need any additional tours (y/n) ? ");
    scanf(" %c", &additional_tours);

    while (additional_tours == 'y' || additional_tours == 'Y')
    {
        printf("Input your option : ");
        scanf("%d", &tour_opt);

        switch (tour_opt)
        {
        case 1:
            total += 3500.00*gust_no;
            break;
        case 2:
            total += 1000.00*gust_no;
            break;
        case 3:
            total += 1500.00*gust_no;
            break;
        case 4:
            total += 2000.00*gust_no;
            break;
        default:
            printf("Invalid Tour Option!\n");
            break;
        }

        printf("Do you need any additional tours (y/n) ? ");
        scanf(" %c", &additional_tours);
    }

    printf("Total Price : %.2f\n", total);

    return 0;
}
