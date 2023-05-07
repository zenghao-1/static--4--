#include <iostream>
using namespace std;

class Critter
{
public:

	Critter()
	{
		cout << "A critter is born!\n";
		CritterCount++;
	}

	static void AnnounceCount()   //��̬��Ա����   ���Բ��ô���Critterʵ���Ϳ��Ե��ã�ֻ��Ҫ���Ϸ�Χ�����������������
	{
		cout << CritterCount << endl;
	}

	~Critter()
	{
		cout << "A critter is died!\n";
		--CritterCount;
	}

	static int CritterCount;   //��̬��Ա  �����������ʼ��
};

int Critter::CritterCount = 0;

int main()
{
	Critter::AnnounceCount();

	{
	Critter* crit = new Critter;
	Critter::AnnounceCount();
	delete crit;
    }
	Critter::AnnounceCount();

	cout << "--------------------------" << endl;
	
	system("pause");

	cout << "--------------------------" << endl;

	Critter* crit = new Critter;
	Critter::AnnounceCount();
	delete crit;

}



