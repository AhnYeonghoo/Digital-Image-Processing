#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int maincode4_7()
{
	double alpha = 1.0;
	int beta = 0;
	Mat image = imread("./Lenna.jpg");
	Mat oimage;
	cout << "���İ��� �Է��Ͻÿ�:[1.0-3.0]: "; cin >> alpha;
	cout << "��Ÿ���� �Է��Ͻÿ�:[0-100]: "; cin >> beta;
	
	oimage = image * alpha + beta;
	imshow("ori", image);
	imshow("New", oimage);
	waitKey(0);
	return 0;
}