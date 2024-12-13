#include <iostream>
#include <string>

using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	BaseMemory(int size,char c[],int csize ) 
	{
		mem = new char[size]; 
		for (int i = 0; i < csize; i++)
		{
			mem[i] = c[i];
		}
	}

	char memorywrite(char c,int index)
	{
		mem[index] = c;
	}

	char memoryread(int index)
	{
		return mem[index];
	}
};

class ROM : private BaseMemory
{
public:
	ROM(int size,char c[], int csize) : BaseMemory(size, c, csize) {};

	char read(int index)
	{
		return memoryread(index);
	}
};

class RAM : BaseMemory
{
public:
	RAM(int size) : BaseMemory(size) {};

	void write(int index, char c)
	{
		memorywrite(index, c);
	}
	char read(int index)
	{
		return memoryread(index);
	}
};

int main()
{
	char x[5] = { 'h', 'e', 'l', 'l' , 'o' };
	ROM biosROM(1024 * 10, x, 5); // 10KB�� ROM �޸�. �迭 x���ʱ�ȭ��
	RAM mainMemory(1024*1024); // 1MB�� RAM �޸�
	// 0 �������� 4�������� biosROM���� �о� mainMemory�� ����
	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
}