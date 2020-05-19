/*
 * cstring1.cpp
 *
 *  Created on: 7 ìàÿ 2020 ã.
 *      Author: coolg
 */

#include "cstring1.hpp"
#include <fstream>
#include <sstream>
using namespace std;
	
void cstring1::output() const {
	 ofstream outputFile(this->getFilename());
	 if (!outputFile) {
		 std::cout << "Can't find file!" << endl;
		 exit(-2);
	 }
	 for (int i = 0; i < FindLength(); ++i) {
		 outputFile << FindElement(i);
	     if (i != FindLength() - 1) {
			 outputFile << '\n';
	     }
	 }
	 outputFile.close();
	    }
