#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int maincode3_2()
{
	Mat img = imread("./Lenna.jpg");
	if (img.empty()) cerr << "img not" << endl;
	imshow("img", img);
	
	cout << img << endl;
	waitKey(0);
	return 0;
}