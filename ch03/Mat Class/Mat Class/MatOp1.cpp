#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// 여러 행렬 생성
// Mat::Mat(int rows, int cols, int type, const Scalar& s); // 행 열 -> 세로 가로
// Mat::Mat(Size(cols, rows), int type, const Scalar& s);
// size_t step=AUTO_STEP : 패딩 바이트 X

// Mat_는 Mat을 상속하여 만든 템플릿 클래스
// create()는 이미 생성된 Mat에 새로운 행렬 할당

void MatOp1()
{
	Mat img1; 	// empty matrix

	Mat img2(480, 640, CV_8UC1);		// unsigned char, 1-channel
	Mat img3(480, 640, CV_8UC3);		// unsigned char, 3-channels
	Mat img4(Size(640, 480), CV_8UC3);	// Size(width, height)

	Mat img5(480, 640, CV_8UC1, Scalar(128));		// initial values, 128 gray
	Mat img6(480, 640, CV_8UC3, Scalar(0, 0, 255));	// initial values, 255 red

	Mat mat1 = Mat::zeros(3, 3, CV_32SC1);	// 0's matrix
	Mat mat2 = Mat::ones(3, 3, CV_32FC1);	// 1's matrix
	Mat mat3 = Mat::eye(3, 3, CV_32FC1);	// identity matrix(단위 행렬)

	float data[] = { 1, 2, 3, 4, 5, 6 };
	Mat mat4(2, 3, CV_32FC1, data); // 2행 3열 행렬
	// data[]가 바뀌면 mat4도 바뀌고, mat4를 바꿔도 data[]가 바뀜

	// Mat mat5 = (Mat_<float>(2, 3) << 1, 2, 3, 4, 5, 6); // 더 이상 지원하지 않음
	Mat mat5 = Mat_<uchar>({ 2, 3 }, { 1, 2, 3, 4, 5, 6 }); // 초기화 리스트 방법
	Mat mat6 = Mat_<uchar>({ 2, 3 }, { 1, 2, 3, 4, 5, 6 });

	mat4.create(256, 256, CV_8UC3);	// uchar, 3-channels
	mat5.create(4, 4, CV_32FC1);	// float, 1-channel

	mat4 = Scalar(255, 0, 0);
	mat5.setTo(1.f); // 행렬 전체 원소 값을 한꺼번에 설정
}