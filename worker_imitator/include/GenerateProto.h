//
// Created by natasha on 30.11.22.
//

#ifndef IMITATOR_GENERATEPROTO_H
#define IMITATOR_GENERATEPROTO_H

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <Message.pb.h>

using namespace std;
using namespace me::eax::examples::game;

class GenerateProto{
public:
    void savePac(const char* fname, const Package& pac);
    void loadPac(const char* fname, Package& pac);
    void printPac(const Package& hero);
};

#endif //IMITATOR_GENERATEPROTO_H
