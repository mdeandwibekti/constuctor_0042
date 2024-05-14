#include <iostream>
#include <string>
using namespace std;


class mahasiswa
{

public:
	static int nim;
	int id;
	string nama;

	void SetID();

	void PrintAll();
	mahasiswa(string pnama)
	{
		nama = pnama;
		SetID();
	}
};

int mahasiswa::nim = 113;
void mahasiswa::SetID()
{
	id = ++nim;
}
