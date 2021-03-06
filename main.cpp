#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <vector>
#include "autotest.hpp"
#include "cstring.hpp"
#include "cstring0.hpp"
#include "cstring1.hpp"
using namespace std;

int main()
{
	autotest1();
	autotest2();
	autotest3();
	const char s[]= "test.txt";
	ifstream inputFile(s);
	if(!inputFile){
		cerr<< "Input file not open!" << endl;
		return -1;
	}
	vector<cstring*> strings;
	string tmp;
	while (getline(inputFile,tmp)){
		stringstream tmpStream(tmp);
		int stringType;
		string outputFilename;
		string str;
		tmpStream >> stringType >> outputFilename >> str;
		char *outputFilename_, *str_;
		outputFilename_ = new char[outputFilename.size() + 1];
		str_ = new char[str.size() + 1];
		std::strcpy(outputFilename_, outputFilename.c_str());
		std::strcpy(str_, str.c_str());
		/*for(int i=0;i < (int)outputFilename.size();i++){
			outputFilename_[i] = outputFilename[i];
		}
		for(int i=0;i < (int)str.size();i++){
					str_[i] = str[i];
		}*/
		cstring* newCstring = nullptr;
		switch(stringType){
		case 0:
			newCstring = new cstring0(outputFilename_, str_);
			break;
		case 1:
			newCstring = new cstring1(outputFilename_, str_);
			break;
		default:
			cerr << "Wrong number!!" << endl;
			delete[] newCstring;
		}
		delete[] outputFilename_;
		delete[] str_;
		strings.push_back(newCstring);

	}
	inputFile.close();
    auto strIt = strings.begin();
    int nErrors = 0;
    while (strIt != strings.end()) {
        (*strIt)->output();
        ++strIt;
    }
    return 0;
}



