#include <stdio.h>
#include <opencv2/opencv.hpp>
using namespace cv;
int main()
{
printf("Hello, OpenCV!\n");
Mat img = imread("lena.jpg");
Mat gray;
cv::cvtColor(img, gray, CV_BGR2GRAY);
return 0;
}