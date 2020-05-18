/*
 * cstring0.cpp
 *
 *  Created on: 7 ìàÿ 2020 ã.
 *      Author: coolg
 */
#include <fstream>
#include <sstream>
#include "cstring0.hpp"
void cstring0::output(std::ostream &stream) const {
    ofstream outputFile(this->getFilename());
    if (!outputFile) {
        std::cout << "Can't find file!" << endl;
        exit(-2);
    }
    for (int i = 0; i < FindLength(); ++i) {
	    outputFile << FindElement(i);
	}
    outputFile << '\n';
    outputFile.close();
}
cstring0 operator+(const cstring& left, const cstring& right){
    int l = left.FindLength();
    int r = right.FindLength();
    int new_len = l + r;
    char *new_str;
    new_str = new char[new_len+1];
    strcpy(new_str,left.GetStr());
    strcat(new_str,right.GetStr());
    return cstring0(new_str,new_len);
}
