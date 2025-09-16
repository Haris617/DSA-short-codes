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
	node* temp = head;

	if (!head)
	{
		cout << "link List is Empty" << endl;
		return;
	}

	else {

		while (temp != nullptr)
		{
			cout << "Data is " << temp->data << endl;
			temp = temp->next;
		}

	}

}

int main()
{
	int arr[5] = { 1,2,3,4,5 };

	

	cout << "Array is : ";

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\nCopying Data of Array to Link List : " << endl;

	for (int i = 0; i < 5; i++)
	{
		insertNode(arr[i]);
	}

	display();

	return 0;
}
