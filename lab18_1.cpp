#include <iostream>
#include <cmath>
using namespace std;

struct Rect
{
	double x, y, w, h ;
};

double overlap(Rect R1,Rect R2)
{
	double  x_distance = max(R1.x, R2.x) - min(R1.x + R1.w , R2.x + R2.w);
	double y_distance = min(R1.y, R2.y) - max(R1.y - R1.h , R2.y - R2.h);
	return  x_distance > 0 && y_distance > 0? 0:abs(x_distance*y_distance);
	// cout<<abs(x_distance*y_distance)<<endl;
	


	// int a = abs((R1.x + R1.w) - (R2.x + R2.w));
	// int b = abs((R1.y + R1.h) - (R2.y + R2.h));
	// int c = R1.w - a;
	// int d = R1.h - b;




	// return abs(c*d);





}

int main() {
Rect R1 = {1,1,5,5};
Rect R2 = {2,2,5,5};	
cout << overlap(R1,R2);		

}