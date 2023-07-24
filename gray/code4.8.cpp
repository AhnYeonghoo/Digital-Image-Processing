#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int maincode4_8()
{
	Mat src;
	src = imread("./Lenna.jpg", 0);
	imshow("원영상", src);
	Mat dst;
	
	src.convertTo(dst, CV_32F);
	
	dst.convertTo(src, CV_8UC1);
	imshow("변경된영상", src);
	
	waitKey(0);
	return 0;
}