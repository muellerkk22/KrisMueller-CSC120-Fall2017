#include <iostream>
using namespace std;

int main () {


cout << "Please enter you coins" << endl;

int coins = 0;

//Determine the total amount of money inserted and tell user

cin >> coins;

cout << "You have entered $" << coins/100 << "." << coins % 100 << " dollars" << endl;

//Determine how many of each denomination is present (most efficient amount of each) 

int total_25 =  coins / 25;

int leftover_25 = coins % 25;

int total_10 = leftover_25 / 10;

int leftover_10 = leftover_25 % 10;

int total_5 = leftover_10 / 5;

int leftover_5 = leftover_10 % 5;

int total_1 = leftover_5 / 1; 

cout << "The total counts are:\n" << total_25 << " quarters\n" << total_10 << " dimes\n" << total_5 << " nickels\n" << total_1 << " pennies" << endl;

//Calculate the fee and inform user of how much money is received after fee is taken

float fee_percentage = .109;

float fee = (coins * fee_percentage) / 100;

cout << "The fee for this transaction is 10.9% ($" << fee << " dollars)" << endl;

float user_total = (coins - fee) / 100; 

cout << "After the fee your total is $" << user_total << " dollars" << endl;


//Print out voucher to be redeemed for cash

cout << "Please take the printed voucher and redeem at the cashier's booth" << endl;

return 0;
    
}