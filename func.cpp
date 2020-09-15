#include<iostream>
#include<string>
#include "Header.h"
using namespace std;
template<typename T>
void append(node<T>*&front, T item) {
	if (front == NULL) {
		front = new node<T>;
		front->data = item;
		front->next = NULL;
	}
	else {
		node<T>*newnode, *curr = front;
		while (curr->next != NULL)
			curr = curr->next;
		newnode = new node<T>;
		newnode->data = item;
		newnode->next = NULL;
		curr->next = newnode;
	}
}
template<typename T>
void erase(node<T>*&front, const T&target) {
	node<T>*prev = NULL, *curr = front;
	bool found = false;
	while (found == false && curr != NULL) {
		if (curr->data == target) {
			if (prev == NULL)
				front = front->next;
			else
				prev->next = curr->next;
			found = true;
			delete curr;
		}
		else {
			prev = curr;
			curr = curr->next;
		}
	}
	if (found == false)
		cout << "Target value has not  found!!!" << endl;
	else
		cout << target << " was deleted successfully!!!" << endl;
}
template<typename T>
void writelist(node<T>*front) {
	while (front != NULL) {
		if (front->next == NULL) {
			cout << front->data;
			break;
		}
		cout << front->data << " --> ";
		front = front->next;
	}
	cout << endl;
}
template<typename T>
int length(node<T>*front) {
	int counter = 0;
	while (front != NULL) {
		counter++;
		front = front->next;
	}
	return counter;
}
template<typename T>
void deletemore(node<T>*&front, const T&target) {
	node<T>*prev = NULL, *curr = front, *deletednode;
	int i = 0;
	while (curr != NULL) {
		if (curr->data == target) {
			i = 1;
			deletednode = curr;
			if (prev == NULL) {
				front = front->next;
				curr = front;
			}
			else {
				prev->next = curr->next;
				curr = prev->next;
			}
		}
		else {
			prev = curr;
			curr = curr->next;
		}
	}
	if (i == 0)
		cout << target << " was not found!!!" << endl;
}