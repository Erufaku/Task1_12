/*
 * cstring1.cpp
 *
 *  Created on: 7 ��� 2020 �.
 *      Author: coolg
 */

#include "cstring1.hpp"
void cstring1::output(std::ostream &stream) const {
	 for (int i = 0; i < this->FindLength(); ++i) {
	            stream << this->FindElement(i);
	            if (i != FindLength()-1) {
	                stream << "\n";
	            }
	        }
	    }
