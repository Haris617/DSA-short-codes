#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

node* head = nullptr;
node* tail = nullptr;

void insertNode(int val)
{
	node* n = new node;
	n->data = val;
	n->next = nullptr;

	if (head == nullptr)
	{
		head = n;
		tail = n;
	}

	else
	{
		tail->next = n;
		tail = n;
	}

}

void display()
{
	cout << "Displaying Link List" << endl;

	node* temp = head;

	if (!head)
	{
		cout << "link List is Empty" << endl;
		return;
	}

	else {

		while (temp != nullptr)
		{
			cout << "Data is : " << temp->data << endl;
			temp = temp->next;
		}

	}

}

int countNodes()
{
	node* temp = head;
	int count = 0;

	if (!head)
	{
		count = 0;
	}

	while (temp != nullptr)
	{
		count++;
		temp = temp->next;
	}

	return count;
}

int main()
{
	insertNode(10);
	insertNode(20);
	insertNode(30);

	display();

	int size = countNodes();


	int *arr = new int[size];

	node* temp = head;

	for (int i = 0; i < size; i++)
	{
		arr[i] = temp->data;
		temp = temp->next;
	}

	cout << "displaying Array : " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	delete []arr;

	return 0;
}
