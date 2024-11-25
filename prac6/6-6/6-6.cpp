#include <iostream>

using namespace std;

class ArrayUtility2
{
public:
	// S1 �� S2�� ������ ���ο� �迭�� ���� �����ϰ� ������ ����
	static int* concat(int s1[], int s2[], int sumsize);
	// si���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����. �����ϴ� �迭�� ũ��� 
	// retSize�� ����. retSize�� 0�� ��� NULL ����
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size)
{
	int* arr = new int[size];

	for (int i = 0; i < size/2; i++)
	{
		arr[i] = s1[i];
	}

	for (int i = size / 2; i < size; i++)
	{
		arr[i] = s2[i - size/2];
	}

	return arr;

}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize)
{
	int n[100];

	for (int i = 0; i < 5; i++)
	{
		int j;
		for (j = 0; j < 5; j++)
		{
			if (s1[i] == s2[j])
			{
				break;
			}
		}
		if (j == size / 2)
		{
			n[retSize] = s1[i];
			retSize++;
		}
	}

	int* arr = new int[retSize];

	for (int i = 0; i < retSize; i++)
	{
		arr[i] = n[i];
	}

	return arr;
}


int main()
{
	ArrayUtility2 arrayutility;

	int arr1[5];
	int arr2[5];

	int* result1;
	int* result2;

	cout << "������ 5 �� �Է��϶�. �迭 x�� �����Ѵ�>>";

	for (int i = 0; i < 5; i++)
	{
		cin >> arr1[i];
	}

	cout << "������ 5 �� �Է��϶�. �迭 y�� �����Ѵ�>>";

	for (int i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}
	
	cout << "��ģ ���� �迭�� ����Ѵ�.\n";

	result1 = arrayutility.concat(arr1, arr2,10);

	for (int i = 0; i < 10; i++)
	{
		cout << result1[i] << ' ';
	}

	int count = 0;

	result2 = arrayutility.remove(arr1, arr2, 10, count);

	cout << "\n�迭 x[]���� y[]�� �� ���������Ѵ�. ������ " << count << '\n';

	for (int i = 0; i < count; i++)
	{
		cout << result2[i] << ' ';
	}

	delete[] result1;
	delete[] result2;

	return 0;
}

