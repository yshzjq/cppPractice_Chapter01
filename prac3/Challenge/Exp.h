#ifndef EXP_H
#define EXP_H

// Ŭ���� �����
class Exp
{
	// ��� ����
	int base;  // ���̽�
	int exp;   // ����
public:
	// ������
	Exp();
	Exp(int _base);
	Exp(int _base, int _exp);
	
	// ��� �Լ�
	int getBase();
	int getExp();
	int getValue();
	bool equals(Exp exp);
	
};

#endif

