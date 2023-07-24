#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int maincode3_15()
{
	Mat img = imread("./Lenna.jpg");
	Mat roi(img, Rect(10, 10, 2, 2));
	imshow("Img", img);
	
	cout << roi.rows << endl << endl;
	cout << roi.cols << endl << endl;
	cout << roi << endl << endl;
	waitKey(0);
	return 0;
}