#include <iostream>
#include <string>

using namespace std;

class Morse {
	string alphabet[26]; // ���ĺ��Ǹ� ��ȣ����
	string digit[10]; // ������ �� ��ȣ ����
	string slash, question, comma, period, plus, equal; // Ư�� ������ �� ��ȣ ����
public:
	Morse(); // alphabet[], digit[] �迭 �� Ư�� ������ �� ��ȣ �ʱ�ȭ
	void text2Morse(string text, string& morse); // ���� �ؽ�Ʈ�� �� ��ȣ�� ��ȯ
	bool morse2Text(string morse, string& text); // �� ��ȣ�� ���� �ؽ�Ʈ�� ��ȯ
};

Morse::Morse()
{
    // ���ĺ� �� ��ȣ �ʱ�ȭ(�ʱ�ȭ�� GPT ������ ���� ����)
    alphabet[0] = ".-";    // A
    alphabet[1] = "-...";  // B
    alphabet[2] = "-.-.";  // C
    alphabet[3] = "-..";   // D
    alphabet[4] = ".";     // E
    alphabet[5] = "..-.";  // F
    alphabet[6] = "--.";   // G
    alphabet[7] = "....";  // H
    alphabet[8] = "..";    // I
    alphabet[9] = ".---";  // J
    alphabet[10] = "-.-";  // K
    alphabet[11] = ".-.."; // L
    alphabet[12] = "--";   // M
    alphabet[13] = "-.";   // N
    alphabet[14] = "---";  // O
    alphabet[15] = ".--."; // P
    alphabet[16] = "--.-"; // Q
    alphabet[17] = ".-.";  // R
    alphabet[18] = "...";  // S
    alphabet[19] = "-";    // T
    alphabet[20] = "..-";  // U
    alphabet[21] = "...-"; // V
    alphabet[22] = ".--";  // W
    alphabet[23] = "-..-"; // X
    alphabet[24] = "-.--"; // Y
    alphabet[25] = "--.."; // Z

    // ���� �� ��ȣ �ʱ�ȭ
    digit[0] = "-----"; // 0
    digit[1] = ".----"; // 1
    digit[2] = "..---"; // 2
    digit[3] = "...--"; // 3
    digit[4] = "....-"; // 4
    digit[5] = "....."; // 5
    digit[6] = "-...."; // 6
    digit[7] = "--..."; // 7
    digit[8] = "---.."; // 8
    digit[9] = "----."; // 9

    // Ư�� ���� �� ��ȣ �ʱ�ȭ
    slash = "-..-.";
    question = "..--..";
    comma = "--..--";
    period = ".-.-.-";
    plus = ".-.-.";
    equal = "-...-";
}

void Morse::text2Morse(string text, string& morse)
{
    for (char c : text)
    {
        if (isalpha(c))
        {
            cout << alphabet[toupper(c) - 'A'];
        }
        else if (isdigit(c))
        {
            cout << digit[c - '0'];
        }
        else
        {
            if (c == '/') { cout << slash; }
            else if (c == '?') { cout << question; }
            else if (c == ',') { cout << comma; }
            else if (c == '.') { cout << period; }
            else if (c == '+') { cout << plus; }
            else if (c == '=') { cout << equal; }
        }

        cout << ' ';
    }
}



int main()
{
	string str;
    string result1;
    string result2;

	cout << "�Ʒ��� ���� �ʽ�Ʈ�� �Է��ϼ���. �𽺺�ȣ�� �ٲߴϴ�.\n";

	getline(cin, str);

    Morse morse;

    morse.text2Morse(str, result1);

    cout << result1 << "\n\n";

    cout << "�� ��ȣ�� �ٽ� ���� �ؽ�Ʈ�� �ٲߴϴ�.\n";

    morse.text2Morse(result1, result2);

    cout << result2;

}

