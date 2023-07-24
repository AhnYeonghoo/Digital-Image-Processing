#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int maincode3_12()
{
	Mat a;
	a = imread("./Lenna.jpg", 1);
	Rect r(10, 10, 100, 100);
	Mat d = a(r);
	d = Scalar(0, 0, 0);
	imshow("a", a);
	waitKey(0);
	return 0;
}