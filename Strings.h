#pragma once
#include<string>
class Strings
{
private:
	char * str;
public:
	Strings();
	~Strings();
	int stringLen(const char *str);
	char * stringchr(const char *str, char c);
	int stringConcat(const char * str1, const char * str2);
	bool stringCompare(const char * str1, const char * str2);
	char * strStr(const char* str1, const char * str2);
	char * strCat(char * dest, const char * src); 
};

