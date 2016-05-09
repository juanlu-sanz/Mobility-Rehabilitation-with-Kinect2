#include <C:\opencv\MyBuild\install\include\opencv2\opencv.hpp>
#include <C:\opencv\MyBuild\install\include\opencv\highgui.h>
#include "KinectManager.h"

using namespace cv;


#define width 1920
#define height 1080

/*
// Kinect variables
IKinectSensor* sensor;         // Kinect sensor
IColorFrameReader* reader;     // Kinect color data source
*/





int main() {

	KinectManager *TheKinectMann = new KinectManager();

	Mat image;          //Create Matrix to store image
	VideoCapture cap;          //initialize capture
	bool a = TheKinectMann->initKinect();
	cap.open(0);
	if (a) {
		namedWindow("window", 1);          //create window to show image
		while (1) {
			cap >> image;          //copy webcam stream to image
			imshow("window", image);          //print image to screen
			waitKey(33);          //delay 33ms
		}
	}
	return 0;
}