#include "cstring.hpp"

#include <cstring>
using namespace std;

cstring::cstring(){
	len = 0;
	str = NULL;
}
cstring::cstring(char *a){
	len = strlen(a);
	str = new char[len+1];
	strcpy(str,a);
	//for(int i=0;i<len;i++) str[i] = a[i];
}
const char* cstring::FindFile() const{
	return filename;
}
cstring::cstring(char *a, int length){
    len = length;
    str = new char[len+1];
    strcpy(str,a);
    //for(int i=0;i<len;i++) str[i] = a[i];
}
cstring::cstring(const char* FileName, char *a){
    len = strlen(a);
    str = new char[len+1];
    strcpy(str,a);
    //for(int i=0;i<len;i++) str[i] = a[i];
	strcpy(filename,FileName);
}
int cstring::FindLength() const{
    return len;
}
char* cstring::GetStr() const{
	return str;
}
char cstring::FindElement(int i) const{
    return str[i];
}

cstring::cstring(const cstring& other){
    int l = other.len;
    str = new char[l+1];
    memset(str, '0', sizeof(char) * l);
    len = l;
    for(int i = 0;i<len;i++) str[i] = other.str[i];
}

cstring& cstring::operator=(const cstring& other){
	if(str){delete[] str;}
	str = new char[other.len+1];
    len = other.len;
    strcpy(str,other.str);
    //for(int i = 0;i<len;i++) str[i] = other.str[i];
    return *this;
}

cstring& cstring::operator=(const char* other){
    len = strlen(other);
    for(int i = 0;i<len;i++) str[i] = other[i];
    return *this;
}

std::ostream& operator<<(std::ostream& stream, const cstring& rat){
    if(stream){
        int t = rat.FindLength();
        for(int i = 0;i < (int)t;i++) stream << rat.FindElement(i);
        //stream << " " << rat.FindLength();
    }
    return stream;
}

bool operator==(const cstring& lhs, const cstring& rhs){
	if(lhs.FindLength() == rhs.FindLength()){
		for(int i = 0; i < lhs.FindLength(); i++)
		{
			if (lhs.FindElement(i) != rhs.FindElement(i)) return false;
		}
	}
	else return false;
	return true;
}
bool operator!=(const cstring& lhs, const cstring& rhs){
	if(lhs.FindLength() == rhs.FindLength()){
		for(int i = 0; i < lhs.FindLength(); i++)
		{
			if (lhs.FindElement(i) != rhs.FindElement(i)) return true;
		}
	}
	else return true;
	return false;
}
