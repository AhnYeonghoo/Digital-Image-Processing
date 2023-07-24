#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int maincode3_1()
{
	Mat img = imread("./Lenna.jpg");
	if (img.empty()) cerr << "Image Not found" << endl;
	imshow("img", img);
	
	cout << "���� ��: " << img.rows << endl;
	cout << "���� ��: " << img.cols << endl;
	cout << "����� ũ��: " << img.size() << endl;
	cout << "��ü ȭ�� ����: " << img.total() << endl;
	cout << "�� ȭ�� ũ��: " << img.elemSize() << endl;
	cout << "Ÿ��: " << img.type() << endl;
	cout << "ä��: " << img.channels() << endl;
	waitKey(0);
	return 0;
}