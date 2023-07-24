#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int maincode4_19()
{

	cv::Mat img1, mask;
	
	img1 = cv::imread("./Lenna.jpg", IMREAD_COLOR);
	mask = imread("./Lenna.jpg");
	
	Mat src3 = img1.clone();
	imshow("img1", img1);
	imshow("mask", mask);
	
	bitwise_and(img1, mask, src3);
	imshow("src3", src3);
	waitKey(0);
	return 0;
}