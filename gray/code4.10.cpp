#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int maincode4_10()
{
	Mat src = imread("./Lenna.jpg", 0);
	imshow("원영상", src);
	
	Mat dst;
	dst = 255 - src;
	imshow("반전", dst);
	waitKey();
	return 0;
	
}