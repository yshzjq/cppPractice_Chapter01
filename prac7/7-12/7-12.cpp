#include <iostream>	
#include <string>

using namespace std;

class SortedArray {
	int size; // ���� �迭�� ũ��
	int* p; // ���� �迭�� ���� ������
	void sort(); // ���� �迭�� ������������ ����
public:
	SortedArray(); // �ٴ� NULL�� size�� 0�����ʱ�ȭ
	SortedArray(SortedArray& src); // ���������
	SortedArray(int p[], int size); // ������. ���� �迭��ũ�⸦ ���޹���
	~SortedArray() { delete[] p; } // �Ҹ���
	SortedArray operator + (SortedArray& op2); // ���� �迭�� op2 �迭 �߰�
	SortedArray& operator = (const SortedArray& op2); // ���� �迭�� op2 �迭 ����
	void show(); // �迭�� ���� ���
};

SortedArray::SortedArray()
{
	size = 0;
	p = new int[100];
}

SortedArray::SortedArray(SortedArray& src)
{
	size = src.size;
	p = new int[100];

	for (int i = 0; i < size; i++)
	{
		p[i] = src.p[i];
	}
}

SortedArray::SortedArray(int p[], int size)
{
	this->size = size;
	this->p = new int[100];

	for (int i = 0; i < size; i++)
	{
		this->p[i] = p[i];
	}

	for (int i = 0; i < this->size-1; i++)
	{
		for (int j = i + 1; j < this->size; j++)
		{
			if (this->p[i] > this->p[j])
			{
				int tmp = this->p[i];
				this->p[i] = this->p[j];
				this->p[j] = tmp;
			}
		}
	}
}

SortedArray SortedArray::operator+(SortedArray& op2)
{
	int n[100];
	for (int i = 0; i < size; i++)
	{
		n[i] = p[i];
	}

	for (int i = size; i < size + op2.size; i++)
	{
		n[i] = op2.p[i - size];
	}

	for (int i = 0; i < size + op2.size - 1; i++)
	{
		for (int j = i + 1; j < size + op2.size; j++)
		{
			if (n[i] < n[j])
			{
				int tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}
		}
	}

	SortedArray tmp(n, size + op2.size);
	return tmp;
	
}

SortedArray& SortedArray::operator=(const SortedArray& op2)
{
	size = op2.size;
	for (int i = 0; i < op2.size; i++)
	{
		p[i] = op2.p[i];
	}
	return *this;
}

void SortedArray::show()
{
	cout << "�迭 ��� : ";
	for (int i = 0; i < size; i++)
	{
		cout << p[i] << ' ';
	}
	cout << '\n';
}



int main() {
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;
	c = a + b; // +3 = ������ �ۼ� �ʿ�
	// + �����ڰ� SortedArray ��ü�� �����ϹǷ� ���� ������ �ʿ�
	a.show();
	b.show();
	c.show();
}

