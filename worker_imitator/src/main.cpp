//
// Created by natasha on 27.11.22.
//
#include <iostream>
#include "Reader.h"
#include "GenerateProto.h"
using namespace std;

int main()
{
    Reader r;
    Package pac;
    pac.set_picture(r.read_and_code("stories/1.png"));
    pac.set_version("0.0.1");
    pac.set_time(0);

    GenerateProto gen;
    cout << "Saving package..." << endl;
    gen.savePac("stories/pac.dat", pac);

    cout << "Loading package..." << endl;
    Package pac2;
    gen.loadPac("stories/pac.dat", pac2);
    gen.printPac(pac2);
    string s=pac2.picture();

    cout<<"I am WORKER_IMITATOR";
    return 0;
}