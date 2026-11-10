#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// 행렬 정보 참조


void MatOp5()
{
	Mat img1 = imread("lenna.bmp");

	cout << "Width: " << img1.cols << endl; // width
	cout << "Height: " << img1.rows << endl;// length
	cout << "Channels: " << img1.channels() << endl; // channel

	if (img1.type() == CV_8UC1) // channel = 1(gray)
		cout << "img1 is a grayscale image." << endl;
	else if (img1.type() == CV_8UC3) // channel = 3(Color)
		cout << "img1 is a truecolor image." << endl;

	float data[] = { 2.f, 1.414f, 3.f, 1.732f };
	Mat mat1(2, 2, CV_32FC1, data);
	cout << "mat1:\n" << mat1 << endl;
}