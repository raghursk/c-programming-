#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    int n,i,j;
    while(1)
    {
        printf("\nEnter a number: ");
        scanf("%d",&n);
        srand(time(NULL));
        for(i=0;i<n;i++)
        {
            int random_number = (rand()%2);
            switch (random_number)
            {
                case 0:
                        printf("*");
                    break;
                case 1:
                        printf("* ");
                        printf("\n");
                    break;
            }
        }
    }
}