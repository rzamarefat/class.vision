#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;



int main() {
	string imgPath = "C:/Users/ASUS/Pictures/Screenshots/02.png";
	Mat img = cv::imread(imgPath);

	if (img.empty()) {
		std::cerr << "Error: Unable to load image." << std::endl;
		return -1;
	}

	imshow("Image", img);
	waitKey(0);
	destroyAllWindows();

	return 0;
}