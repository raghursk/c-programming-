// #include<stdio.h>

// int main() {
    // nth bit
//     int n, pos;
//     printf("<---set a Bit--->");
//     scanf("%d", &n);
//     printf("Enter the position:\n");
//     scanf("%d", &pos);

//     // Use bitwise OR to set the bit at the specified position
//     n = n | (1 << pos);

//     printf("%d", n);
//     return 0;
// }

// set bit ==================================================================================

//   int n=5;
//   int pos=2;// 2nd posstion to set a bit ,
  
//   n= n | (1<<pos);

//   printf("%d",n);
// }

//clear bit =================================================================================


//     int n,pos;
//     printf("enter the number:\n");
//     scanf("%d",&n);
//     printf("enter the posstion:\n");
//     scanf("%d",&pos);
//     int clear= ~(1 << pos);
//     int result=n & clear;
//     printf("%d",result);
// }


//nth bit clear =============================================================================


//   int n=10,pos=3;
//     int clear= ~(1 << pos);
//     int result=n & clear;
//     printf("%d",result);
// }

//get the value ============================================================================

//     int n, pos;
//     printf("<---Get a Bit--->");
//     printf("\nEnter a number: ");
//     scanf("%d", &n);
//     printf("Enter the position (0-indexed) of the bit to get: ");
//     scanf("%d", &pos);

//     // Create a mask with only the bit at the specified position set to 1
//     int mask = 1 << pos;

//     // Use bitwise AND to extract the value of the bit
//     int bit_value = (n & mask) >> pos;

//     printf("Value of the %dth bit: %d\n", pos, bit_value);
//     return 0;
// }



//togel the bit at the posstion=============================================================



// int n, pos;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     printf("Enter the position (0-indexed) of the bit to toggle: ");
//     scanf("%d", &pos);

//     // Create a mask with only the bit at the specified position set to 1
//     int toggle = 1 << pos;
//     // Use bitwise XOR to toggle the bit
//     int result = n ^ toggle;
//     printf("Number after toggling the %dth bit: %d\n", pos, result);
//     return 0;
// }




// find the number of binary 1 and numbers of ZEROS in bit  ==============================================



//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int count_ones = 0;
//     int count_zeros = 0;
//     int temp = n;
//     while (temp != 0) {
//         if (temp & 1)
//             count_ones++;
//         else
//             count_zeros++;
//         temp >>= 1; // Shift right by 1 to check next bit
//     }
//     printf("Number of 1s in binary representation: %d\n", count_ones);
//     printf("Number of 0s in binary representation: %d\n", count_zeros);

//     return 0;
// }

// Given two strings of lowercase English letters,  and , perform the following operations:
// Sum the lengths of A and .B
// Determine if A is lexicographically larger than B  (i.e.: does  come before  in the dictionary?).
// Capitalize the first letter in A and B  and print them on a single line, separated by a space.

// Given two strings of lowercase English letters,  and , perform the following operations:
// Sum the lengths of a and b

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char string1[10];
  
//     printf("Enter the first string: ");
//     scanf("%s", string1);
//       char string2[10];
//     printf("Enter the second string: ");
//     scanf("%s", string2);

//     int count[26] = {0}; // Array to count occurrences of 'a' to 'z'

//     // Count occurrences in the first string
//     for (int i = 0; string1[i] != '\0'; i++)
//     {
//         count[string1[i] - 'a']++;
//     }

//     // Count occurrences in the second string
//     for (int i = 0; string2[i] != '\0'; i++)
//     {
//         count[string2[i] - 'a']++;
//     }

//     int total_count = 0;
//     for (int j = 0; j < 26; j++)
//     {
//         if (count[j] > 0)
//         {
//             total_count += count[j];
//         }
//     }
//     printf("The total count of characters  in both strings: %d\n", total_count);
    
//     return 0;
// }


// Determine if A is lexicographically larger than B  (i.e.: does  come before  in the dictionary?).
    
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char string1[100];
//     printf("Enter the first string: ");
//     scanf("%s", string1);
    
//     char string2[100];
//     printf("Enter the second string: ");
//     scanf("%s", string2);
    
//     char string3[100];
//     printf("Enter the third string: ");
//     scanf("%s", string3);

//     int len1 = strlen(string1);
//     int len2 = strlen(string2);
//     int len3 = strlen(string3);
    
//     char *longest_string;

//     if (len1 >= len2 && len1 >= len3)
//         longest_string = string1;
//     else if (len2 >= len1 && len2 >= len3)
//         longest_string = string2;
//     else
//         longest_string = string3;

//     printf("The longest string is: %s\n", longest_string);
    
//     return 0;
// }

// Capitalize the first letter in A and B  and print them on a single line, separated by a space.


// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>

// int main()
// {
//     char string1[100];
//     printf("Enter the first string (A): ");
//     scanf("%s", string1);
    
//     char string2[100];
//     printf("Enter the second string (B): ");
//     scanf("%s", string2);

//     if (strlen(string1) > 0)
//         string1[0] = toupper(string1[0]);

    
//     if (strlen(string2) > 0)
//         string2[0] = toupper(string2[0]);

//     printf("%s %s\n", string1, string2);
    
//     return 0;
// }

//#include<stdio.h>
// #define n 6

// int main() {
//     FILE * file;
//     int Array[n];
//     int i, j;
//     file = fopen("number.txt","r");
//     if(file == NULL) {
//         printf("the File does not exist in the system.\n");
//         return 1;
//     }
//     else {
//         // Read integers from the file
//         for(i = 0; i < n; i++) {
//             if (fscanf(file, "%d", &Array[i]) != 1) {
//                 printf("Error reading from file.\n");
//                 fclose(file);
//                 return 1;
//             }
//         }
//         fclose(file); // Close the file after reading

//         // Sort the Array in ascending order
//         for(i = 0; i < n-1; i++) {
//             for(j = i+1; j < n; j++) {
//                 if(Array[i] > Array[j]) {
//                     int temp = Array[i];
//                     Array[i] = Array[j];
//                     Array[j] = temp;
//                 }
//             }
//         }

//         // Print the sorted Array
//         printf("Sorted numbers: ");
//         for(i = 0; i < n; i++) {
//             printf("%d ", Array[i]);
//         }
//         printf("\nData has been read from the file, sorted, and printed.\n");
//     }
//     return 0;
// }


// DMA (dynamic memory aloction)
// malloc 
// calloc 
// realloc
// free what daiganing pointer

//stoage class 
//satic keyword
 
 
//  dsa
 
//  delete the middel node 
// what is linkedlist









