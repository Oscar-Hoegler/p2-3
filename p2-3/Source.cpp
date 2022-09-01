/*Oscar Hoegler, September 1st 2022, Labratory 2.3*/

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	double user_meters;
	cout << "What is your length in meters?";
	cin >> user_meters;
	double out_inches=user_meters* 39.3700787, out_feet=out_inches/12, out_miles=out_feet/5280;
	cout << endl << "Length in inches: " << out_inches << endl << "Length in feet: " << out_feet << endl << "Length in miles: " << out_miles;

	return 0;
}