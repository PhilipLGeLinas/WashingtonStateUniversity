/*
*  Programmer: Philip L. GeLinas
*  Class: CptS 121, Spring 2019; Lab Section 16
*  Programming Assignment 4
*  Date: February 13, 2019
*  Description: This program delegates a game of craps, conversing with the user
*				and keeping track of relevant information, such as the score and cash.
*/

#include <stdio.h>
#include <math.h>

void print_game_rules(void);
double get_bank_balance(void);
double get_wager_amount(void);
int check_wager_amount(double wager, double balance);
int roll_die(void);
int calculate_sum_dice(int die1_value, int die2_value);
int is_win_loss_or_point(int sum_dice);
int is_point_loss_or_neither(int sum_dice, int point_value);
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract);
void chatter_messages(int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance);

// Others?
