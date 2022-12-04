//
// Created by natasha on 27.11.22.
//

#include "Reader.h"

std::string Reader::read_and_code(const char* rdPath) {
    std::string res = read_and_code(std::string(rdPath));
    return res;
}

std::string Reader::read_and_code(std::string rdPath) {
    Mat img = imread(rdPath);
    ImagemConverter con;
    return con.mat2str(img);
}

Mat Reader::decode_and_write(std::string& s) {
    ImagemConverter con;
    Mat img=con.str2mat(s);
    return img;
}