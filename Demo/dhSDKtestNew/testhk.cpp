#include <iostream>

#include <unistd.h>
//#include <dhcamera.h>
#include <hkcamera.h>
using namespace std;


#include "opencv2/opencv.hpp"


int main1()
{
    cout<<"ddd"<<endl;
//    DHCamera *dhCamera = new DHCamera();

    HkCamera *dhCamera = new HkCamera();

    while(1)
    {
        cout<<"begin"<<endl;
        if (dhCamera->next())
        {
            cv::Mat *image=dhCamera->getNewestFrame();
            printf("ggg\n");
            imshow("frame from camera",*image);
            cv::waitKey(1);
        }
        usleep(100000);

    }

    delete dhCamera;
    dhCamera = NULL;
    return 0;
}
