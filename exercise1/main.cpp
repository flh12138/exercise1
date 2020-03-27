#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap;

	cap.open(0);

	double fps = cap.get(CAP_PROP_FPS);
	std::cout << "fps" << fps << std::endl;


	while (1)
	{
		cv::Mat frame;
		cv::Mat MedianBlurMat;
		cap.read(frame);
		medianBlur(frame, MedianBlurMat, 3);
		imshow("MedianBlurMat", MedianBlurMat);
		imshow("frame", frame);
		waitKey(30);
	}






}