#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// 행렬 복사

void MatOp2()
{
	Mat img1 = imread("dog.bmp"); 

	Mat img2 = img1;// 복사 생성자(얕은 복사, 참조)
	Mat img3;
	img3 = img1; // 대입 연산자(마찬가지로 얕은 복사)

	Mat img4 = img1.clone(); // 깊은 복사(메모리 공간을 새로 할당하여 픽셀 데이터 전체를 복사)
	Mat img5;
	img1.copyTo(img5); // 깊은 복사(메모리 공간을 새로 할당하여 픽셀 데이터 전체를 복사)

	img1.setTo(Scalar(0, 255, 255));	// yellow

	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);
	imshow("img4", img4);
	imshow("img5", img5);

	waitKey();
	destroyAllWindows();
}