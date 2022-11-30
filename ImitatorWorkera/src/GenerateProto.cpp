//
// Created by natasha on 30.11.22.
//
#include "GenerateProto.h"

void GenerateProto::savePac(const char* fname, const Package& pac) {
    fstream out(fname, ios::out | ios::trunc | ios::binary);
    if(!pac.SerializeToOstream(&out))
        throw runtime_error("savePackage() failed");
}
void GenerateProto::loadPac(const char* fname, Package& pac) {
    fstream in(fname, ios::in | ios::binary);
    if(!pac.ParseFromIstream(&in))
        throw runtime_error("loadPackage() failed");
}

void GenerateProto::printPac(const Package& pac) {
    cout << "Version: " << pac.version() << endl;
    cout << "Time: " << pac.time() << endl;
    cout << "Picture: " << pac.picture() << endl;
}