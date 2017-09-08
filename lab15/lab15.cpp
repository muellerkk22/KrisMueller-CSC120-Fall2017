#include <iostream>
#include <string>
using namespace std;

int main () {

string  noun_1 = "";
string verb_1 = "";
string verb_2 = "";
string noun_2 = "";
string noun_3 = "";
string verb_3 = "";

cout << "Please enter a noun" << endl;
cin >> noun_1;
cout << "Please enter a verb " << endl;
cin >> verb_1;
cout << "Please enter a verb " << endl;
cin >> verb_2;
cout << "Please enter a noun " << endl;
cin >> noun_2;
cout << "Please enter a noun" << endl;
cin >> noun_3;
cout << "Please enter a verb" << endl;
cin >> verb_3;


cout << "As Polly was walking down the street she saw a " << noun_1 << ". After it " << verb_1 << " for 48 hours it fell asleep and she could now " << verb_2 << endl;
cout << " without worry.  Polly also decided it was time to eat as she was hungry for " << noun_2 << ". After dinner she headed home where she could listen to " << noun_3 << " and " << verb_3 << " the rest of the night." << endl;

return 0;

}
