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
		cin >> Lebar;
	}

	float hitungluas() {
		return panjang * Lebar;
	}
};

int main()
{
  
}

