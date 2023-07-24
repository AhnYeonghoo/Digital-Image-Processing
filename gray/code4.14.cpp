#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int maincode4_14()
{
	Mat img1 = imread("./Lenna.jpg", 0);
	imshow("Ori", img1);
	Mat table(1, 256, CV_8U);
	
	uchar* p = table.ptr();
	for (int i = 0; i < 256; i++)
		p[i] = (i / 100) * 100;
	
	Mat img2;
	LUT(img1, table, img2);
	
	imshow("New", img2);
	waitKey(0);
	return 0;
}