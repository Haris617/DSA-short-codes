#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

node* head = nullptr;

void push(int val) {

	node* n = new node;
	n->data = val;
	n->next = nullptr;

	if (!head)
	{
		head = n;
	}

	else
	{
		n->next = head;
		head = n;
	}
}

void display()
{
	node* temp = head;

	if (!head)
	{
		cout << "link List is Empty" << endl;
		return;
	}

	while (temp != nullptr)
	{
		cout << "Data is : " << temp->data << endl;
		temp = temp->next;
	}
}

int main()
{
	push(10);
	push(20);
	push(30);

	display();

	return 0;
}
