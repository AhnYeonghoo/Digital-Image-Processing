#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int maincode4_7()
{
	double alpha = 1.0;
	int beta = 0;
	Mat image = imread("./Lenna.jpg");
	Mat oimage;
	cout << "알파값을 입력하시오:[1.0-3.0]: "; cin >> alpha;
	cout << "베타값을 입력하시오:[0-100]: "; cin >> beta;
	
	oimage = image * alpha + beta;
	imshow("ori", image);
	imshow("New", oimage);
	waitKey(0);
	return 0;
}