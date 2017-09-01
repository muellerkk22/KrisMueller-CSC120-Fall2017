#include <iostream>
using namespace std;

int main () {


int years_from_now;

int seconds_per_year = 60 * 60 * 24 * 365;

// the variables will be initialized to seconds per incident

//birthrate (around 8 sec per birth)
//death rate (around 12 sec per death)
//migrants into US (about one per 33 seconds)

int birth_rate = 8;

int death_rate = 12;

int migration_rate = 33;

//current population relayed to user

int current_population = 325777900;

cout << "Right now, the current population of the US is about 325,777,900" << endl;

//ask user for population estimate

cout << "How far into the future (in years) would you like to see the population of the US? (Please type in an integer)" << endl;

cin >> years_from_now;

//divide seconds_per_year by each of the variables, then times by the number of years input

int birthrate_per_year = seconds_per_year/birth_rate;

int death_rate_per_year = seconds_per_year/death_rate;

int migrants_per_year = seconds_per_year/migration_rate;

//calculate the future population

int future_population = current_population + years_from_now * (birthrate_per_year - (death_rate_per_year + migrants_per_year));

cout << "The estimated population of the US in " << 2017 + years_from_now << " is " << future_population << endl;

// The output from the code is the estimnated population for the US in the future
return 0;
}