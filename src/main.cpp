#include <iostream>
using namespace std;
int main() {
cout << "How many Vaccine shots have you had?\n"; //The terminal will say this
int vaccinationshot; 
cin >> vaccinationshot; //type in vaccination shot
bool vaccinationstatus = false; //sets the vaccinestatus to false
if(vaccinationshot >= 2) {
vaccinationstatus = true;   //if the vaccineshot count is equal or greater than 2 then it will turn vaccinestatus to true
}
if(vaccinationstatus == true) { 
    cout << "You are vaccinated!\n"; //if the vaccinestatus is TRUE then it will say "you are vaccinated"
}
    else {
        cout << "You are unvaccinated!\n"; //if the vaccinestatus is FALSE then it will say "You are unvaccinated"
    }
if(vaccinationshot < 0) { //If the vaccintation shot is smaller than 0 then it will say "Impossible!" as you cannot physically have negative shots.
    cout << "Impossible!\n";
    }
system("pause");


}
