#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// 특정 행 or 열 추출
// Case 1. at() -> 특정 좌표
// Case 2. ptr() -> 행 단위로 참조하는 경우 유용함
// Case 3. Matlterator -> 행렬 크기에 상관없이 전체 원소를 차례대로 참조

void MatOp4()
{
	Mat mat1 = Mat::zeros(3, 4, CV_8UC1); // 3*4 빈 행렬 생성
	Mat mat2 = Mat::zeros(3, 4, CV_8UC1);
	Mat mat3 = Mat::zeros(3, 4, CV_8UC1);

	for (int j = 0; j < mat1.rows; j++) {
		for (int i = 0; i < mat1.cols; i++) {
			mat1.at<uchar>(j, i)++; // 특정 행과 열 값을 참조로 반환
		}
	}

	for (int j = 0; j < mat2.rows; j++) {
		uchar* p = mat2.ptr<uchar>(j); // j번째 행을 돌면서
		for (int i = 0; i < mat2.cols; i++) {
			p[i]++; // i열 하나씩 증가
		}
	}

	for (MatIterator_<uchar> it = mat3.begin<uchar>(); it != mat3.end<uchar>(); ++it) { // begin 과 end 활용
		(*it)++;
	}

	cout << "mat1:\n" << mat1 << endl;
	cout << "mat2:\n" << mat2 << endl;
	cout << "mat3:\n" << mat3 << endl;

	
}