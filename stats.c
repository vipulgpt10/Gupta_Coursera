/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Source code file for statistical Analysis of a given dataset
 *
 * This file contains a couple of functions that can analyze an array of unsigned
 * char data items and report analytics on the maximum, minimum, mean, and 
 * median of the data set. After analysis and sorting is done, the data is 
 * displayed to the screen in nicely formatted presentation.
 *
 * @author Vipul Gupta
 * @date 20 May 2017
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {


  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
    unsigned char dmean, dmedian, dmax, dmin;
  /* Statistics and Printing Functions Go Here */
    printf("Dataset: \n");
    print_array(test, sizeof(test));

    dmean = find_mean(test, sizeof(test));
    dmedian = find_median(test, sizeof(test));
    dmax = find_maximum(test, sizeof(test));
    dmin = find_minimum (test, sizeof(test));

    print_statistics(dmean, dmedian, dmax, dmin);
    
}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char d_mean, 
					  unsigned char d_median, 
					  unsigned char d_max, unsigned char d_min) {

	printf("--------------\n");
	printf(" Minimum = %d \n", d_min);
	printf(" Maximum = %d \n", d_max);
	printf(" Mean    = %d \n", d_mean);
	printf(" Median  = %d \n", d_median);
	printf("--------------\n");

}

void print_array(unsigned char* dset, unsigned int dsize) {

	int i = 0;
	for(i = 0; i < dsize; i++) {

		if(i!=0 && i%8 == 0)
			printf("\n");
		printf("%d \t", dset[i]);

	}
	printf("\n");

}

unsigned char find_median(unsigned char* dset, unsigned int dsize) {

	sort_array(dset, dsize);

	if(dsize%2 != 0)
		return dset[dsize/2];
	else
		return (((dset[(dsize/2)-1]) + (dset[(dsize/2)]))/2);

}

unsigned char find_mean(unsigned char* dset, unsigned int dsize) {

	int i = 0, sum = 0;
	for (i = 0; i < dsize; i++) {
		sum += dset[i];
	}

	return (sum/dsize);

}

unsigned char find_maximum(unsigned char* dset, unsigned int dsize) {

	sort_array( dset , dsize);
	return dset[0];

}

unsigned char find_minimum(unsigned char* dset, unsigned int dsize) {

	sort_array( dset, dsize);
	return dset[dsize - 1];

}

void sort_array(unsigned char* dset, unsigned int dsize) {

	int i = 0, j = 0, temp;
	for (i = 0; i < dsize; i++) {
		for ( j = 0; j < (dsize - i - 1); j++) {

			if(dset[j] < dset[j+1]) {
				temp = dset[j];
				dset[j] = dset[j+1];
				dset[j+1] = temp; 
			}
		}
	}

}














