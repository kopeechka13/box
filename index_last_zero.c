#include <stdio.h>
#include <stdlib.h>
#include "index_last_zero.h"


int index_last_zero(int sum_array[], int number_of_elements)
{
        int last_zero = -1;
        for (int i = 0; i < number_of_elements; i++)
                if (sum_array[i] == 0)
                last_zero = i;
return last_zero;
}

