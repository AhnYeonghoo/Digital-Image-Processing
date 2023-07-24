#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int maincode3_11()
{
	Mat a = imread("./Lenna.jpg", IMREAD_COLOR);
	Mat b = a;
	imshow("window1", a);
	
	flip(b, b, 0);
	cout << "b¸¸ ¹Ý»ç½ÃÅ´" << endl;
	imshow("window2", a);
	waitKey(0);
	return 0;
}