#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int maincode2_6()
{
	Mat img;
	img = imread("./Lenna.jpg", IMREAD_COLOR);
	if (img.empty()) cerr << "Image not found" << endl;
	
	//imshow("img", img);
	
	int x = 300;
	int y = 300;
	while (1)
	{
		int key = waitKey(100);
		if (key == 'q') break;
		else if (key == 'a') x -= 10;
		else if (key == 'w') y -= 10;
		else if (key == 'd') x += 10;
		else if (key == 's') y += 10;
		circle(img, Point(x, y), 200, Scalar(0, 255, 0), 5);
		imshow("Image", img);
	}
	return 0;
}