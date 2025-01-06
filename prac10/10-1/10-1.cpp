#include <iostream>

using namespace std;

template <class T> T biggest(T x[],int n)
{
	auto max = x[0];

	for (int i = 1; i < n; i++)
	{
		if (max < x[i]) max = x[i];
	}

	return max;
}

int main()
{
	
	int x[] = { 1,10,100,5,4 };

	cout << biggest(x, 5) << endl;


}