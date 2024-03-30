#include<stdio.h>
#include<stdlib.h>

int add(int *n1, int *n2) 
{
    return *n1 + *n2;
}

int subtract(int *n1, int *n2) 
{
    return *n1 - *n2;
}

int multiply(int *n1, int *n2)
{
    return *n1 * *n2;
}

int divide(int *n1, int *n2) 
{
    if (*n2 != 0)
        return *n1 / *n2;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int modulo(int *n1, int *n2) {
    return *n1 % *n2;
}

int main() {
    int choice;
    printf("Enter the operation:\n");
    printf("1) ADD\n2) SUBTRACT\n3) MULTIPLY\n4) DIVIDE\n5) MODULO\n");
    scanf("%d", &choice);
    
    int *ptr = (int*)malloc(sizeof(int));
    int *ptr2 = (int*)malloc(sizeof(int));
    
    if (ptr == NULL || ptr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit with error code
    }
    
    printf("Enter two numbers:\n");
    scanf("%d %d", ptr, ptr2);
    
    int (*fun)(int*, int*);
    
    switch(choice) {
        case 1:
            fun = &add;
            break;
        case 2:
            fun = &subtract;
            break;
        case 3:
            fun = &multiply;
            break;
        case 4:
            fun = &divide;
            break;
        case 5:
            fun = &modulo;
            break;
        default:
            printf("Invalid choice\n");
            return 1; // Exit with error code
    }
    
    printf("Result: %d\n", fun(ptr, ptr2));
    
    // Free allocated memory
    free(ptr);
    free(ptr2);
    
    return 0;
}
