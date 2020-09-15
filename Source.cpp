#include<iostream>
#include<string>
#include "Header.h"
using namespace std;
template<typename T>
class node {
public:
	T data;
	node<T>*next;
};
int main()
{
	node<int>*p;
	p = new node<int>;
	p = NULL;
	int choice, num;
	while (1 == 1) {
		cout << "------------------" << endl;
		cout << "1-Append" << endl;
		cout << "2-Delete" << endl;
		cout << "3-Erase(for more than 1)" << endl;
		cout << "4-Size" << endl;
		cout << "5-Print" << endl;
		cout << "------------------" << endl;
		cout << endl;
		cout << "Enter your choice : " << endl;
		cout << "--> ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Enter the number which will appended to the list : ";
			cin >> num;
			append(p, num);
			break;
		case 2:
			cout << "Enter the number which will deleted from the list : ";
			cin >> num;
			erase(p, num);
			break;
		case 3:
			cout << "Enter the number which will deleted from the list(More than one) :  ";
			cin >> num;
			deletemore(p, num);
			break;
		case 4:
			cout << "Size --> " << length(p) << endl;;
			break;
		case 5:
			writelist(p);
			break;
		}
	}
}