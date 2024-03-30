#include <stdio.h>

double add(double num1, double num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    if (num2 == 0)
    {
        
        printf("Error: Division by zero\n");
        return -1; // Return an error code
    } else 
    {
        return num1 / num2;
    }
}

int modulo(int num1, int num2)
{
    if (num2 == 0) 
    {
        printf("Error: Modulo by zero\n");
        return -1; // Return an error code
    } else {
        return num1 % num2;
    }
}

int main() {
    double (*floatAdd)(double, double) = add;
    int (*arithmetic[])(int, int) = {sub, mul, modulo};
    double (*floatArithmetic[])(double, double) = {divide};
    double num1, num2;
    int operation;
    int run = 1;

    while (run) {
        printf("Enter the operation (1: Add, 2: Subtract, 3: Multiply, 4: Divide, 5: Modulo): ");
        scanf("%d", &operation);

        if (operation < 1 || operation > 5) 
        {
            printf("Invalid operation!\n");
            continue;
        }

        printf("Enter the numbers: ");
        scanf("%lf %lf", &num1, &num2);

        if (operation == 1)
        {
            printf("Result: %.2f\n", floatAdd(num1, num2));
        } else if (operation == 4)
        {
            printf("Result: %.2f\n", floatArithmetic[0](num1, num2));
        } else
        {
            printf("Result: %d\n", arithmetic[operation - 2]((int)num1, (int)num2));
        }
        printf("Do you want to continue the program? (1: Yes, 0: No): ");
        scanf("%d", &run);
    }

    return 0;
}