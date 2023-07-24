#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int maincode2_10()
{
	VideoCapture cap(0);
	if (!cap.isOpened()) cerr << "error" << endl;

	namedWindow("frame", 1);
	
	for (;;)
	{
		Mat frame;
		cap >> frame;
		imshow("frame", frame);
		if (waitKey(30) >= 0) break;
	}

	return 0;
}