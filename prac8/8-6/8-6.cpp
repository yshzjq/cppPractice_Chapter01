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

class MyStack : BaseArray
{
	int idx;
public:
	MyStack(int capacity) : BaseArray(capacity) { idx = 0; }

	void push(int n)
	{
		put(idx++, n);
	}

	int capacity()
	{
		return getCapacity();
	}

	int length()
	{
		return idx;
	}

	int pop()
	{
		if (idx <= 0 || idx >= 100) return -1;
		return get(--idx);
	}
};


int main()
{
	MyStack mStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>>";
		for (int i = 0; i < 5; i++) {
			cin >> n;
			mStack.push(n); // ���ÿ� Ǫ��
		}
	cout << "���ÿ뷮:" << mStack.capacity() << ", ����ũ��:" << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
		while (mStack.length() != 0) {
			cout << mStack.pop() << ' ';// ���ÿ��� ��
		}
	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
}