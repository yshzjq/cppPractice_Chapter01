#include <iostream>

using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0; // src�� �ٸ� ������ ��ȯ�Ѵ� .
	virtual string getSourceString() = 0; // src ���� ��Ī
	virtual string getDestString() = 0; // dest ���� ��Ī
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�.";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter
{
public:
	WonToDollar(double ratio) : Converter(ratio) {};

	double convert(double src) { return src / ratio; }
	string getSourceString() override { return "��"; }
	string getDestString() override { return "�޷�"; }
};

class KmToMile : public Converter
{
public:
	KmToMile(double ratio) : Converter(ratio) {};

	double convert(double src) { return src / ratio; }
	string getSourceString() override { return "Km"; }
	string getDestString() override { return "Mile"; }
};


int main()
{
	KmToMile toMile(1.609344);
	toMile.run();

}