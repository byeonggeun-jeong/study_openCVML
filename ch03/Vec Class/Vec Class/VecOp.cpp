#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// Vec 클래스
// 작은 크기의 행렬을 표현
// Vec"xy" // x = channel, y = data type

void VecOp()
{
	Vec3b p1, p2(0, 0, 255); // 3channel unchar type
	// p1 = [0, 0, 0] // p2 = [0, 0, 255]
	p1[0] = 100; // p1 = [100, 0, 0]
	cout << "p1: " << p1 << endl;
	cout << "p2: " << p2 << endl;
}