#pragma once
#include <Kinect.h>

class KinectManager
{
public:
	// Kinect variables
	IKinectSensor* sensor;         // Kinect sensor
	IColorFrameReader* reader;     // Kinect color data source
	KinectManager();
	~KinectManager();
	bool initKinect();



private:


};

