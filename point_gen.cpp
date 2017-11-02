#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int R=5,r=1,a=4;
	double x,y;
	for(double t=0.0;t<M_PI*10;t+=0.01)
	{
		x=((R+r)*cos((r/R)*t)-a*cos((1+r/R)*t))+34.0212812;
		y=((R+r)*sin((r/R)*t)-a*sin((1+r/R)*t))-118.2893194;
		cout<<y<<","<<x<<"\n";
	}
	return 0;
}