#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main() 
{
	VideoCapture video(1);
	CascadeClassifier facedetect;
	Mat img;
	// facedetect.load(".xml"); -> Include the path  // 

	while (true) 
	{
		video.read(img);

		vector<Rect> faces;

		facedetect.detectMultiScale(img, faces, 1.3, 5);

		cout << faces.size() << endl;

		for (int i = 0; i < faces.size(); i++) 
		{
			rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 156, 16), 3);
			rectangle(img, Point(0, 0), Point(250, 70), Scalar(255, 156, 16), FILLED);
			putText(img, to_string((" No. of Face found : ")+ face.size()), Point(10, 40), FONT_HERSHEY_DUPLEX, 1, Scalar(88, 24, 69), 1);
		}
		imshow("Frame", img);
		waitKey(1);
	}

	return 0;
}
