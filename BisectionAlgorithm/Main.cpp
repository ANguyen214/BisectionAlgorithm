/*
	Nguyen, Alexander

	February 16,2020

	CS G262 Discrete Structures 
	Project 1 Q27: Bisection Algorithm
*/

#include <iostream>
#include <math.h>

using namespace std;

//This is the bisection algorithm. 
double bisectAlgo(double targetVal, double beginInter, double endInter, double delta)
{
	double xVal = (beginInter + endInter) / 2;
	double funcX = pow(xVal, 5.3) + pow(3.5, xVal);
	
	while (abs(xVal - beginInter) >= delta)
	{
		if (funcX <= targetVal)
		{
			beginInter = xVal;
		}
		if (funcX >= targetVal)
		{
			endInter = xVal;
		}
		xVal = (beginInter + endInter) / 2;
		funcX = pow(xVal, 5.3) + pow(3.5, xVal);
		cout << "f(x) = " << funcX << endl;
	}
	cout << "The value of X is: " << xVal << endl;
	return xVal;
}

//Main function accepts parameters (my phone#, beginning interval(A), ending interval(B),
//and the delta/tolerance.
int main()
{
	bisectAlgo(7252938, 1, 1000, .001);
	
	bisectAlgo(7252938, 1, 1000, .01);

}

