//#include"Searching.h"
//#include <fstream>
//
//////int main()
//////{
//////	vector<int> v {5,20,23,24,50,1};
//////
//////	//cout << linearSearch(v, 3);
//////	//cout << RBinarySearch(v,0,6,100);
//////
//////	cout << BinarySearch (v, 100);
//////
//////	//int x = 10;
//////	//int *ptr = new int;
//////	////ptr = &x;
//////	//unique pt(ptr);
//////	//
//////	//std::cout << ptr;
//////	getchar();
//////	return 0;
//////}
////
////
////using namespace std;
////
////
////
//using namespace std;
//
//class SinglyLinkedListNode {
//public:
//	int data;
//	SinglyLinkedListNode *next;
//
//	SinglyLinkedListNode(int node_data) {
//		this->data = node_data;
//		this->next = nullptr;
//	}
//};
//
//class SinglyLinkedList {
//public:
//	SinglyLinkedListNode *head;
//	SinglyLinkedListNode *tail;
//
//	SinglyLinkedList() {
//		this->head = nullptr;
//		this->tail = nullptr;
//	}
//
//	void insert_node(int node_data) {
//		SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);
//
//		if (!this->head) {
//			this->head = node;
//		}
//		else {
//			this->tail->next = node;
//		}
//
//		this->tail = node;
//	}
//};
//
//void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
//	while (node) {
//		fout << node->data;
//
//		node = node->next;
//
//		if (node) {
//			fout << sep;
//		}
//	}
//}
//
//void free_singly_linked_list(SinglyLinkedListNode* node) {
//	while (node) {
//		SinglyLinkedListNode* temp = node;
//		node = node->next;
//
//		free(temp);
//	}
//}
//
//// Complete the has_cycle function below.
//
///*
// * For your reference:
// *
// * SinglyLinkedListNode {
// *     int data;
// *     SinglyLinkedListNode* next;
// * };
// *
// */
//bool has_cycle(SinglyLinkedListNode* head)
//{
//	if (head == nullptr || head->next == nullptr)
//		return false;
//
//
//	SinglyLinkedListNode * slow = head;
//	SinglyLinkedListNode * fast = head;
//
//	while (fast != nullptr)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast->next)
//		{
//			return true;
//		}
//	}
//	return false;
//}
//SinglyLinkedListNode* CTCImiddleNode(SinglyLinkedListNode* head)
//{
//	SinglyLinkedListNode * fast = head;
//	SinglyLinkedListNode * slow = head;
//	cout << "here  ";
//	if (fast == NULL)
//		return head;
//
//	while (fast->next != NULL && fast->next->next != NULL)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//		cout << "here 2 ";
//	}
//	cout << "here 3 ";
//	if (fast->next == NULL)
//		return slow;
//	else if (fast->next->next == NULL)
//		return slow->next;
//}
//
//SinglyLinkedListNode * CTCIpartionList(SinglyLinkedListNode * node, int k)
//{
//	SinglyLinkedListNode * head=node;
//	SinglyLinkedListNode * tail=node;
//
//	while (node != NULL) 
//	{
//		SinglyLinkedListNode * nextnode = node->next;
//
//		if (node->data < k)
//		{
//			node->next = head;
//			head = node;
//		}
//		else
//		{
//			tail->next = node;
//			tail = node;
//		}
//		node = nextnode;
//	}
//	tail->next = NULL;
//	return head;
//}
//int main()
//{
//	
//
//		SinglyLinkedList* llist = new SinglyLinkedList();
//
//		int llist_count;
//		cin >> llist_count;
//		cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//		for (int i = 0; i < llist_count; i++) {
//			int llist_item;
//			cin >> llist_item;
//			cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//			llist->insert_node(llist_item);
//		}
//
//		SinglyLinkedListNode* extra = new SinglyLinkedListNode(-1);
//		SinglyLinkedListNode* temp = llist->head;
//
//		SinglyLinkedListNode* result =  CTCIpartionList(temp, 5);
//		
//		while (result != NULL) {
//			cout << result->data << " ";
//			result = result->next;
//		}
//		getchar();
//	return 0;
//}
//


 //Example program
