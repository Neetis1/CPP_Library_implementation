//#pragma warning(disable:4996)
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//class string_class
//{
//private:
//
//	char * str;
//	int size;
//
//public:
//
//	string_class() //= default;
//	{
//		size = 0;
//		str = nullptr;
//	}
//
//	string_class(const char * s)
//	{
//		size = strlen(s);
//		str = new char[size+1];
//		strcpy(str, s);
//	}
//
//	string_class(const string_class & st)
//	{
//		size = st.size;
//		str = new char[size + 1];
//		strcpy(str, st.str);
//	}
//
//	string_class operator = (string_class & st)
//	{
//		if (this != &st)
//		{
//			size = strlen(st.str);
//			if (this->str)
//				delete[]str;//this->str = nullptr;
//			str = new char[size + 1];
//			strcpy(str, st.str);
//		}
//		return *this;
//	}
//
//	friend ostream& operator <<(ostream&, string_class&);
//
//	string_class & operator +(const string_class& st)
//	{
//		/*string_class s;
//		s.size = this->size + st.size;
//		s.str = new char[s.size + 1];
//		strcpy(s.str, this->str);
//		strcat(s.str, st.str);
//		return s;*/
//		int s = this->size + st.size + 1;
//		char * sr=nullptr;
//		strcpy(sr, this->str);
//		if (this->str)
//			delete[] str;
//		str = new char[s];
//		strcpy(this->str,sr);
//		strcat(this->str, st.str);
//		return *this;
//	}
//
//	~string_class()
//	{
//		if(str)
//			delete[]str;
//	}
//
//	
//};
//ostream& operator<<(ostream& out, string_class& st)
//{
//	out << "string is" << st.str<<endl;
//	return out;
//}
//
//int main()
//{
//	string_class str1("hello");
//	string_class str2(str1);
//	string_class str3("world");
//	string_class str4;
//	str3 = str1;
//	str4 = str2 + str3;
//	std::cout << str3 << str2 << str1<< str4;
//	int x;
//	int&y = x;
//	int&z = y;
//	int *p = &z;
//	//str3 = str1;
//	//cout << str3;
//	getchar();
//	return 0;
//}
