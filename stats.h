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
 * @file stats.h
 * @brief Header file for statistical Analysis of a given dataset
 *
 * This file contains the declarations of the functions that can analyze an 
 * array of unsigned char data items and report analytics on the maximum, 
 * minimum, mean, and median of the data set.
 *
 * @author Vipul Gupta
 * @date 20 May 2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics of an array
 *
 * This function takes as inputs a unsigned character mean, a unsigned
 * character meadian value, a unisigned character maximum value and
 * a unsigned character minimum vaule. It prints these value to the screen.
 *
 * @param d_mean The mean
 * @param d_median The median value
 * @param d_max The maximum value
 * @param d_min The minimum value
 *
 */
void print_statistics(unsigned char d_mean, 
					  unsigned char d_median, 
					  unsigned char d_max, unsigned char d_min);

/**
 * @brief Prints the array to the screen
 *
 * This function takes as inputs a unsigned character pointer to an array
 * of dataset and an unsigned integer as the size of the array. It prints
 * the array passed to the function as a parameter on the screen.
 *
 * @param dset The unsigned char pointer to the array
 * @param dsize The size of the array
 *
 */
void print_array(unsigned char* dset, unsigned int dsize);

/**
 * @brief Finds the median value
 *
 * This function takes as inputs a unsigned character pointer to an array
 * of dataset and an unsigned integer as the size of the array. It will
 * return a unsigned character median value.
 *
 * @param dset The unsigned char pointer to the array
 * @param dsize The size of the array
 *
 * @return The median value
 */
unsigned char find_median(unsigned char* dset, unsigned int dsize);

/**
 * @brief Finds the mean
 *
 * This function takes as inputs a unsigned character pointer to an array
 * of dataset and an unsigned integer as the size of the array. It will
 * return a unsigned character mean.
 *
 * @param dset The unsigned char pointer to the array
 * @param dsize The size of the array
 *
 * @return The mean
 */
unsigned char find_mean(unsigned char* dset, unsigned int dsize);

/**
 * @brief Finds the maximum value
 *
 * This function takes as inputs a unsigned character pointer to an array
 * of dataset and an unsigned integer as the size of the array. It will
 * return a unsigned character maximum value.
 *
 * @param dset The unsigned char pointer to the array
 * @param dsize The size of the array
 *
 * @return The maximum value
 */
unsigned char find_maximum(unsigned char* dset, unsigned int dsize);

/**
 * @brief Finds the minimum value
 *
 * This function takes as inputs a unsigned character pointer to an array
 * of dataset and an unsigned integer as the size of the array. It will
 * return a unsigned character minimum value.
 *
 * @param dset The unsigned char pointer to the array
 * @param dsize The size of the array
 *
 * @return The minimum value
 */
unsigned char find_minimum(unsigned char* dset, unsigned int dsize);

/**
 * @brief Sorts the array from largest to smallest
 *
 * This function takes as inputs a unsigned character pointer to an array
 * of dataset and an unsigned integer as the size of the array. It will
 * sort the array from the largest to smallest. 
 *
 * @param dset The unsigned char pointer to the array
 * @param dsize The size of the array
 *
 */
void sort_array(unsigned char* dset, unsigned int dsize);


#endif /* __STATS_H__ */
