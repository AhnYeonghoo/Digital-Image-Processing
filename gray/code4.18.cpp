#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int maincode4_18()
{
	Mat img1 = Mat::zeros(Size(400, 200), CV_8UC1);
	Mat img2 = Mat::zeros(Size(400, 200), CV_8UC1);
	
	Mat t1 = img1(Range(20, 180), Range(50, 200));
	t1 = 255;
	imshow("Img1", img1);
	Mat t2 = img2(Range(100, 150), Range(150, 350));
	t2 = 255;
	imshow("Img2", img2);
	
	Mat img3;
	bitwise_and(img1, img2, img3);
	imshow("ANd", img3);
	bitwise_or(img1, img2, img3);
	imshow("OR", img3);
	waitKey(0);
	return 0;
}