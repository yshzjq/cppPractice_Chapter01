#ifndef BOX_H
#define BOX_H

class Box {
	int width, height;
	char fill; // �ڽ��� ���θ� ä��� ���� 
public:
	Box(int w, int h);
	void setFill(char f);
	void setSize(int w, int h);
	void draw(); // �ڽ��׸���
};

#endif
