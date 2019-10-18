#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Strings.h"
using namespace std;

int main()
{
	/*
	{
		LinkedList<int> list;
		for (auto i = 1; i <= 10; i++)
		{
			list.addLast(i);
		}

		list.displayList();
		list.addPosition(30, 5);
		list.displayList();
		list.deleteLast();
		list.displayList();

		list.reverseList();
		list.displayList();
		list.findData(30);
		list.deletedata(30);
		list.displayList();
		list.findData(30);
		LinkedList<int> list2;
		list2.addLast(10);
		list2.deleteFirst();
		list2.addLast(20);
		list2.addLast(30);
		list2.addLast(40);
		list2.deleteFirst();
		list2.displayList();

	}
	*/
	//Testing Strings class
	Strings STR;
	cout << "len is" << STR.stringLen("Neeti sharma")<<"\n";
	const char * str = "Hello Neeti";
	const char * str2 = "Hello Neeti";
	char c = 'e';
	char * location = STR.stringchr(str, c);
	if (location != nullptr)
	{
		cout << "character " << c << " found at location " << location<<"\n";
	}

	bool equal = STR.stringCompare(str, str2);
	if (equal)
		cout << "both are equal\n";
	else
		cout << "nah nah not same\n";
		
	char* location2 = STR.strStr("neeti Sharma", "Shar");

	if (location2 != nullptr)
	{
		cout << "found at " << location2 << "\n";
	}
	else
		cout << "not found\n";
	
	//char dest[] = "heloooo";
	//char * newString = STR.strCat((char*)dest,str2);
	//cout << "\n hey !!!!!" << *newString;


}