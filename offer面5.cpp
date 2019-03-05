//输入链表的头结点，从头到尾反过来打印每一个节点
#if 0
#include<iostream>
using namespace std;

class PrintListRever
{
public:
	class Node;
	PrintListRever()
	{
		_head = new Node();
		_head->_next = NULL;
	}

	bool IsEmpty()
	{
		if(_head->_next == NULL)
		{
			return true;
		}
		else
			return false;
	}
	void Push(int val)   //头插
	{
		Node *p = _head->_next;
		Node *q = new Node();
		q->_val = val;
		p = q->_next;
	}
	void Pop()
	{
		if(IsEmpty())
		{
			cout<<"IsEmpty"<<endl;
			return ;
		}
		Node *p = _head;
		if(p->_next != NULL)
		{
			p = NULL;
			p = p->_next;
		}
		delete p;
	}
	void PrintList()
	{
		Node *p = _head;
		if(!IsEmpty())
		{
			cout<<"IsEmpty"<<endl;
			return ;
		}
		else
		{
			cout<<p->_next->_val<<" ";
			p = p->_next;
		}
		cout<<endl;
	}	
	~PrintListRever()
	{
		while(!IsEmpty())
		{
			Pop();
		}
		delete _head;
	}
private:
	class Node
	{
	private:
		int _val;
		Node *_next;
	public:
		Node()
		{
			_next = NULL;
		}
		Node(int val)
		{
			_val = val;
			_next = NULL;
		}
		friend class PrintListRever;
	};
	Node *_head;
};


int main()
{
	PrintListRever list;
	for(int i=0; i<5; i++)
	{
		list.Push(i);
	}
	for(int i=0; i<5; i++)
	{
		list.PrintList();
	}
	return 0;
}

#endif