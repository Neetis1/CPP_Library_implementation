#ifndef LINKEDLIST
#define LINKEDLIST

template <class T>
struct Node
{
	T data;
	Node <T> * next;
};

template <class T>
class LinkedList
{

	Node <T> * head, *tail;
	T tempos;
public:

	LinkedList();
	~LinkedList();
	Node<T> * createNode(T value);
	void addLast(T value);
	void addPosition(T value, T pos);
	void displayList();
	void deleteFirst();
	void deleteLast();
	void deletedata(T value);
	void findData(T value);
	void reverseList();
	//To be continued after learning sorting tecniques
	void sortList();
	int getLength(Node <T> * head);
};

#endif