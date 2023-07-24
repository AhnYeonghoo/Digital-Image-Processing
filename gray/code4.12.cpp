#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

Mat src, src_gray, dst;
int threshold_value = 0;
int threshold_type = 0;

void thresholdDemo(int, void*)
{
	threshold(src_gray, dst, threshold_value, 255, threshold_type);
	imshow("��� ����", dst);
}

int maincode4_12()
{
	src = imread("./Lenna.jpg");
	cvtColor(src, src_gray, COLOR_BGR2GRAY);
	namedWindow("��� ����", WINDOW_AUTOSIZE);
	
	createTrackbar("�Ӱ谪", "��� ����",
		&threshold_value, 255, thresholdDemo);
	thresholdDemo(0, 0);

	while (true)
	{
		int c;
		c = waitKey(20);
		if ((char)c == 27) break;
	}

	return 0;
}