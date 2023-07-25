#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int maincode5_1()
{
	Mat src = imread("./Lenna.jpg", IMREAD_GRAYSCALE);
	imshow("input", src);
	int histogram[256] = { 0 };

	for (int y = 0; y < src.rows; y++)
	{
		for (int x = 0; x < src.cols; x++)
		{
			histogram[(int)src.at<uchar>(y, x)]++;
		}
	}
	for (int count : histogram)
	{
		cout << count << ",";
	}
	cout << endl;

	return 0;
}