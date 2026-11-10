#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// Point
// 2차원 평면 위에 있는 점의 좌표를 표현하는 템플릿 클래스
// (x, y)

void PointOp()
{
	Point pt1;				// pt1 = (0, 0)
	pt1.x = 5; pt1.y = 10;	// pt1 = (5, 10)
	Point pt2(10, 30);		// pt2 = (10, 30)

	Point pt3 = pt1 + pt2;	// pt3 = [15, 40]
	Point pt4 = pt1 * 2;	// pt4 = [10, 20]
	int d1 = pt1.dot(pt2);	// d1 = 350
	bool b1 = (pt1 == pt2);	// b1 = false

	cout << "pt1: " << pt1 << endl;
	cout << "pt2: " << pt2 << endl;
}