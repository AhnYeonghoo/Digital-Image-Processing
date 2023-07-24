#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int maintest()
{
	Mat src = imread("./Lenna.jpg", IMREAD_COLOR);
	if (src.empty()) cerr << "Image not found" << endl;
	imshow("src", src);
	
	Mat gray, edge, output;
	cvtColor(src, gray, COLOR_BGR2GRAY);
	
	flip(src, output, 1);
	imshow("Gray", gray);
	imwrite("./gray.jpg", gray);
	imwrite("./flip.jpg", output);
	imshow("output", output);
	waitKey(0);
	return 0;
	
}