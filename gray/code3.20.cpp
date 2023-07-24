#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int mx1, my1, mx2, my2;
bool cropping = false;
Mat img, roi;

void onMouse2(int event, int x, int y, int flags, void* param)
{
	if (event == EVENT_LBUTTONDOWN)
	{
		mx1 = x;
		my1 = y;
		cropping = true;

	}
	else if (event == EVENT_LBUTTONUP)
	{
		mx2 = x;
		my2 = y;
		cropping = false;
		rectangle(img, Rect(mx1, my1, mx2 - mx1, my2 - my1), Scalar(0, 255, 0), 2);
		imshow("image", img);
	}
	else if (event == EVENT_RBUTTONDOWN)
	{
		Mat new_image = img.clone();
		imshow("image", new_image);
		
	}
}

int maincode3_20()
{
	img = imread("./Lenna.jpg");
	imshow("image", img);
	
	Mat clone = img.clone();
	setMouseCallback("image", onMouse2);
	
	while (1)
	{
		int key = waitKey(100);
		if (key == 'q') break;
		else if (key == 'c')
		{
			roi = clone(Rect(mx1, my1, mx2 - mx1, my2 - my1));
			imwrite("./result.jpg", roi);
		}
	}
	return 0;
}