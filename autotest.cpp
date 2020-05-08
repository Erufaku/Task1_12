/*
 * autotest.cpp
 *
 *  Created on: 8 мая 2020 г.
 *      Author: coolg
 */

#include "autotest.hpp"
using namespace std;
void autotest1(){
	std::cout << "test №1: ";
	int c=0;
    char r[4];
    char a[2]; strcpy(a, "o");
    char b[3]; strcpy(b, "ne");
    cstring0 m(a);
    cstring0 n(b);
    cstring0 k;
    strcpy(r, "one");
    k = m + n;
    for(int i=0;i<4;i++){
        if(k.FindElement(i)!=r[i]){
            std::cout << "\n"<<k.FindElement(i)<< " != "<<r[i]<<endl;
            c++;
        }
    }
    if(c==0) std::cout<<"OK!"<<endl;
    else std::cout<<"Failed!"<<endl;
}
void autotest2(){
	std::cout << "test №2: ";
	int c=0;
    char r[4];
    char a[2]; strcpy(a, "o");
    char b[3]; strcpy(b, "ne");
    cstring1 m(a);
    cstring1 n(b);
    cstring1 k;
    strcpy(r, "one");
    k = m + n;
    for(int i=0;i<4;i++){
        if(k.FindElement(i)!=r[i]){
            std::cout << "\n"<<k.FindElement(i)<< " != "<<r[i]<<endl;
            c++;
        }
    }
    if(c==0) std::cout<<"OK!"<<endl;
    else std::cout<<"Failed!"<<endl;
}
void autotest3(){
	std::cout<<"Test №3: ";
	int c=0;
    char r[4];
    char a[2]; strcpy(a, "o");
    char b[3]; strcpy(b, "ne");
    cstring1 m(a);
    cstring0 n(b);
    cstring1 k;
    strcpy(r, "one");
    k = m + n;
    for(int i=0;i<4;i++){
        if(k.FindElement(i)!=r[i]){
            std::cout << "\n"<<k.FindElement(i)<< " != "<<r[i]<<endl;
            c++;
        }
    }
    if(c==0) std::cout<<"OK!"<<endl;
    else std::cout<<"Failed!"<<endl;
}
void autotest4(){




}
