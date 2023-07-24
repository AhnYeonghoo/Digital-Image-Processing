#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

void reduceColorAt(Mat& input, uchar table[])
{
	for (int i = 0; i < input.rows; i++)
	{
		for (int j = 0; j < input.cols; j++)
		{
			input.at<uchar>(i, j) = table[input.at<uchar>(i, j)];
		}
	}
}

int maincode4_13()
{
	Mat img = imread("./Lenna.jpg", 0);
	imshow("Original", img);
	
	uchar table[256];
	for (int i = 0; i < 256; i++)
	{
		table[i] = (uchar)((i / 100) * 100);
	}
	reduceColorAt(img, table);
	imshow("New", img);
	waitKey(0);
	return 0;
}