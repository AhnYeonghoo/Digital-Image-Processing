#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int maincode4_11()
{
	Mat image = imread("./Lenna.jpg", 0);
	Mat dst;
	int threshold_value = 127;
	threshold(image, dst, threshold_value, 255, THRESH_BINARY);
	imshow("Ori", image);
	imshow("New", dst);
	waitKey();
	return 0;
}