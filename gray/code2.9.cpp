#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

Mat img_code2_9;
int red, green, blue;
int drawing = false;

void on_trackbar(int, void*) {}

void drawCircle2(int event, int x, int y, int, void* param)
{
	if (event == EVENT_LBUTTONDOWN)
	{
		drawing = true;
	}
	else if (event == EVENT_MOUSEMOVE)
	{
		if (drawing == true) circle(img_code2_9, Point(x, y), 3, Scalar(blue, green, red), 10);
	}
	else if (event == EVENT_LBUTTONUP)
	{
		drawing = false;
	}
	imshow("img", img_code2_9);
}

int maincode2_9()
{
	img_code2_9 = imread("./Lenna.jpg", IMREAD_COLOR);
	if (img_code2_9.empty()) cerr << "error" << endl;
	
	namedWindow("img", 1);
	imshow("img", img_code2_9);
	setMouseCallback("img", drawCircle2);
	createTrackbar("R", "img", &red, 255, on_trackbar);
	createTrackbar("G", "img", &green, 255, on_trackbar);
	createTrackbar("B", "img", &blue, 255, on_trackbar);
	waitKey(0);
	return 0;

}