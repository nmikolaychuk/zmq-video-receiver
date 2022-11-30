//
// Created by natasha on 27.11.22.
//

#include "Reader.h"

std::string Reader::read_and_code() {
    Mat img = imread("../stories/1.png");
    ImagemConverter con;
    string s=con.mat2str(img);
    Mat img2=con.str2mat(s);
    cv::imwrite("some.png", img2);

    return s;
}
void Reader::decode_and_write(std::string& s) {
    ImagemConverter con;
    Mat img2=con.str2mat(s);
    cv::imwrite("some.png", img2);
}