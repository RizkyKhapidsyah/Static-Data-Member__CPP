#include <iostream>
#include <conio.h>

using namespace std;

class Buku
{
public:
	Buku() {
		Jumlah = 0;
	}

	int dapatkanJumlah() {
		return Jumlah;
	}

	void tambahJumlah(int n) {
		this->Jumlah += n;
	}

	static int globalVariabel;
private:
	int Jumlah;
};

int Buku::globalVariabel = 7;

int main() {
	cout << "Global Variabel : " << Buku::globalVariabel << endl;

	Buku::globalVariabel = Buku::globalVariabel + 9;

	cout << "Global Variabel Setelah Penambahan : " << Buku::globalVariabel << endl;

	_getch();
	return 0;
}