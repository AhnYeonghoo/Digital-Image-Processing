#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int maincode4_3()
{
	Mat img = imread("./Lenna.jpg", IMREAD_GRAYSCALE);

	imshow("img", img);
	Mat oimage;
	img.convertTo(oimage, -1, 1, 30);
	imshow("New", oimage);
	waitKey(0);
	return 0;
}