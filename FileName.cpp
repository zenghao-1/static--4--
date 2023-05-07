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

	static void AnnounceCount()   //静态成员函数   可以不用创建Critter实例就可以调用，只需要加上范围解析运算符“：：”
	{
		cout << CritterCount << endl;
	}

	~Critter()
	{
		cout << "A critter is died!\n";
		--CritterCount;
	}

	static int CritterCount;   //静态成员  必须再类外初始化
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



