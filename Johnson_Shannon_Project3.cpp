/* note on structure--
I failed to successfully input the functions for m to ft and ft to m conversion into the functions for area and volume.
The issue I kept encountering was that those functions include a cout, and when imbedded in the area and volume functions,
it would return the cout for the subfunctions. I'm still not sure how to solve that. Please advise.
Thanks in advance!
Shannon
*/

//English-Metric Converter
//Program converts:
//1) ft to M 
//2) M to ft 
//3) area in sqft given L & W in M
//4) volume in cubic M given L, W, H in ft

#include <iostream>
#include <cstring>
using namespace std;

//function declarations
int menu(int t);

int main()
{
	int choice;	
	menu(choice);
	
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	
	return 0;
}

//function definitions
//menu and selection return
int menu(int t)
{
	//sub-function declarations
	double feet2Meters(double y);
	double meters2Feet(double z);
	double area(double x, double y);
	double volume(double x, double y, double z);
	//definition
	#include <iostream>
	using namespace std;
	
	do
	{
		
	cout << "English-Metric Converter\n";
	cout << "	1) Convert from feet to meters\n";
	cout << "	2) Convert from meters to feet\n";
	cout << "	3) Compute area of a rectangle in square feet given length and width in meters\n";
	cout << "	4) Compute volume of a rectangular solid in cubic meters given length, width and height in feet\n";
	cout << "	5) Quit the program\n";
	cout << "Please enter a number (1-5) -> ";
		cin >> t;
		if(t == 1)
		{
		cout << "Please enter the value in feet -> "; 
		double ft;
		feet2Meters(ft);
		}
		else if(t == 2)
		{
		cout << "Please enter the value in meters -> ";
		double meters;
		meters2Feet(meters);
		}
		else if(t == 3)
		{
		cout << "Please enter length and width in meters -> ";
		double length, width;
		cin >> length >> width;
		area(length, width);
		}
		else if(t == 4)
		{
		cout << "Please enter length, width and height in feet -> ";
		double L, W, H;
		cin >> L >> W >> H;
		volume(L, W, H);
		}
		else if(t == 5)
		{
		cout << "Thanks for using English-Metric Converter. Goodbye.\n";
		}
		else if((t != 1) || (t != 2) || (t != 3) || (t != 4) || (t != 5))
		{
		cout << "Incorrect choice. Try again.\n";
		}
		
	}while (t != 5);
	
}
//Convert feet to meters
double feet2Meters(double y)
{
    cin >> y;
	double m = y*0.3048;
	cout << y << " feet is " << m << " meters.\n";
	cout << " \n";
}
//convert meters to feet
double meters2Feet(double z)
{
	cin >>z;
	double f = z/0.3048;
	cout << z << " meters is " << f << " feet.\n";
	cout << " \n";
}
//area of rectangle in sqft given length and width in meters
double area(double x, double y)
{
	x = x/0.3048;
	y = y/0.3048;
	double area = x*y;
	cout << "The area in square feet is " << area << endl;
	cout << " \n";
}
//volume of a rectangular solid in cubic meters given length, width and height in ft
double volume(double x, double y, double z)
{
	x = x*0.3048;
	y = y*0.3048;
	z = z*0.3048;
	double vol = x*y*z;
	cout << "The volume in cubic meters is " << vol << endl;
	cout << " \n";
}
