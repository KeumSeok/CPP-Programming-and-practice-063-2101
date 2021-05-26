#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

class chinese {
private:
	string food[8] = {"탕수육","깐풍기","칠리새우","짬뽕","사천탕수육","짜장면","유린기","북경식탕수육"};
public:
	void ShowRandom() {
		int i = rand() % food->size() ; //0부터 (M-1)까지의 수가 생성됨
		cout << food[i] << endl;
	}
	void ShowNumber() {

	}
	void ShowAddress() {

	}
};

class japanese {
private:
	string food[8] = { "초밥","돈부리","참치회","소바","모코노미야끼","라멘","장어덮밥","우동" };
public:
	
};

int main()
{
	int k;
	srand((unsigned int)time(NULL)); //시드값 설정해주기.
	
	cout << "메뉴선택프로그램" << endl;
	cout << "1.중식 2.일식 3.고기 4.라면" << endl;
	cin >> k;



	switch (k) {
	case 1:
	{
		cout << "중식이 선택됐습니다." << endl;
		chinese chin;
		chin.ShowRandom();
		break;
	}

	case 2:
	{
		cout << "일식이 선택됐습니다." << endl;
		japanese jap;
		break;
	}
	
}
	
	return 0;
}