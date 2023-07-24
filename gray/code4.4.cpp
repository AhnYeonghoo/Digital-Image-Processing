#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void brighten(Mat& img, int value)
{
	for (int r = 0; r < img.rows; r++)
	{
		for (int c = 0; c < img.cols; c++)
		{
			img.at<uchar>(r, c) = saturate_cast<uchar>(img.at<uchar>(r, c) + value);
		}
	}
}

int maincode4_4()
{
	Mat img = imread("./Lenna.jpg", 0);
	
	brighten(img, 30);
	imshow("imge", img);
	waitKey(0);
	return 0;
}