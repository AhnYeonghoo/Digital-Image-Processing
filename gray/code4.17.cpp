#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int maincode4_17()
{
	double alpha = 0.5, beta, input;
	Mat src1, src2, src3;
	cout << "알파값을 입력하시오: ";
	cin >> input;
	
	src1 = imread("./Lenna.jpg");
	src2 = imread("./Lenna.jpg");
	
	beta = (1.0 - alpha);
	addWeighted(src1, alpha, src2, beta, 0.0, src3);
	imshow("dst", src3);
	waitKey(0);
	return 0;
}