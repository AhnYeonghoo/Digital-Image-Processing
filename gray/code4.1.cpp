#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int maincode4_1()
{
	Mat img = imread("./Lenna.jpg", IMREAD_GRAYSCALE);
	imshow("Original", img);
	
	for (int r = 0; r < img.rows; r++)
	{
		for (int c = 0; c < img.cols; c++)
		{
			img.at<uchar>(r, c) = img.at<uchar>(r, c) + 30;
		}
	}

	imshow("NEw", img);
	waitKey(0);
	return 0;

}