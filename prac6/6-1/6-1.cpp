#include <iostream>

using namespace std;

int add(int arr[], int size)
{
	int result = 0;

	for (int i = 0; i < size; i ++)
	{
		result += arr[i];
	}

	return result;
}

int add(int arr1[], int size1, int arr2[], int size2 = 5)
{
	int result = 0;

	for (int i = 0; i < size1; i++)
	{
		result += arr1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		result += arr2[i];
	}
	
	return result;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	
	int c = add(a, 5); // �迭 a�� ������ ��δ��� �� ����
	int d = add(a, 5, b); // �迭 a�� b�� ��������� ���� �� ����
	cout << c << endl; // 15 ���
	cout << d << endl; // 55 ��
}

