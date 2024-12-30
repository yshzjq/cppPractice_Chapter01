#include <iostream>

using namespace std;

class AbstractGate { // �߻�Ŭ����
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	virtual bool operation() = 0;
};

class ANDGate : public AbstractGate
{
public:
	bool operation() override { 
		if (x == true && y == true) return true;
		else return false;
	
	}
};

class ORGate : public  AbstractGate
{
public:
	bool operation() override { 
		if (x == true || y == true) return true; 
		else return false;
	
	}
};

class XORGate : public AbstractGate
{
public:
	bool operation() override { 
		if (x != y) return true; 
		else return false;
	}
};



int main()
{
	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;
	andGate.set(true, false);
	orGate.set(true, false);
	xorGate.set(true,false);
	cout.setf(ios::boolalpha); // �Ҹ� ���� "true", "false" ���ڿ��� ����� ���� ����
	cout << andGate.operation() << endl; // AND ����� false
	cout << orGate.operation() << endl; // OR ����� true
	cout << xorGate.operation() << endl; // XOR ����� true

	return 0;
}