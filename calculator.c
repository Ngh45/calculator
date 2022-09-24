#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define red_Color "\x1b[31m"
#define green_Color "\x1b[32m"
#define yellow_Color "\x1b[33m"
#define blue_Color "\x1b[34m"
int main()
{
    int sInput;
    printf(red_Color "\t\t******Hi, this is an ordinary calculator******\n");
    printf(yellow_Color "1.Inetger Numbers calculation\n");
    printf(yellow_Color "2.Floating point Numbers calculation\n");
    printf(blue_Color "Choise=");
    scanf("%i", &sInput);
    switch (sInput)
    {
    case 1:
    {
        int num1, num2;
        int choose;
        int res = pow(num1, num2);
        printf(yellow_Color "1. Sumation\n");
        printf(yellow_Color "2. Substraction\n");
        printf(yellow_Color "3. Product\n");
        printf(yellow_Color "4. Quotient\n");
        printf(yellow_Color "5. X^Y\n");
        printf(yellow_Color "6. X!\n");
        printf(yellow_Color "7. logX\n");
        printf(yellow_Color "8. lnX\n");
        printf(yellow_Color "Your Choice=");
        scanf("%i", &choose);
        switch (choose)
        {
        case 1:
            printf(red_Color "!!You can only calculate Two Numbers!!\n");
            printf("Number1=");
            scanf("%i", &num1);
            printf("Number2=");
            scanf("%i", &num2);
            printf("sumation = %i", num1 + num2);
            break;
        case 2:
            printf(red_Color "!!You can only calculate Two Numbers!!\n");
            printf("Number1=");
            scanf("%i", &num1);
            printf("Number2=");
            scanf("%i", &num2);
            printf("substraction = %i", num1 - num2);
            break;
        case 3:
            printf(red_Color "!!You can only calculate Two Numbers!!\n");
            printf("Number1=");
            scanf("%i", &num1);
            printf("Number2=");
            scanf("%i", &num2);
            printf("product = %i", num1 * num2);
            break;
        case 4:
            printf(red_Color "!!You can only calculate Two Numbers!!\n");
            printf("Number1=");
            scanf("%i", &num1);
            printf("Number2=");
            scanf("%i", &num2);
            printf("quotien = %i", num1 / num2);
            break;
        case 5:
            printf(red_Color "!!You can only calculate Two Numbers!!\n");
            printf("Number1=");
            scanf("%i", &num1);
            printf("Number2=");
            scanf("%i", &num2);
            printf("X^Y = %i", res);
            break;
        case 6:
            printf("Number1=");
            scanf("%i", &num1);
            int i, fact = 1;
            for (i = 1; i <= num1; i++)
            {
                fact = fact * i;
            }
            printf("%i! = %i", num1, fact);
            break;
        case 7:
            printf("Number1=");
            scanf("%i", &num1);
            printf("ln%i = %.3f", num1, (float)log10(num1));
            break;
        case 8:
            printf("Number1=");
            scanf("%i", &num1);
            printf("log%i = %.3f", num1, (float)log(num1));
            ;
            break;
        default:
            printf(red_Color "You have entered wrong value");
            break;
        }
        break;
    }
    case 2:
    {
        float num3, num4;
        int choose1;
        printf("Number1=");
        scanf("%f", &num3);
        printf("Number2=");
        scanf("%f", &num4);
        printf(red_Color "1.Sumation\n");
        printf(red_Color "2.Substraction\n");
        printf(red_Color "3.Product\n");
        printf(red_Color "4.Quotient");
        scanf("%i", &choose1);
        switch (choose1)
        {
        case 1:
            printf("sumation = %.3f", num3 + num4);
            break;
        case 2:
            printf("substraction = %.3f", num3 - num4);
            break;
        case 3:
            printf("product = %.3f", num3 * num4);
            break;
        case 4:
            printf("quotien = %.3f", num3 / num4);
            break;
        default:
            printf(red_Color "You have entered wrong value");
            break;
        }
        break;
    }

    default:
        printf(red_Color "You have entered wrong value");
        break;
    }
    return 0;
}