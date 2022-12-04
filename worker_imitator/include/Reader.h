//
// Created by natasha on 27.11.22.
//

#ifndef IMITATOR_WORKERA_READER_H
#define IMITATOR_WORKERA_READER_H
#include <opencv2/opencv.hpp>
#include "ConvertImage.h"

using namespace cv;

class Reader {
public:
    std::string read_and_code(std::string rdPath);
    std::string read_and_code(const char* rdPath);
    Mat decode_and_write(std::string& s);
};


#endif //IMITATOR_WORKERA_READER_H
