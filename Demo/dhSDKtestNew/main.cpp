#include <iostream>

#include <unistd.h>
//#include <dhcamera.h>
#include <hkcamera.h>
using namespace std;


#include "opencv2/opencv.hpp"


int main()
{
    cout<<"ddd"<<endl;
//    DHCamera dhCamera("172.16.0.238",37777,"admin","rm123456");

    HkCamera dhCamera("172.16.0.239",8000,"admin","rm123456");

    while(1)
    {
//        cout<<"begin"<<endl;
        if (dhCamera.next())
        {
            cv::Mat *image=dhCamera.getNewestFrame();
            imshow("frame from camera",*image);
            cv::waitKey(1);
        }
        usleep(100000);

    }


    return 0;
}
