#include <iostream>
#include <string>
#include <locale>

using namespace std;

class armo
{
public:
	virtual void kk() = 0;
	virtual void mk() = 0;
};

class Kos : public armo
{
private:
	int* ID2 = new int[1];
	string cen = "15";
	int col = 150;
public:
	string name = "Костюм";

	Kos()
	{
		for (int i = 0; i < 1; i++)
		{
			ID2[i] = rand() % 10000;
		}
	}

	string GetCena()
	{
		return cen;
	}

	void SetCena(string value)
	{
		cen = value;
	}

	virtual void mk()
	{
		int proch = 5, def = 15;
		cout << proch << endl << def << endl;
		int dem = (100 + 100 * (def / 100)) - rand() % 43;
		cout << dem;
	}

	virtual void kk() override
	{
		cout << name << "\nID - " << ID2[0] << "\nCost - " << cen << "$" << endl;
	}
};

class AKos : public Kos
{
private:
	int* ID = new int[1];
	string cena = "125";
	int col2 = 30;
public:
	string edit = "Военный ";

	string GetCena()
	{
		return cena;
	}

	void SetCena(string value)
	{
		cena = value;
	}

	AKos()
	{
		for (int i = 0; i < 1; i++)
		{
			ID[i] = rand() % 878;
		}
	}

	virtual void mk()
	{
		int proch = 25, def = 63;
		cout << endl << proch << endl << def << endl;
		int dem = (100 + 100 * (def / 100)) - rand() % 23;
		cout << dem;
	}

	void kk() override
	{
		cout << name << " " << edit << "\nID - " << ID[0] << "\nCost - " << "$" << cena;
	}
};



int main()
{
	setlocale(LC_ALL, "Rus");

	AKos k; Kos kk;
	k.SetCena("15");
	k.kk();
	k.mk();
	cout << endl << endl;
	kk.SetCena("125");
	kk.kk();
	kk.mk();

	return 0;
}
