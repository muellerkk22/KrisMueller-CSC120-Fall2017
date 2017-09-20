//Created by Kris Mueller
//Created 9/19/2017
//This program calculates wind chill from 2 different equations

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main () 
{
    
double temperature = 0;
double wind_velocity = 0;
double new_wind_chill = 0;
double old_wind_chill = 0;


//ask user for temperature and wind velocity

cout << "Please enter the temperature in Farenheit" << endl;
cin >>  temperature;

cout << "Please enter the wind velocity" << endl;
cin >> wind_velocity;

//calculate old style wind chill
old_wind_chill = 0.081 * (3.71 * sqrt(wind_velocity) + 5.81 - 0.25 * wind_velocity) * (temperature - 91.4) + 91.4;


//calculate new style wind chill
new_wind_chill = 35.74 + .6215 * temperature - 35.75 * pow (wind_velocity, 0.16) + .4275 * temperature * pow (wind_velocity, 0.16);


//Print out results
cout << "Wind Velocity\t" << "Old Style Wind Chill\t" << "New Style Wind Chill\t" << "Difference" << endl;
cout << wind_velocity << "\t\t" << old_wind_chill << "\t\t\t" << new_wind_chill << "\t\t\t" << abs(old_wind_chill - new_wind_chill) << endl;
    return 0;
    
}
