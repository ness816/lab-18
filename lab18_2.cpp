#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2)
{
	double  x_distance = max(R1->x, R2->x) - min(R1->x + R1->w , R2->x + R2->w);
	double y_distance = min(R1->y, R2->y) - max(R1->y - R1->h , R2->y - R2->h);
	return  x_distance > 0 && y_distance > 0? 0:abs(x_distance)*abs(y_distance);



}
