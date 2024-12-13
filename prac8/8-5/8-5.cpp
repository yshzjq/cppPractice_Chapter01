#include <iostream>
#include <string>

using namespace std;

class BaseArray {
private:
	int capacity; // �迭�� ũ��
	int* mem; // ���� �迭�� ����� ���� �޸��� ������
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : private BaseArray {
	int idx;
	int front;
public:
	MyQueue(int capacity) : BaseArray(capacity) { idx = front = 0; }

	void enqueue(int n)
	{
		put(idx, n);
		idx++;
	};

	int capacity()
	{
		return getCapacity();
	}

	int length()
	{
		return idx - front;
	}

	int dequeue()
	{
		if (idx != front)
		{
			return get(front++);
		}
	}

};


int main()
{
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n); // ť�� ����
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť��ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;

	return 0;
}