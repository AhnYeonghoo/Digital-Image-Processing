#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int maincode4_16()
{
	Mat src1 = imread("./Lenna.jpg");
	Mat src2 = imread("./Lenna.jpg");
	Mat dst;
	dst = src1 + src2;
	imshow("dst", dst);
	waitKey(0);

	return 0;
}