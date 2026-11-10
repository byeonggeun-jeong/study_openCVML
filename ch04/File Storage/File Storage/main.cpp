#include "opencv2/opencv.hpp"
#include <iostream>
#include "func.h"

using namespace cv;
using namespace std;

// String filename = "mydata.xml";
// String filename = "mydata.yml";
String filename = "mydata.json"; // json 형식으로 mydata 생성

int main(void)
{
	writeData();
	readData();

	return 0;
}
