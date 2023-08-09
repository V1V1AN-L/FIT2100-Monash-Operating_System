/**
 * Write a C function that accepts an unsorted array of integers and the length of
the array as arguments. The function should then compute the average value
of all the numbers, and return the number closest to the average by returning a
pointer to that closest element. The function prototype is given as follows:
 */

# include "stdlib.h"

int* find_closest_to_average(int the_array[], int num_elements) {
    int sum = 0;
    for(int i=0; i< num_elements; i++){
        sum += the_array[i];
    }
    int average = sum/num_elements;
    int* closest_int = &the_array[0]; // initialise a pointer which firstly point to the first element
    int min_diff = abs(*closest_int-average); // take absolute difference

    for(int i=1; i< num_elements; i++){ //start from the second element
        if (the_array[i]-average < min_diff){
            closest_int = &the_array[i]; //pointer update
            min_diff = abs(*closest_int-average); //update min_diff
        }
    }
    return closest_int;
}