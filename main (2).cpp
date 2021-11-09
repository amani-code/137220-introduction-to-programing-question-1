 
#include <iostream>
using namespace std;
  
int main() {
    float fahrenheit, celsius;
  
    cout << "Enter the temperature in fahrenheit\n";
    cin >> fahrenheit;
     
    celsius = 5 * (fahrenheit - 32) / 9;
  
    cout << fahrenheit <<" Fahrenheit is equal to " << celsius <<" celsius";
      
    return 0;
}