#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

//Swap numbers

void swap_num (int &num_1 , int &num_2)
{
int copy_num_1 = num_1;
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

lbs_to_kg(double rand_lbs)
{
rand_lbs 
}

int main ()
{
int num_1;
int num_2;
int rand_num;


cout << "Please enter 2 numbers starting with the lowest" <<endl;
cin >> num_1 >> num_2;


swap_num (num_1 , num_2);


int rand_lbs = select_rand (num_1, num_2);



return 0;
}
