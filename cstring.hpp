#ifndef CSTRING_H
#define CSTRING_H


#include <iostream>
#include <exception>
#include <cstring>
class cstring
{
private:
    char *str;
    char filename[128];
    int len;
public:
    cstring();
    int FindLength() const;
    char FindElement(int i) const;
    const char* FindFile() const;
    char* GetStr() const;
    cstring(char *a, int lenght);
    cstring(char *a);
    cstring(const char* FileName,char *a);
    cstring(const cstring& other);
    cstring& operator=(const cstring& other);
    virtual ~cstring()
    {
        if(len != 0){
            delete[] str;
            str = NULL;
            len = 0;
        }
    }
    cstring& operator=(const char* other);
    virtual void output() const = 0;
};
bool operator==(const cstring& lhs, const cstring& rhs);
bool operator!=(const cstring& lhs, const cstring& rhs);
std::ostream& operator<<(std::ostream& stream, const cstring& rat);

#endif // CSTRING_H
