#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// TickMeter : 연산 시간 측정
// 좀 더 정확하게 하려면 평균 연산 시간 측정

void time_inverse()
{
	Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);

	if (src.empty()) {
		cerr << "Image load failed!" << endl;
		return;
	}

	Mat dst(src.rows, src.cols, src.type());

	TickMeter tm; // Tickmeter인 tm을 만들고 시작
	tm.start();

	for (int j = 0; j < src.rows; j++) {
		for (int i = 0; i < src.cols; i++) {
			dst.at<uchar>(j, i) = 255 - src.at<uchar>(j, i); // 모든 픽셀 반전
		}
	}

	tm.stop(); // tm 중단
	cout << "Image inverse took " << tm.getTimeMilli() << "ms." << endl; // 밀리초 단위로 반환
}
