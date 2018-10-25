#include <stdio.h>
#include <stdlib.h>
#include "sum_between.h"
#include "index_last_zero.h"
#include "index_first_zero.h"




int sum_between(int sum_array[], int number_of_elements)
{
        int sum = 0;
	int first_zero;
	int last_zero;
	first_zero = index_first_zero(sum_array, number_of_elements);
        last_zero = index_last_zero(sum_array, number_of_elements);
        for (int i = first_zero; i <= last_zero; i++)
        {
                sum += abs(sum_array[i]);
        }
return sum;
}

