/*
 * cstring0.cpp
 *
 *  Created on: 7 мая 2020 г.
 *      Author: coolg
 */

#include "cstring0.hpp"
void cstring0::output(std::ostream &stream) const {
	for(int i=0; i< FindLength(); ++i){
		stream << FindElement(i);
	}
	stream << '\n';
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
