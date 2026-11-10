#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// Size
// 영역 또는 사각형 영역의 크기를 표현할 때 사용하는 클래스
// (width, height)


void SizeOp()
{
	Size sz1, sz2(10, 20);			// sz1 = [0 x 0], sz2 = [10 x 20]
	sz1.width = 5; sz1.height = 10;	// sz1 = [5 x 10]

	Size sz3 = sz1 + sz2;	// sz3 = [15(10+5) x 30(20+10)]
	Size sz4 = sz1 * 2;		// sz4 = [10 x 20]
	int area1 = sz4.area();	// area1 = 200

	cout << "sz3: " << sz3 << endl;
	cout << "sz4: " << sz4 << endl;
}