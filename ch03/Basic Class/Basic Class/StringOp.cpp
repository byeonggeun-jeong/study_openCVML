#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// String
// 문자열 클래스
// 원래는 별도 클래스가 있었는데, OpenCV4부터 기본 String 클래스로 대체됨
// cv::format(const chart* fmt, ...);

void StringOp()
{
	String str1 = "Hello";
	String str2 = "world";
	String str3 = str1 + " " + str2;	// str3 = "Hello world"

	bool ret = (str2 == "WORLD"); // false(대소문자 구분)

	Mat imgs[3];
	for (int i = 0; i < 3; i++) {
		String filename = cv::format("data%02d.bmp", i + 1); // format 오버로딩 주의
		cout << filename << endl;
		imgs[i] = imread(filename);
	}
}