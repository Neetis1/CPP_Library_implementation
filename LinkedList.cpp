#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList()
{
	head = nullptr;
	tail = nullptr;
	tempos = 1;
}
template<class T>
LinkedList<T>::~LinkedList()
{
	delete head;
	delete tail;
}

template<class T>
Node<T> *LinkedList<T> :: createNode(T value)
{
	Node <T> * newNode = new Node <T>;
	newNode->data = value;
	newNode->next = nullptr;
	return newNode;
}

template<class T>
void LinkedList<T>::addLast(T value)
{
	if (head == nullptr)
	{
		Node <T> * newNode = createNode(value);
		head = newNode;
		tail = newNode;
	}
	else
	{
		Node <T> * newNode = createNode(value);
		tail->next = newNode;
		tail = newNode;
	}	
}

template<class T>
void LinkedList<T>:: addPosition(T value, T pos)
{
	//T temppos = 1;
	std::cout << "addpos";
	Node <T> *tempnode1 = new Node<T>;
	Node <T> *tempnode2 = new Node<T>;
	tempnode2 = head;
	while (tempos != pos)
	{
		std::cout << "insidewhile "<<tempos<<" "<<pos<<" "<< head->data<<"\n";
		tempos++;
		tempnode1 = tempnode2;
		tempnode2 = tempnode2->next;
	}
	Node <T> * node = createNode(value);
	node->next = tempnode2;
	tempnode1->next = node;

}

template<class T>
void  LinkedList<T>:: displayList()
{
	std::cout << "display";
	Node<T> *temp = new Node<T>;
	temp = head;
	while (temp != nullptr)
	{
		std::cout << temp->data<<"\n";
		temp = temp->next;
	}
}

template<class T>
void  LinkedList<T>::deleteFirst()
{
	if (head == nullptr)
		return;
	else if (head->next == nullptr)
		head = nullptr;
	else
		head = head->next;

}

template<class T>
void  LinkedList<T>::deleteLast()
{

	Node <T> * t1, *t2 = new Node<T>;
	t1 = head;
	while (t1->next != nullptr)
	{
		t2 = t1;
				
		t1 = t1->next;
	}
	t2->next = nullptr;
	std::cout << "deletelast " << t1->data;
}

template<class T>
void  LinkedList<T>::deletedata(T value)
{
	Node<T> * t1, *prev, *next  = new Node<T>;
	t1 = prev = head;
	while (t1->data != value)
	{
		prev = t1;
		t1 = t1->next; // 1 2 3 4 5 6
	}
	if (t1->next == nullptr)
	{
		deleteLast();
	}
	else
	{
		prev->next = t1->next;
		t1->next = nullptr;
	}
}

template<class T>
void  LinkedList<T>::findData(T value)
{
	Node <T> * Temp = new Node<T>;
	Temp = head;
	tempos = 1;
	while (Temp->data != value && Temp->next != nullptr)
	{
		Temp = Temp->next;
		tempos++;
	}
	if (Temp->next == nullptr && Temp->data != value)
		std::cout << "Element not found :( \n";
	else
		std::cout << "Element found at position" << tempos << "\n";
}

template<class T>
void  LinkedList<T>::reverseList()
{
	Node<T> * t1, *t2, *t3 = new Node<T>;

	t1=t2=t3= nullptr;

	t1 = head;
	std::cout << "print hua to hai";
	std::cout << "prev " << t1->data<<"\n";

	while (t1 != nullptr)
	{
		std::cout << "inside while loop \n";
		// 1->2->3->4->5   1<-2<-3<-4<-5
		t2 = t1->next; //t2=2		t2=3
		t1->next = t3; //t1->nullptr	t1->1
		t3 = t1;	   //t3=1		t3=2
		t1 = t2;       //t1=2		t1=3
	}
	head = t3;
}

template <class T>
int LinkedList<T>::getLength(Node <T> * head)
{	
	int len;
	if (head == nullptr)
		return nullptr;
	Node<T> * h = head;
	while (h != nullptr)
		len++;
	return len;
}
//To be continued after learning sorting tecniques
template<class T>
void  LinkedList<T>::sortList()
{

}

