#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
	static int Nim;

public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { Nim = pNim; }
	static int getNim() { return Nim; }

	mahasiswa(string pNama)
	{
		nama = pNama;
		setID();
	}
};
int mahasiswa::Nim = 0;
void mahasiswa::setID()
{
	id = ++Nim;
}
void mahasiswa::printAll()
{
	cout << "ID = " << id << endl;
	cout << "nama = " << nama << endl;
	cout << endl;
}
int main()
{
	mahasiswa mhs1("sri dadi");
	mahasiswa mhs2("budi jatmiko");

	mahasiswa::setNim(9);
	mahasiswa mhs3("andi janu");
	mahasiswa mhs4("joko wahono");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();
	return 0;

}





