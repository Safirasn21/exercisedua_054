#include <iostream>
#include<string>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}

	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran : public bidangDatar {
public:
	int jejari;

	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukan jejari: ";
		cin >> jejari;
		setX(jejari);
	}

	float Luas(int jejari) {
		return 3.14 * jejari * jejari;
	}

	float Keliling(int jejari) {
		return 2 * 3.14 * jejari;
	}
};

class Bujursangkar : public bidangDatar {
public:
	int sisi;

	void input() {
		cout << "Bujursangkar dibuat" << endl;
		cout << "Masukkan sisi: ";
		int sisi;
		cin >> sisi;
		setX(sisi);
	}

	float Luas(int sisi) {
		return sisi * sisi;
	}

	float Keliling(int sisi) {
		return 4 * sisi;
	}
};

int main() {
	bidangDatar* shape;
	Lingkaran lingkaran;
	Bujursangkar bujursangkar;

	cout << "Pertama di Run" << endl;
	cout << "Setelah jejari diinput" << endl;

	shape = &lingkaran;
	shape->input();
	int jejari = shape->getX();
	cout << "Luas Lingkaran = " << lingkaran.Luas(jejari) << endl;
	cout << "Keliling Lingkaran = " << lingkaran.Keliling(jejari) << endl;

	cout << "Setelah sisi diinput" << endl;

	shape = &bujursangkar;
	int sisi = shape->getX();
	cout << "Luas Bujursangkar = " << bujursangkar.Luas(sisi) << endl;
	cout << "Keliling Bujursangkar = " << bujursangkar.Keliling(sisi) << endl;

	return 0;
}