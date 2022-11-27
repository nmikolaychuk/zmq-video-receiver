//
// Created by natasha on 27.11.22.
//

#include "Reader.h"

std::string Reader::read() {
    Mat img = imread("../stories/picture.png");
    std::vector<uchar> buf;
    cv::imencode(".jpg", img, buf);
    auto *enc_msg = reinterpret_cast<unsigned char*>(buf.data());
    ImagemConverter con;
    std::string encoded = con.base64_encode(enc_msg, buf.size());
    return encoded;
}