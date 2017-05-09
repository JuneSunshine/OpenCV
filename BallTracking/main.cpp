#include <opencv2\opencv.hpp>

using namespace std;
using namespace cv;


int main() {
	VideoCapture cap(0);
	String filename = "";

	if (!cap.isOpened()) {
		return -1;
	}

	for (;;) {
		Mat frame;
		cap >> frame;
		imshow("video", frame);
		int k = waitKey(30);
		if (k == 27) {
			break;
		}
	}
	return 0;
}