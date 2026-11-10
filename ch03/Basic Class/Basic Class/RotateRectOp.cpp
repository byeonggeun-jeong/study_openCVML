#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// RotatedRect
// 회전된 사각형 표현 클래스
// (center(Point2f), size(Size2f), angle(float))

void RotatedRectOp()
{
	RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);

	Point2f pts[4];
	rr1.points(pts);

	Rect br = rr1.boundingRect();
}