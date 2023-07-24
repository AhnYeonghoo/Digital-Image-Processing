#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int maincode4_15()
{
	Mat src1, src2, src3;
	double gamma = 0.5;
	
	src1 = imread("./Lenna.jpg");
	if (src1.empty())
	{
		cerr << "Image Not Found" << endl;
		return -1;
	}
	
	Mat table(1, 256, CV_8U);
	uchar* p = table.ptr();
	for (int i = 0; i < 256; i++)
	{
		p[i] = saturate_cast<uchar> (pow(i / 255.0, gamma) * 255.0);
	}

	LUT(src1, table, src3);
	imshow("src1", src1);
	imshow("src2", src3);
	waitKey(0);
	return 0;
	
}