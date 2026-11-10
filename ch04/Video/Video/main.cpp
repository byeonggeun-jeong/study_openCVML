#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

int main(void)
{
	camera_in();
	video_in();
	camera_in_video_out();

	return 0;
}
