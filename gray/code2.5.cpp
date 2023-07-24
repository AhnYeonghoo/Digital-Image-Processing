#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void onMouse(int event, int x, int y, int flags, void* param)
{
	if (event == EVENT_LBUTTONDOWN)
	{
		Mat& img = *(Mat*)(param);
		circle(img, Point(x, y), 200, Scalar(0, 255, 0), 10);
		putText(img, "I found a dog!", Point(x, y + 200), FONT_HERSHEY_PLAIN, 2.0, 255, 2);
		imshow("src", img);
	}
	else if (event == EVENT_RBUTTONDOWN) {}
	else if (event == EVENT_MBUTTONDOWN) {}
	else if (event == EVENT_MOUSEMOVE) {}
}

int maincode2_5()
{
	Mat src = imread("./Lenna.jpg", IMREAD_COLOR);
	if (src.empty()) cerr << "Image not found" << endl;

	imshow("src", src);
	
	setMouseCallback("src", onMouse, &src);
	waitKey(0);
	return 0;
}