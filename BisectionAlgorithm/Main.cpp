/*
	Nguyen, Alexander

	February 16,2020

	CS G262 Discrete Structures 
	Project 1 Q27: Bisection Algorithm
*/

#include <iostream>
#include <math.h>

using namespace std;

double bisectAlgo(double targetVal, double beginInter, double endInter, double delta)
{
	double xVal = (beginInter + endInter) / 2;
	double funcX = pow(xVal, 3) + pow(2, xVal);
	
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
		cout << "our xVal is: " << xVal << endl;
		xVal = (beginInter + endInter) / 2;
	}
	cout << "The value of X is: " << xVal << endl;
	return xVal;
}

int main()
{
	bisectAlgo(7252938, 0, 500, .001);
	
	bisectAlgo(7252938, 0, 50, .01);

}