#include <iostream>
#include <string>
#include <vector>
#include<set>
#include "StringRotation.h"

using namespace std;

vector<vector<int> > solve(int A)
{
	cout << "neti";
	try {

		cout << "Here 1st line";

		vector<vector<int> >result(A);
		for (int i = 0; i < A; i++)
		{
			cout << i <<"yoyo\n";

			result[i].resize(i+1);
		}
		if (A == 1)
		{
			result[0][0] = 1;
			cout << "result :" << result[0][0];
			cout << "hphojosjdsjkhdjksdn";
		}
		else
		{
			result[0][0] = 1;
			result[1][0] = 1;
			result[1][0] = 1;
			cout << "here 1\n";
			for (int i = 2; i < A; i++)
			{
				cout << "here 2\n";
				result[i][0] = 1;
				result[i][i] = 1;
				for (int j = 1; j <= i - 1; j++)
				{
					cout << "here 3\n";
					result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
					cout << result[i][j] << " indexs   : " << i << " " << j;
				}
			}
		}
		return result;
	}
	catch (...)
	{
		cout << "exception";
	}
}
int repeatedNumber(const vector<int> &A)
{
	int n = A.size();

	if (n == 0 || n == 1)
	{
		cout << "here1";
		return -1;
	}
	map<int, int> m;

	for (int i = 0; i < n ; i++)
	{
		m[A[i]]++;
		cout << m[A[i]] << "\n";
	}
	for (auto i : m)
	{
		if (i.second > 1)
			return i.first;
	}
	cout << "here 2 end";
	return -1;
}
int missingNumberOne(vector<int> A)
{
	int n = A.size();

	int diff = A[0] - 0;
	for (int i = 1; i < n; i++)
	{
		if ((A[i] - i) != diff)
		{
			return i + diff;
		}
	}
	return -1;
}

void missingNumbermultiple(vector <int> & A)
{
	int n = A.size();
	int diff = A[0] - 0;
	int l;
	for (int i = 1; i < n; i++)
	{
		int diff2 = A[i] - i;
		if (diff2 != diff)
		{
			while (diff < diff2)
			{
				cout << diff + i << "\n";
				diff++;
			}
		}
	}
}
void FindDuplicatesSorted(vector<int>& A)
{
	int count = 0;
	int n = A.size();

	for (int i = 0; i < n-1; i++)
	{
		int currnum = A[i];
		if (A[i] == A[i + 1])
		{
			cout << "repeat:" << currnum;
			count++;
			while(currnum == A[++i])
				count++;

			cout << " count" << count << "\n";
		}
		count = 0;	
	}
}

int * pairOfSum(vector<int>&A, int k)
{
	int * p = new int[2];
	memset(p, 0, 2);
	set<int> compliment;

	for (auto i : A)
	{
		int diff = k - i;
		if (compliment.find(diff) == compliment.end())
		{
			compliment.emplace(i);
		}
		else
		{
			p[0] = i;
			p[1] = diff;
			cout << i << " " << diff << "\n";
			return p;
		}
	}
	return p;
}
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	if (m == 0 && n == 0)
		return;
	if (m == 0)
		nums1 = nums2;

	int i = m - 1, j = n - 1;
	int k = (m + n) - 1;
	while (i >= 0 && j >= 0 && k >= 0)
	{
		if (nums1[i] > nums2[j]) {
			nums1[k] = nums1[i];
			k--;
			i--;
		}
		else {
			nums1[k] = nums2[j];
			k--;
			j--;
		}
	}
}
int main()
{

	vector<int> arr{ 1,1,1,0,0,0};
	vector<int>arr2{ 1,2,3 };

	//cout << missingNumberOne(arr)<<"\n";
	//FindDuplicatesSorted(arr);
	//int *p = pairOfSum(arr, 10);
	merge(arr, 3, arr2, 3);

	getchar();
	return 0;
}


