#include <iostream>

int main()
{
	const int minValue = 1;
	const int maxValue = 10;

	int resultValue = 0;

	for (int value = minValue;value<=maxValue;value++)
	{
		resultValue += value;
	}

	std::cout << minValue << "���� " << maxValue << "���� ���� ����� " << resultValue << "�Դϴ�.";

	return 0;
}