#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// Rect
// 사각형의 위치와 크기 정보를 표현할 때 사용하는 클래스
// (x, y, width, height)

void RectOp()
{
	Rect rc1;					// rc1 = [0 x 0 from (0, 0)]
	Rect rc2(10, 10, 60, 40);	// rc2 = [60 x 40 from (10, 10)]

	Rect rc3 = rc1 + Size(50, 40);	// rc3 = [50 x 40 from (0, 0)]
	Rect rc4 = rc2 + Point(10, 10);	// rc4 = [60 x 40 from (20, 20)]

	Rect rc5 = rc3 & rc4;		// rc5 = [30 x 20 from (20, 20)] // 교차 지역
	Rect rc6 = rc3 | rc4;		// rc6 = [80 x 60 from (0, 0)] // 두 지역 모두 포함

	cout << "rc5: " << rc5 << endl;
	cout << "rc6: " << rc6 << endl;
}