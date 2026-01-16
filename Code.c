#include <stdio.h>
#include <math.h>
#include <ctype.h>

void basic_operation(float n1, float n2, char op);
void exponential_power(float n1, float n2);
void handle_root(float n1, char op);

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

        // Read first number
        if (scanf("%f", &num1) != 1)
        {
            printf("Invalid Input!\n");
            printf("ERROR OCCURED");
            return 1;
        }

        // Read operations
        scanf(" %c", &op);

        // Read second operant
        if (op != 's' && op != 'c')
        {
            scanf("%f", &num2);
        }

        // Calculations
        switch (op)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            basic_operation(num1, num2, op);
            break;

        case '^':
            exponential_power(num1, num2);
            break;

        // case 's':
        //     handle_root(num1, op);
        //     break;

        // case 'c':
        //     handle_root(num1, op);
        //     break;

        default:
            printf("Error: Unknown operator '%c'\n", op);
            break;
        }

        printf("\nDo you want to exit (y/n): ");
        scanf(" %c", &again);
        again = towlower(again);

        if (again != 'y' && again != 'n')
        {
            printf("Invalid Input! Exiting...\n");
            return 1;
        }

        printf("\n");

    } while (1);

    printf("Goodbye..!\n");
    
    printf("Goodbye..!\n");
    return 0;
}

void basic_operation(float n1, float n2, char op)
{
    if (op == '/' && n2 == 0)
    {
        printf("Error: Division by zero!");
        return;
    }

    float result;

    switch (op)
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    }

    printf("%g %c %g = %g", n1, op, n2, result);
}

void exponential_power(float n1, float n2)
{
    printf("%g ^ %g = %g", n1, n2, pow(n1, n2));
}