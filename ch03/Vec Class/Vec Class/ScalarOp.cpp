#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// Scalar 클래스
// 4채널 이하 영상에서 픽셀 값을 표현하는 용도로 자주 사용됨
// GrayScale = [GL, 0, 0, 0]
// TrueColor = [B, G, R, 0]

void ScalarOp()
{
	Scalar gray = 128; // 값 하나로 128gray 픽셀 설정
	cout << "gray: " << gray << endl;

	Scalar yellow(0, 255, 255); // Yellow
	cout << "yellow: " << yellow << endl;

	Mat img1(256, 256, CV_8UC3, yellow); // 256*256 yellow mat 생성

	for (int i = 0; i < 4; i++)
		cout << yellow.val[i] << ", " << yellow[i] << endl; // 0 255 255 0
}
