/*
 * cstring1.h
 *
 *  Created on: 7 ìàÿ 2020 ã.
 *      Author: coolg
 */

#ifndef SRC_CSTRING1_H_
#define SRC_CSTRING1_H_

#include "cstring.hpp"

class cstring1: public cstring {
public:
	cstring1():cstring(){};
    cstring1(char *a, int lenght):cstring(a, lenght){};
    cstring1(char *a):cstring(a){};
    cstring1(const char* FileName,char *a):cstring(FileName, a){};
    cstring1(const cstring& other):cstring(other){};
	cstring1(const cstring1 &other);
	using cstring::operator =;
	void output() const override final;
};
#endif /* SRC_CSTRING1_H_ */
