#include <iostream>
using namespace std;

int a[20];                  //Deklarasi array a dengan ukuran 20
int n;                      //Deklarasi Variabel n untuk menyimpan banyyaknya elemen pada array

void input() {				//prosedure untuk input
	while (true) {			//looping
		cout << "Masukan banyaknya elemen pada Array : ";	//Outputt ke layar
		cin >> n;			//input dari pengguna
		if (n <= 20)		//jika n kurang dari atau sama dengan 20
			break;			//keluar dari loop

	}

}