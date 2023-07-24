#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int maincode2_7()
{
	Mat img = imread("./Lenna.jpg", IMREAD_COLOR);
	if (img.empty()) cerr << "Image not found" << endl;
	
	while (1)
	{
		int key = waitKeyEx();
		cout << key << " ";
		if (key == 'q') break;
		else if (key == 2424832) img -= 50;
		else if (key == 2555904) img += 50;
		imshow("img", img);
	}
	return 0;
}