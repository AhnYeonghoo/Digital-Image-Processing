#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void sub(Mat img)
{
	img = Scalar(0, 0, 0);
}

int maincode3_10()
{
	Mat a;
	a = imread("./Lenna.jpg", IMREAD_COLOR);
	imshow("before", a);
	sub(a);
	imshow("after", a);
	waitKey(0);
	return 0;
}