#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

void writeData()
{
	String name = "Jane";
	int age = 10;
	Point pt1(100, 200);
	vector<int> scores = { 80, 90, 50 };
	// Mat mat1 = (Mat_<float>(2, 2) << 1.0f, 1.5f, 2.0f, 3.2f); // 더 이상 지원하지 않음
	Mat mat1 = Mat_<float>({ 2, 2 }, { 1.0f, 1.5f, 2.0f, 3.2f }); // 초기화 리스트 방법

	FileStorage fs;
	fs.open(filename, FileStorage::WRITE); // filestorage로 open해서 write

	if (!fs.isOpened()) {
		cerr << "File open failed!" << endl;
		return;
	}

	fs << "name" << name;
	fs << "age" << age;
	fs << "point" << pt1;
	fs << "scores" << scores;
	fs << "data" << mat1;

	fs.release();
}
