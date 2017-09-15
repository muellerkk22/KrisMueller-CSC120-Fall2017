//Created by Kris Mueller
//September 14, 2017
//This program uses health information to create a "Health Slip" for the user.
#include <iostream>
#include <string>

using namespace std;


struct Health_Slip{
    string user_name;
    double weight_in_pounds;
    double height_in_inches;
    double weight_in_kilograms;
    double height_in_meters;
    char gender;
    int age;
    double mifflin_calories;
    double bmr_calories;
    double bmi;
    double num_burgers;
};

int main ()
{
double weight_in_pounds;
double height_in_inches;
double weight_in_kilograms;135

double height_in_meters;
char gender;
int age;
double mifflin_calories;
double bmr_calories;
double bmi;
double num_burgers;
double burger_calories = 600;
string user_name;


Health_Slip     health_slip_1;



//Ask user for weight, height, age and gender

cout << "Please enter your first name: " << endl;
cin >> user_name;
health_slip_1.user_name = user_name;


cout << "Please enter your weight in pounds: " << endl;
cin >> weight_in_pounds;
health_slip_1.weight_in_pounds = weight_in_pounds;


cout << "Please enter you height in inches: " << endl;
cin >> height_in_inches;
health_slip_1.height_in_inches = height_in_inches;


cout << "Please enter your age in years: " << endl;
cin >> age;
health_slip_1.age = age;

cout << "Please enter your gender (m or f): " <<endl;
cin >> gender;
health_slip_1.gender = gender;

cout << gender;
// convert inches to meters
// convert pounds to kilograms

height_in_meters = height_in_inches * .025;
weight_in_kilograms = weight_in_pounds * 0.45;


//Mifflin St. Jeor for men:  10 x weight (kg) + 6.25 x height (cm) – 5 x age (y) + 5
//MIfflin St. Jeor for women: 10 x weight (kg) + 6.25 x height (cm) – 5 x age (y) – 161.
// BMR for Women: BMR = 655 + (9.6 x weight in kg) + (1.8 x height in cm) - (4.7 x age in years)
//BMR for Men: BMR = 66 + (13.7 x weight in kg) + (5 x height in cm) - (6.8 x age in years)

if (gender = 'm')
    {
    mifflin_calories = (10 * weight_in_kilograms) + (6.25 * height_in_meters * 100) - (5* age) + 5;
    bmr_calories = 655 + (9.6 * weight_in_kilograms) + (1.8 * height_in_meters * 100) - (4.7 * age);
    }
else {
     mifflin_calories = (10 * weight_in_kilograms) + (6.25 * height_in_meters * 100) - (5* age) -161;
     bmr_calories = 66 + (13.7 * weight_in_kilograms) + (5 * height_in_meters *100) - (6.8 * age);
     }

bmi = weight_in_kilograms / (height_in_meters * height_in_meters);

health_slip_1.bmi = bmi;


//Output a "health slip" with user name, age, height, BMI, Mifflin St. Jeor calories, Harris Benedict calories and number of food item to maintain weight

cout << "Your Health Slip" << endl;
cout << "User: " << health_slip_1.user_name << endl;
cout <<  "Age: " <<  health_slip_1.age << endl;
cout << "Height: " << health_slip_1.height_in_inches << endl;
cout << "BMI: " << health_slip_1.bmi << endl;
cout << "Mifflin St. Jeor calories: " << mifflin_calories << endl;
cout << "BMR calories: " << bmr_calories << endl;
cout << "Number of burgers to maintain weight: " << (num_burgers = (mifflin_calories / burger_calories)) << endl;

return 0;
}
