#include "Strings.h"



Strings::Strings()
{
	str = nullptr;
}


Strings::~Strings()
{
	delete str;
}

int Strings::stringLen(const char * str)
{
	//char* charptr = str;
	if (str == nullptr)
		return 0;

	int count = 0;
	while (*(str) != '\0')
	{
		count++;
		str = str + 1;
	}
	return count;

}

char * Strings::stringchr(const char * str, char c)
{
	bool charval= false;

	if (str == nullptr)
	{
		return nullptr;
	}
	while ((*str) != '\0')
	{
		if (*str == c)
		{
			return (char*) str; 
		}
		str = str + 1;
	}
	return nullptr;
}

bool Strings::stringCompare(const char* str1, const char* str2)
{
	bool charval = true;
	if (stringLen(str1) != stringLen(str2))
		return false;
	if (str1 == nullptr && str2 == nullptr)
		return false;
	while (*(str1) != '\0')
	{
		if (*(str1) != *(str2))
		{
			charval = false;
			break;
		}
		str1++;
		str2++;
		
	}
	return charval;
}


char * Strings::strStr(const char* str1, const char* str2)
{
	char *s1, *s2;
	if (str1 == nullptr || str2 == nullptr)
	{
		return nullptr;
	}
	while (*(str1) != '\0')
	{
		if (*str1 == *str2)
		{
			s1 = (char*)str1;
			s2 = (char*)str2;
			while ((*s2 != '\0') && (*s1 == *s2))
			{
					s1++;
					s2++;
			}
			if (*s2 == '\0')
				return (char*)str1;
		}
		str1++;
	}
	return nullptr;
}

char * Strings::strCat(char * dest,const char* src)
{
	
	if (*dest == '\0')
		return (char*)src;
	else if (*src == '\0')
		return dest;
	else if (*dest == '\0' && *src == '\0')
		return nullptr;
	else
	{
		char *d = dest;
		while (*d != '\0')
			d++;
		while (*src != '\0')
		{
			*d = *src;
			d++;
			src++;
		}
		*d = '\0';
		
		return dest;
	}
	return nullptr;
}