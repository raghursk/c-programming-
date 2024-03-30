// ******************************Engineering calculator ARRAY FUNCTIONPOINTER***************************//
#include<stdio.h>
#include<math.h>
#define n 100

int add(int a, int b)//+
{
return a + b;
}

int sub(int a, int b)//-
{
return a - b;
}

int mul(int a, int b)//*
{
return a * b;
}

int division(int a, int b)//  \
{
if (b != 0)
return a / b;
else {
printf("Error: Division by zero!\n");
return 0; 
}
}

int modlo(int a, int b) //%
{
    if (b != 0)
        return a % b;
    else {
        printf("Error: Modulo by zero!\n");
        return 0; 
    }
}

int main() 
    {
    int array[n];
  
    for(int i = 0; i < n; i++) 
    {
        array[i] = i; // refrence parpos
    }
    //arrry of FUNCTIONPOINTER ..
    int (*arithmetic[])(int, int) = { add, sub, mul, division, modlo };//its str from 1,2,3,4,5
    int operation, a, b, result;
    
    printf("1) add\n2) sub\n3) mul\n4) div\n5) modlo\n");
    printf("Choose your operation: ");
    scanf("%d", &operation);//1)add 2)sub 3)mul 4)div 5)modlo
    
    int run;// continue for 1 exit for 0
    do {
        printf("Enter two numbers: "); //num1 //num2
        scanf("%d %d", &a, &b);
        if(operation >= 1 && operation <= 5) // operation + to %
        {
            result = arithmetic[operation - 1](a, b);// array is srt from 0 that tack a  -1
            printf("Result: %d\n", result);//result
        }
        else {
            printf("Invalid operation choice!\n");// error
        }
        printf("Do you want to run the program again? (1 for continue, 0 for exit): ");
        scanf("%d", &run);
   } while(run);

    return 0;
}
