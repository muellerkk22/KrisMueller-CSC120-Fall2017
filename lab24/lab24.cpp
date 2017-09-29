#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void ask_for_num ()
{
cout << "Please input 2 numbers with the lowest number first" >> endl;

cin >> num_1 >> num_2;
}

//random number generator

//accepts kilograms and returns the pound equivalent
//1 kg equals 2.205 pounds

double kg_to_lbs (double kg) 
{
double lbs = kg * 2.205;

return lbs;
}


//accepts pounds and returns the kilogram equivalent
// 
double lbs_to_kg (double lbs)
{
double kg = lbs * 0.455;

return kg;
}

//Swap numbers

void swap_num (double num_1 , double num_2)
{
double copy_num_1 = num_1;
num_1 = num_2;
num_2 = copy_num_1;

return;
}


//Select random number between integers and prints value

int select_rand (int num_1 , int num_2)
{
srand (time(0));
int rand_num = rand () % (num_1 - num_2 +1) + num_2 ;

cout << "Your random number is " << rand_num << endl;
return rand_num;
}



int main ()
{
int num_1;
int num_2;
int rand_num;


// create function that asks for 2 numbers and assigns to num_1 and num_2
ask_for_num ();

cout << "Please enter 2 numbers starting with the lowest" <<endl;
cin >> num_1 >> num_2;


swap_num (num_1 , num_2);


int rand_lbs = select_rand (num_1, num_2);



return 0;
}

cout << "Please select 2 random numbers with the smaller number first" << endl;

cin >> num_1 >> num_2;

swap_num (num_1 , num_2);


}