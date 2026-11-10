#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// InputArray Class
// 입력

void InputArrayOp()
{
	uchar data1[] = { 1, 2, 3, 4, 5, 6 };
	Mat mat1(2, 3, CV_8UC1, data1); // 2*3 mat 생성
	printMat(mat1);

	vector<float> vec1 = { 1.2f, 3.4f, -2.1f }; // 1*3 vector 생성
	printMat(vec1);
}

void printMat(InputArray _mat) // InputArray를 파라미터로
{
	Mat mat = _mat.getMat();  // InputArray Type의 _mat 객체로부터 Mat 객체인 mat 생성
	cout << mat << endl;
}
