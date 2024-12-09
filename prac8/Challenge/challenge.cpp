#include <iostream>
#include <string>

using namespace std;

class Product
{
	int id;
	string des;
	string producter;
	int price;

	string type;
public:
	Product() {};
	Product(int id, string des, string producter, int price, string type)
	{
		this->id = id;
		this->des = des;
		this->producter = producter;
		this->price = price;

		this->type = type;
	}

	void ProductShow()
	{
		cout << "---- ��ǰID : " << id << '\n';
		cout << "��ǰ���� : " << des << '\n';
		cout << "������ : " << producter << '\n';
		cout << "���� : " << price << '\n';
	}

	string getType()
	{
		return type;
	}
};

class Book : public Product
{
	int ISBN;
	string writer;
	string title;
public:
	Book(int id, string des, string producter, int price, int ISBN, string writer, string title, string type = "Book") : Product(id, des, producter, price, type)
	{
		this->ISBN = ISBN;
		this->writer = writer;
		this->title = title;
	}
	void Bookshow()
	{
		cout << "å���� : " << title << '\n';
		cout << "���� : " << writer << '\n';
		cout << "ISBN : " << ISBN << '\n';
	}

	int getISBN()
	{
		return ISBN;
	}

	string getWriter()
	{
		return writer;
	}

	string getTitle()
	{
		return title;
	}
};

class CompactDisc : public Product
{
	string title;
	string singer_name;
public:
	CompactDisc() {};
	CompactDisc(int id, string des, string producter, int price, string title, string singer_name) : Product(id,des,producter,price,"CD")
	{
		this->title = title;
		this->singer_name = singer_name;
	};

	void CDshow()
	{
		cout << "�ٹ����� : " << title << '\n';
		cout << "���� : " << singer_name << '\n';
	}
};

class ConversationBook : public Book
{
	string language;
public:
	ConversationBook(int id, string des, string producter, int price, int ISBN, string writer, string title,string language) : Book(id, des, producter, price,ISBN,writer,title, "CBook")
	{
		this->language = language;
	}

	void CBookshow()
	{
		cout << "å���� : " << getTitle() << '\n';
		cout << "���� : " << getWriter() << '\n';
		cout << "��� : " << language << '\n';
		cout << "ISBN : " << getISBN() << '\n';
	}
};

int main()
{
	int idx = 0;

	Product* product[100] = {};


	cout << "***** ��ǰ ���� ���α׷��� �۵��մϴ�. *****\n";

	while (true)
	{
		int n;
		cout << "��ǰ �߰�(1), ��� ��ǰ ��ȸ(2), ������(3) ? ";
		cin >> n;

		if (n == 1)
		{
			cout << "��ǰ ���� å(1), ����CD(2), ȸȭå(3) ? ";
			cin >> n;
			cin.ignore();
			string des;
			string producter;
			int price;
			int ISBN;
			string writer;
			string title;
			string singer_name;
			string language;

			
			


			cout << "��ǰ����>>";
			getline(cin, des, '\n');
			cout << "������>>";
			getline(cin, producter, '\n');

			cout << "����>>";
			cin >> price;
			cin.ignore();
			

			if (n == 2)
			{
				cout << "�ٹ�����>>";
				getline(cin, title, '\n');
				cout << "����>>";
				getline(cin, singer_name, '\n');

				CompactDisc* cd = new CompactDisc(idx, des, producter, price, title, singer_name);
				product[idx] = (Product*)cd;
			}
			else
			{
				cout << "å����>>";
				getline(cin, title, '\n');
				cout << "����>>";
				getline(cin, writer, '\n');
				if (n == 3)
				{
					cout << "���>>";
					getline(cin, language, '\n');
				}
				cout << "ISBN>>";
				cin >> ISBN;

				if (n == 3)
				{
					ConversationBook* cbook = new ConversationBook(idx, des, producter, price,ISBN, title, writer, language);
					product[idx] = cbook;
				}
				else if (n == 1)
				{
					Book* book = new Book(idx, des, producter, price, ISBN, title, writer);
					product[idx] = book;
				}
			}
			idx++;
		}
		else if (n == 2) // ��� ��ǰ ��ȸ
		{
			for (int i = 0; i < idx; i++)
			{
				product[i]->ProductShow();

				if (product[i]->getType() == "CD")
				{
					CompactDisc* cd = (CompactDisc*)product[i];
					cd->CDshow();
				}
				else if (product[i]->getType() == "Book")
				{
					Book* book = (Book*)product[i];
					book->Bookshow();
				}
				else if (product[i]->getType() == "CBook")
				{
					ConversationBook* book = (ConversationBook*)product[i];
					book->CBookshow();
				}

			}
		}
		else // ������
		{
			break;
		}

		
	}






	return 0;
}