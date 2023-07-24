#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int maincode3_13()
{
	Mat m = Mat::eye(5, 10, CV_64F);
	Mat row = m.row(1);
	
	cout << row << endl << endl;
	return 0;
}