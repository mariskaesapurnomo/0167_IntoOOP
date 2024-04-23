// IntoOOP2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class bangunDatar {

	//akses modifier
private:
	float panjang, lebar;
public:
	float Luas;

	void input() {		//methode input persegi panjang

		cout << "Masukkan Panjangnya = ";
		cin >> panjang;
		cout << "Masukkan Lebarnya = ";
		cin >> lebar;
	}

	float hitungluas() {
		return panjang * lebar;
	}

	void display() {
		cout << "Panjangnya = " << panjang << endl;
		cout << "Lebarnya = " << lebar << endl;
		cout << "Luasnya = " << hitungluas() << endl;
	}
};

int main()
{
	bangunDatar pp;		// deklarasi objek pp dari class bangunDatar
	pp.input();
	pp.display();

	return 0;
  
}

