

#include <stdio.h>





file(){




    int num1, num2, num3, largest;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the largest number using if-else statements
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
           }else if (num2 >= num1 && num2 >= num3)
            {
        largest = num2;

    }     else 
    {
        largest = num3;
    }

    // Output the largest number
    printf("The largest number is: %d\n", largest);

 //   return 0;
}

