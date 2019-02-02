/*
*  Programmer: Philip L. GeLinas
*  Class: CptS 121, Spring 2019; Lab Section 16
*  Programming Assignment 3
*  Date: February 1, 2019
*  Description: This program processes a file of student numerical records, performs various operations
*               on the statistical information, and prints the result to an output file.
*/

#include <stdio.h>
#include <math.h>

// Function prototypes
double read_double(FILE *infile);
int read_integer(FILE *infile);
double calculate_sum(double number1, double number2, double number3, double number4, double number5);
double calculate_mean(double sum, int number);
double calculate_deviation(double number, double mean);
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number);
double calculate_standard_deviation(double variance);
double find_max(double number1, double number2, double number3, double number4, double number5);
double find_min(double number1, double number2, double number3, double number4, double number5);
void print_double(FILE *outfile, double number);
