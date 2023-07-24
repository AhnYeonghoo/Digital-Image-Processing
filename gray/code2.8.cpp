#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

Mat image_code2_8;
bool drawing = false;

void drawCircle(int event, int x, int y, int, void* param)
{
	if (event == EVENT_LBUTTONDOWN)	drawing = true;
	else if (event == EVENT_MOUSEMOVE)
	{
		if (drawing == true) circle(image_code2_8, Point(x, y), 3, Scalar(0, 0, 255), 10);
	}
	else if (event == EVENT_LBUTTONUP) drawing = false;
	imshow("image", image_code2_8);
}

int maincode2_8()
{
	image_code2_8 = imread("./Lenna.jpg", IMREAD_COLOR);
	if (image_code2_8.empty()) cerr << "error " << endl;
	
	imshow("image", image_code2_8);
	setMouseCallback("image", drawCircle);
	waitKey(0);
	return 0;
}