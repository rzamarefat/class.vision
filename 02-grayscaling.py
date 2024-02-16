#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;


int main() {

	string imgPath = "C:/Users/ASUS/Pictures/Screenshots/02.png";
	Mat img = cv::imread(imgPath);

	imshow("Original Image", img);


	Mat grayImg;
	cvtColor(img, grayImg, COLOR_BGR2GRAY);

	imshow("The Grayscaled Version", grayImg);
	waitKey(0);
	destroyAllWindows();


	return 0;
}