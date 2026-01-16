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

        //Read operations
        scanf(" %c", &op);

        //Read second operant
        if (op != 's' && op != 'c')
        {
            scanf("%f", &num2);
        }
        
        //Calculations
        switch (op)
        {
        case '+': case '-': case '*': case '/':
            basic_operation(num1, num2, op);
            break;

        case '^':
            exponential_power(num1, num2);
            break;

        case 's':
            sqaure_root(num1, op);
            break;

        // case 'c':
        //     sqaure_root(num1, op);
        //     break;
        
        default:
            printf("Error: Unknown operator '%c'\n", op);
            break;
        }
        
    } while (1);
    
    return 0;
}