// 2-1Project.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <opencv/highgui.h>

int main()
{
	IplImage* img = cvLoadImage("Y:\\Works\\Learning\\OpenCV\\learning sucai\\WechatIMG98.jpeg");
	cvNamedWindow("2-1������ʾ", CV_WINDOW_AUTOSIZE);
	cvShowImage("2-1������ʾ", img);
	cvWaitKey(0);
	cvReleaseImage(&img);
	cvDestroyWindow("2-1������ʾ");
    return 0;
}

