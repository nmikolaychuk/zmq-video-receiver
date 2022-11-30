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
    pac.set_picture(r.read_and_code());
    pac.set_version(0);
    pac.set_time(0);

    GenerateProto gen;
    cout << "Saving package..." << endl;
    gen.savePac("pac.dat", pac);

    cout << "Loading package..." << endl;
    Package pac2;
    gen.loadPac("pac.dat", pac2);

    gen.printPac(pac2);

    string s=pac2.picture();
    r.decode_and_write(s);

    cout<<"I am IMITATOR_WORKERA";
    return 0;
}