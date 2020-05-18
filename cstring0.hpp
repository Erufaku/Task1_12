/*
 * cstring0.h
 *
 *  Created on: 7 ìàÿ 2020 ã.
 *      Author: coolg
 */

#ifndef SRC_CSTRING0_H_
#define SRC_CSTRING0_H_

#include "cstring.hpp"

class cstring0: public cstring {
public:
	cstring0():cstring(){};
    cstring0(char *a, int lenght):cstring(a, lenght){};
    cstring0(char *a):cstring(a){};
    cstring0(const char* FileName,char *a):cstring(FileName, a){};
    cstring0(const cstring& other):cstring(other){};
	cstring0(const cstring0 &other);
	using cstring::operator =;
	void output() const override final;
};
cstring0 operator+(const cstring& left, const cstring& right);
#endif /* SRC_CSTRING0_H_ */
