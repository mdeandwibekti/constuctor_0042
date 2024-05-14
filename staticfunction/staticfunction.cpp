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

};