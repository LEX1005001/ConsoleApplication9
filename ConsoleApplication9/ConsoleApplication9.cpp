#include <iostream>
using namespace std;
//Задание 1
struct Node {
	int data;
	Node* next;

	Node(int data) {
		this->data = data;
		this->next = nullptr;
	}
};
//Задание 2
void print_list(Node* head) {
	if (head == nullptr) {
		return;
	}
	Node* current = head;
	while(current != nullptr) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}
//задание 3
void append(Node* head, int data) {
	Node* current = head;
	while (current->next != nullptr) {
		current = current->next;}
	current->next = new Node(data);
}
//Задание 4
void deleteLast(Node* &head) {
	if (head == nullptr) {
		return;
	}
	Node* prev = head;
	Node*current = head->next;
	while (current != nullptr) {
		prev = current;
		current = current->next;
	}
	prev->next = nullptr;
	delete current;
	current = nullptr;

}
int main()
{
	Node* head = new Node(1);
	print_list(head);
	append(head, 5);
	print_list(head);
	deleteLast(head);
	print_list(head);
}

