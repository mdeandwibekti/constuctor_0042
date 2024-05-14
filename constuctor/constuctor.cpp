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

void mahasiswa::PrintAll()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("lia kurnia");
	mahasiswa mhs2("asroni");
	mahasiswa mhs3("andi kurniawan");
	mahasiswa mhs4("joko purbo");
}


