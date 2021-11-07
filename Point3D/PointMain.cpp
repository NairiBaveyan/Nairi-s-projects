#include <iostream>
#include "Point3D.h"


int main()
{
	Point3D pt;
	Point3D pt1(pt);
	pt.set_all(11.5,24.3,38.6);
	pt1 = pt;
	Point3D pt2;
	pt2 = pt + pt1;
	pt.set_all(12.5,-32.4,-46.1);
	pt2.show_all();
	pt1 = pt2 - pt;
	pt1.show_all();
	std::cout<<pt1;
}
