#include <iostream>
#include "Box.h"
using namespace std;

int main() {
	Box b(10, 2);
	b.draw(); // �ڽ����׸���.
	cout << endl;
	b.setSize(7, 4); // �ڽ���ũ�⸦�����Ѵ�.
	b.setFill('^'); // �ڽ��� ���θ�ä�﹮�ڸ� �κ����Ѵ�.
	b.draw(); // �ڽ����׸���.
}
