#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    float num1, num2;
    char op, again;
    
    printf("\n=== SIMPLE CALCULATOR ===\n");
    printf("Operations: +  -  *  /  ^  s(sqrt)  c(cbrt)\n");
    printf("Examples:  3+4   |   2^5   |   25s  |   125c\n\n");

    do
    {
        printf("Enter your Expression:  ");

        //Read first number
        if (scanf("%f", &num1) != 1)
        {
            printf("Invalid Input!\n");
            printf("ERROR OCCURED");
            return 1;
        }

        //Read operants
        scanf(" %c", &op);

        // //

        // switch (op)
        // {
        // case constant expression:
        //     /* code */
        //     break;
        
        // default:
        //     break;
        // }
        
    } while (1);
    
    return 0;
}