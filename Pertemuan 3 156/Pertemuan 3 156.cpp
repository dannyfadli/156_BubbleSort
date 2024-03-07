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
		else {				//jika n Lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";   //Output ke layar

		}
	}
	cout << endl;                            //Ouput Baris kosong
	cout << "====================" << endl;  //output ke Layar
	cout << "Maskan elemmen Array" << endl;  //Output ke layar

	for (int i = 0; i < n; i++) {			//looping dengan i dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": "; //Output ke Layar
		cin >> a[i];						//input dari pengguna 
	}
}

void display() {						//Prosedur untuk menampilkan hasil
	cout << endl;						//Out baris kosong
	cout << "=======================" << endl; //Output ke layar
	cout << "Element Array yang telah tersusun" << endl;	//Output ke layar
	for (int j = 0; j < n; j++) {		//Looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;			//looping ke layar
	}
	cout << endl;						//Output ke layar
}

void bubblesortArraay() {			//prosedur untuk mengurutkan array dengan metode bubblesort
	for (int i = 1; i < n; i++) {			//looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - 1; j++) {	//looping dengan j dimulai dari 0 hingga n-1
			if (a[j] > a[j + 1]) {			//simpan nilai a[j] leboh besar dari a [j+1]
				int temp = a[j];			//simpan nilai a[j] ke variable sementara temp
				a[j] = a[j + 1];			//Assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;			//Assigm nilai temp ke a[j+1]

			}

		}

	}

}