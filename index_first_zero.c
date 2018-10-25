
#include <stdio.h>
#include <stdlib.h>
#include "index_first_zero.h"


int index_first_zero(int sum_array[], int number_of_elements) 
{
        int first_zero = -1;
        for (int i = 0; i < number_of_elements; i++)
                if (sum_array[i] == 0)
                {
                first_zero = i;
                break; 
                 }
return first_zero;
}

