#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

class chinese {
private:
	string food[8] = {"������","��ǳ��","ĥ������","«��","��õ������","¥���","������","�ϰ��������"};
public:
	void ShowRandom() {
		int i = rand() % food->size() ; //0���� (M-1)������ ���� ������
		cout << food[i] << endl;
	}
	void ShowNumber() {

	}
	void ShowAddress() {

	}
};

class japanese {
private:
	string food[8] = { "�ʹ�","���θ�","��ġȸ","�ҹ�","���ڳ�̾߳�","���","����","�쵿" };
public:
	
};

int main()
{
	int k;
	srand((unsigned int)time(NULL)); //�õ尪 �������ֱ�.
	
	cout << "�޴��������α׷�" << endl;
	cout << "1.�߽� 2.�Ͻ� 3.��� 4.���" << endl;
	cin >> k;



	switch (k) {
	case 1:
	{
		cout << "�߽��� ���õƽ��ϴ�." << endl;
		chinese chin;
		chin.ShowRandom();
		break;
	}

	case 2:
	{
		cout << "�Ͻ��� ���õƽ��ϴ�." << endl;
		japanese jap;
		break;
	}
	
}
	
	return 0;
}