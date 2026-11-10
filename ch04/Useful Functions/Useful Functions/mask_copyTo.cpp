#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// mask_copyTo
// 마스크 연산
// mask 영상의 픽셀 값이 0이 아닌 위치에서만 복사

void mask_copyTo()
{
	Mat src = imread("airplane.bmp", IMREAD_COLOR);
	Mat mask = imread("mask_plane.bmp", IMREAD_GRAYSCALE);
	Mat dst = imread("field.bmp", IMREAD_COLOR);

	if (src.empty() || mask.empty() || dst.empty()) {
		cerr << "Image load failed!" << endl;
		return;
	}

	src.copyTo(dst, mask); // src에서 mask 흰색 부분만 dst로 복사

	imshow("src", src);
	imshow("dst", dst);
	imshow("mask", mask);

	waitKey();
	destroyAllWindows();
}
