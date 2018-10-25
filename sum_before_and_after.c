#include <stdio.h>
#include <stdlib.h>
#include "sum_before_and_after.h"
#include "index_first_zero.h"
#include "index_last_zero.h"





int sum_before_and_after(int sum_array[], int number_of_elements)
{
	int first_zero;
        int last_zero;
        int sum = 0;
	first_zero = index_first_zero(sum_array, number_of_elements);
	last_zero = index_last_zero(sum_array, number_of_elements);
        for (int i = 0; i <= first_zero; i++)
        {
                sum += abs(sum_array[i]);
        }
        for (int i = last_zero; i < number_of_elements; i++)
        {
                sum += abs(sum_array[i]);
        }
return sum;
}

