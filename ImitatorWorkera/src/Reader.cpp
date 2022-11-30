//
// Created by natasha on 27.11.22.
//

#include "Reader.h"

void Reader::read() {
    Mat img = imread("../stories/1.png");
    ImagemConverter con;
    string s=con.mat2str(img);
    Mat img2=con.str2mat(s);
    cv::imwrite("some.png", img2);
}