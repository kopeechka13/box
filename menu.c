#include <stdio.h>
#include <stdlib.h>
#include "index_first_zero.h" 
#include "index_last_zero.h"
#include "sum_between.h"
#include "sum_before_and_after.h"

#define SIZE_OF_ARRAY 100

int main()
{
        int sum_array[SIZE_OF_ARRAY];
        int number;
        char symbol;
        int number_of_elements = 0;
        scanf("%d%c", &number, &symbol);
        do {
                scanf("%d%c", &sum_array[number_of_elements], &symbol);
                number_of_elements++;
           }
        while(symbol!='\n');
        int first_zero = index_first_zero(sum_array, number_of_elements);
        int last_zero = index_last_zero(sum_array, number_of_elements);
        switch (number)
	{
        case (0):{
                printf("%d\n", first_zero);
                break;
                }
        case (1):{
                printf("%d\n", last_zero);
                break;
                }
        case (2):{
                printf("%d\n", sum_between(sum_array, first_zero, last_zero, number_of_elements));
                break;
                }
        case (3):{
                printf("%d\n", sum_before_and_after(sum_array, first_zero, last_zero, number_of_elements));
                break;
                }
        default: {
                printf("Данные некорректны\n");
                 }
        }
return 0;
}

