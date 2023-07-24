#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int maincode3_17()
{
	Mat loaded_image = imread("./Lenna.jpg", IMREAD_COLOR);
	imshow("Original image", loaded_image);
	
	resize(loaded_image, loaded_image, Size(100, 100));
	imshow("New Image", loaded_image);
	waitKey(0);
	return 0;
}