// 1. Karena dengan algoritma, kita dapat menyelesaikan suatu masalah dengan cepat, dan efektif dengan langkah-langkah yang sistematis
// 2. statis (jumlah data/ukurannya diketahui atau tetap), dinamis (jumlah data /ukurannya bisa diubah, dihapus, atau ditambah)
// 3. Compiler (penerjemah), ukuran input, kecepatan mesin, Bahasa pemrograman, penggunaan memori
// 4. bubble sort dan insertion sort, tapi insertion sort lebih simpel dan lebih cepat dalam mengurutkan data dibanding bubble sort.
// 5. - Quadratic �Bubble sort, selection sort, insertion sort�
//    - Loglinear  �merge sort, quick sort�

#include <iostream>
using namespace std;

int shen[113];
int s;

void input()
{
	while (true)
	{
		cout << "Masukkan panjang elemen Array : ";
		cin >> s;

		if (s <= 113)
			break;
		else
			cout << "Maksimum panjang Array adalah 139" << endl;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> shen[i];
	}
}