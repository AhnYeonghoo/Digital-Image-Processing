#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int maincde3_14()
{
	Mat a = imread("./Lenna.jpg", 1);
	Mat b = imread("./Lenna.jpg", 1);
	Mat roi(a, Rect(a.cols - b.cols, a.rows - b.rows, b.cols-100, b.rows-100));
	b.copyTo(roi);
	imshow("result", a);
	waitKey(0);
	return 0;
}