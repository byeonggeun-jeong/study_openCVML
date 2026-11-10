#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// 크기 및 타입 변환
// reshape(cn, rows) // cn : 채널 수, rows : 원하는 행 개수
// resize(sz, s) // sz : 새로운 행 개수, 초깃값
// push.back() // 존재하는 행렬에 원소 데이터 추가. 기존과 열 개수 같아야함

void MatOp7()
{
	Mat img1 = imread("lenna.bmp", IMREAD_GRAYSCALE);

	Mat img1f;
	img1.convertTo(img1f, CV_32FC1); // int를 float로

	uchar data1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	Mat mat1(3, 4, CV_8UC1, data1);
	Mat mat2 = mat1.reshape(0, 1); // 1행으로 펼치기

	cout << "mat1:\n" << mat1 << endl;
	cout << "mat2:\n" << mat2 << endl;

	mat1.resize(5, 100); // 5행으로, 초깃값은 100
	cout << "mat1.resize():\n" << mat1 << endl;

	Mat mat3 = Mat::ones(1, 4, CV_8UC1) * 255; // [255, 255, 255, 255] 생성
	mat1.push_back(mat3); // mat3을 mat1에 이어붙이기
	cout << "mat1:\n" << mat1 << endl;
}
