// 2-1Project.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <opencv/highgui.h>

int main()
{
	IplImage* img = cvLoadImage("Y:\\Works\\Learning\\OpenCV\\learning sucai\\WechatIMG98.jpeg");
	cvNamedWindow("2-1程序演示", CV_WINDOW_AUTOSIZE);
	cvShowImage("2-1程序演示", img);
	cvWaitKey(0);
	cvReleaseImage(&img);
	cvDestroyWindow("2-1程序演示");
    return 0;
}

