#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;


void useful_func()
{
	Mat img = imread("lenna.bmp", IMREAD_GRAYSCALE);

	if (img.empty()) {
		cerr << "Image load failed!" << endl;
		return;
	}

	cout << "Sum: " << (int)sum(img)[0] << endl; // 행렬의 전체 원소 합(첫 번째 원소값)
	cout << "Mean: " << (int)mean(img)[0] << endl; // 행렬의 전체 원소 평균(첫 번째 원소값)

	double minVal, maxVal;
	Point minPos, maxPos;
	minMaxLoc(img, &minVal, &maxVal, &minPos, &maxPos);

	cout << "minVal: " << minVal << " at " << minPos << endl; // 최솟값, 최솟값 위치
	cout << "maxVal: " << maxVal << " at " << maxPos << endl; // 최대값, 최대값 위치

	Mat src = Mat_<float>({ 1, 5 }, { -1.f, -0.5f, 0.f, 0.5f, 1.f }); // -1 -0.5 0 0.5 1.0

	Mat dst;
	normalize(src, dst, 0, 255, NORM_MINMAX, CV_8UC1); // 0과 255로 정규화, NORM_MINMAX 방식으로
	// 0 64 128 191 255

	cout << "src: " << src << endl;
	cout << "dst: " << dst << endl;


	// 반올림 연산자
	cout << "cvRound(2.5): " << cvRound(2.5) << endl; // 3
	cout << "cvRound(2.51): " << cvRound(2.51) << endl; // 3
	cout << "cvRound(3.4999): " << cvRound(3.4999) << endl; // 3
	cout << "cvRound(3.5): " << cvRound(3.5) << endl; // 4
}
