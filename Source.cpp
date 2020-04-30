#include"CommonHeader.h"

string reverse(string str)
{
	string s;
	for (auto i = str.length()-1; i > 0 ; i--)
	{
		s += str[i];
	}
	return s;
}

int reverse(int num)
{
	//9091  1909
	int rev = 0;
	while (num)
	{
		rev = rev * 10 + num % 10;
		num = num / 10;
	}
	return num;
}

char findChar(string str)
{
	map<char, int> m;
	for (auto i = 0; i < str.length(); i++)
	{
		m[str[i]]++;
	}

	for (auto it : m)
	{
		if (it.second == 1)
			return it.first;
	}
	return 0;
}

int fib(int n)
{
	if (n <= 1)
		return n;
	
	return fib(n - 1) + fib(n - 2);
}

int gcd(int a, int b)
{
	if (a == 1)
		return 1;
	return gcd(b%a, a);
}

int findGcd(int a[], int n)
{
	int result= a[0];

	for (int i = 1; i < n; i++)
	{
		result = gcd(a[i], result);
		if (result == 1)
			cout << 1;
	}
	
		cout << result;
		return result;
}
bool stringUnique(string str)
{
	if (str.length() > 128)
		return false;
	bool char_set[128] = { false };
	for (auto z : str)
	{
		int val = z;
		cout << val << " " << z<<endl;
		if (char_set[val])
			return false;
		else
			char_set[val] = true;
	}
	return true;
}

bool stringPermutation1(string s1, string s2)
{
	if (s1.length() != s2.length())
		return false;

	//if (stringSort(s1) != stringSort(s2))
		//return false;
	else
		return true;

}

bool stringPermutation2(string str1, string str2)
{
	int chararr[128];
	if (str1.length() != str2.length())
		return false;

	for (int i = 0; i < str1.length(); i++)
	{
		int z = str1[i];
		chararr[z]++;
	}
	for (int i = 0; i < str2.length(); i++)
	{
		int z = str2[i];
		if (chararr[z] > 0)
			chararr[z]--;
		else
			return false;
	}
}
//
//int main()
//{
//
//	//string str;
//	//getline(cin,str);
//	////cout << findChar(str);
//	//if (stringUnique(str))
//	//	cout << "True";
//	//else
//	//	cout << "false";
//	/*
//	int num;
//	cin >> num;
//	cout << reverse(num);
//	*/
//
//	getchar();
//	return 0;
//}