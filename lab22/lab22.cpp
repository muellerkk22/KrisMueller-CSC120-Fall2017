//Created by Kris Mueller
//Created on 9/21/2017
//This function will ouput a random number between 1 and 100
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

//Determine the random number and print it
int random_num () 
{
int random_100 = 0;
srand (time(0));
random_100 = ((rand () % 100) + 1);
cout << random_100 << endl;
return random_100;
}

//Print random number
int main () 
{
random_num();

return 0;
}