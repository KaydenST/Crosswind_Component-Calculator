#include <iostream>
#include <cmath>
using namespace std;

int main () {
    string input = "";
    short int choice = 0;
    
    cout << endl << "This crosswind component calculator will determine the crosswind component acting upon your aircraft." << endl;
    
    if (true) {
          cout << "Press any key to continue: " << endl;
          getline (cin, input);
          if (choice != 0.0000001);
          {
                    goto Crosswind;
                    }
                    
Crosswind:
          
          float d = 0;
          float s = 0;
          
          while (true) {
          cout << endl << "Please enter how far the wind is off from your heading in degrees: ";
          cin >> d;
          cout << endl << "Please enter the speed of the wind in knots: ";
          cin >> s;
          float p = d + 20 ;
          float x = p / 100;
          float c = x * s;
          cout << endl << "The crosswind component is: " << c << " kts." << endl;
          }
}
}
