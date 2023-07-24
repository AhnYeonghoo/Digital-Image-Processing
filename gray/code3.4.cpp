#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int maincde3_4()
{
	Mat mat(600, 800, CV_8UC3, Scalar(0, 255, 0));
	Mat m;
	m.create(3, 4, CV_8UC3);
	cout << m << endl;
	Mat e = Mat::eye(4, 4, CV_64F);
	Mat o = Mat::ones(2, 2, CV_32F);
	Mat z = Mat::zeros(3, 3, CV_8UC1);
	Mat r = Mat(3, 6, CV_8UC1);
	randu(r, Scalar::all(0), Scalar::all(255));
	cout << r << endl << endl;
	cout << e << endl << endl;
	cout << o << endl << endl;
	cout << z << endl << endl;

	Mat c = (Mat_<double>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
	cout << c << endl << endl;
	Mat rr(400, 600, CV_8UC3);
	randu(rr, Scalar::all(0), Scalar::all(255));
	imshow("RR", rr);
	imshow("img", mat);
	waitKey(0);
	return 0;
}