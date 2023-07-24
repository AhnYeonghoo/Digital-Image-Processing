#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int maincode4_2()
{
	Mat img = imread("./Lenna.jpg", IMREAD_GRAYSCALE);
	imshow("Original", img);
	
	for (int r = 0; r < img.rows; r++)
	{
		uchar* p = img.ptr<uchar>(r);
		for (int c = 0; c < img.cols; c++)
		{
			p[c] = saturate_cast<uchar>(p[c] + 30);
		}
	}

	imshow("New", img);
	waitKey(0);
	return 0;
}