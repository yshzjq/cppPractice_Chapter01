#include <iostream>	
#include <string>

using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }

	friend bool operator <(string title, Book book);
};


bool operator<(string title, Book book)
{
	if (title < book.title) return true;
	return false;
}


int main()
{
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸����Է��ϼ���>>";
	getline(cin, b); // Ű����κ��� ���ڿ��� å �̸��� �Է� ����
	if (b < a)
		cout << a.getTitle() << "�� " << b << "���ٵڿ� �ֱ���! " << endl;
}
