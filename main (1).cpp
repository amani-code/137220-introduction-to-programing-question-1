/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



 #include<iostream>
#include <cmath>
using namespace std;

int main()
{
	float cy_Radius, cy_Height, cy_sa, cy_Volume;
	
	cout << "\nPlease Enter the Radius of a Cylinder = ";
	cin >> cy_Radius;
	
	cout << "\nPlease Enter the Height of a Cylinder = ";
	cin >> cy_Height;
	
	cy_sa = 2 * M_PI * cy_Radius * (cy_Radius + cy_Height);
	cy_Volume = M_PI * cy_Radius * cy_Radius * cy_Height;
	
	
	cout << "\nThe Surface Area of a Cylinder           =  " << cy_sa;
	cout << "\nThe Volume of a Cylinder                 =  " << cy_Volume;
	
		
 	return 0;
}
