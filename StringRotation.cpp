
#include "CommonHeader.h"

bool isStringRotation(string s1, string s2)
{
	string x;
	string y;

	if (s1.length() != s2.length())
		return false;
	//waterbottle erbottlewat   waterbottlewaterbottle
	// better approach would be to concatinate s1 = s1+s1 then we try to find issubstring(s1s1, s2) it will be there in that 

	int i = 0;
	int j = i;
	while (s1[j] != s2[i])
	{
		x = x + s1[j];
		j++;

	}
	while (s2[i] == s1[j])
	{
		y = y + s2[i];
		i++;
		j++;
	}
	string r1 = x + y;
	string r2 = y + x;
	if (r2==s2)
		return true;
	else
		return false;
}

void integerRotation(int arr[], int n,int k)
{
	int temp;
	while(k)
	{
		temp = arr[0];
		for (int j = 0; j < n; j++)
		{
			 
			cout << "temp" <<temp<<"\n";

			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
		k--;
	}
}