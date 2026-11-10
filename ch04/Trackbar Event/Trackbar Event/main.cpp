#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void on_level_change(int pos, void* userdata);

int main(void)
{
	Mat img = Mat::zeros(400, 800, CV_8UC1);

	namedWindow("image");
	createTrackbar("level", "image", 0, 16, on_level_change, (void*)&img); // 트랙바 생성
	
	imshow("image", img);
	waitKey();

	return 0;
}

void on_level_change(int pos, void* userdata)
{
	Mat img = *(Mat*)userdata;

	img.setTo(pos * 16); // 트랙바 값 * 16
	imshow("image", img);
}
