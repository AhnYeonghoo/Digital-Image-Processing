#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
using namespace cv;
using namespace std;

int maincode3_16()
{

	vector<Point> points;
	
	for (int i = 0; i < 3; i++)
		points.push_back(Point((float)i, (float)(i * 10)));
	cout << points << endl;
	return 0;
}