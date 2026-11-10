#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// 부분 행렬 추출
// Mat(Rect(Rect(x1, y1, x2, y2));

void MatOp3()
{
	Mat img1 = imread("cat.bmp");

	if (img1.empty()) {
		cerr << "Image load failed!" << endl;
		return;
	}

	Mat img2 = img1(Rect(220, 120, 340, 240)); // ROI 추출, 얕은 복사여서 img2 픽셀 바꾸면 img1도 바뀜
	Mat img3 = img1(Rect(220, 120, 340, 240)).clone(); // 깊은 복사

	img2 = ~img2; // 영상 반전

	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);

	waitKey();
	destroyAllWindows();
}