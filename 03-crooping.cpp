#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main() {
	string imgPath = "C:/Users/ASUS/Pictures/Screenshots/02.png";
	Mat img = cv::imread(imgPath);

	if (img.empty()) {
		cerr << "The image is empty!!!" << endl;
		return -1;
	}

	int x = 50;
	int y = 50;
	int width = 100;
	int height = 100;

	Rect roi(x, y, width, height);

	Mat croppedImg = img(roi).clone();

	imshow("Org image", img);
	imshow("Cropped img", croppedImg);
	waitKey(0);

	return 0;
}

