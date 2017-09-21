//Created by Kris Mueller
//Created on 9/21/2017
//This function will ouput a random number between 1 and 100
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int random_num () 
{
int random_100 = 0;
srand (time(0));
random_100 = ((rand () % 100) + 1);
return random_100;
}

int main () 
{
cout << random_num() << endl;
return 0;
}