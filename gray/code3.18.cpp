#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int maincode3_18()
{

	Mat m = Mat::ones(4, 4, CV_32FC1);
	cout << m << endl;
	m = m.reshape(0, 2);
	cout << m << endl;
	
	Mat img1 = imread("./Lenna.jpg");
	Mat img2 = imread("./Lenna.jpg");
	imshow("original", img1);
	img1.push_back(img2);
	imshow("img2", img1);
	waitKey(0);
	return 0;
}