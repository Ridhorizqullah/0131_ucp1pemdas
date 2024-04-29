//1.berikan contoh dekrasi variabel.berikan minimal 3 variabel dengan tipe data yang berbeda

// int umur; // Deklarasi variabel umur sebagai integer
// float tinggi_badan // deklarasi variabel tinggi badan sebagai float
// char jenis kelamin // deklarasi dari sebuah variabel tipe datanya char

//2. berikan contoh minimal satu impementasi dari conditional 

//int main() {
//   int angka;
//    std::cout << "Masukkan angka: ";
//    std::cin >> angka;

//    if (angka % 2 == 0) {									//jika angka kelipatan dari 2 maka bilangannya genap
//        std::cout << "Bilangan genap" << std::endl;
//    }
//    else {
//        std::cout << "Bilangan ganjil" << std::endl;		// jika angka tidak dari kelipatan 2 maka bilangannya ganjil
//    }



//3. berikan contoh implementasi dari struct

//struct mahasiswa {  // deklarasi untuk pengelompokan struct dari variabel variabel mahasiswa
//	string nim;			// menyatakan variabel nim dengan menggunakan string
//	string nama;		//menyatakan variabel nama dengan menggunakan string
//	int jenis kelamin;	//deklarasi variabel jenis kelamin sebagai int
//	int umur;			//deklarasi variabel umur sebagai int
//};

//4. berikan contoh implementasi dari prosedur fungsi

//int luas;								// void hanya untuk lewat saja ini merupakan sebuah prosedur
//void luaspersegi (int p, int l)){     // ini merupakan parameternya
// luas = p * L
// };

// int luas persegi (int p, int l)		// adalah fungsi untuk memanggil dirinya sendiri 
// return

//5. berikan contoh implementasi dari looping

// int main()
//{
//  int i;

//  for (i = 0; i < 6; i++) {
//      cout << i << ". " << "Nama saya Ridho" << endl;
//  }

//  string arr[10			//array 5

//  for (i = 0; i > 1;--) {
//      cout << "Masukan nickname ke " << i + 1 << " = ";
//      cin >> arr[i];
//  }

//  for (i = 0; i < 5; i++) {
//      cout << "Namanya adalah = " << arr[i] << endl;
//  }

//  return 0;

//}

 //6. pada penerimaan mahasiswa baru terctaat ada 20 kandidat yang terdaftar diadakan 2 tes 

#include <iostream>
using namespace std;




int main() {

    int jumlah_mahasiswa = 20;                          
    double nilai_mtk, nilai_bhs_inggris, rata_rata;
    int nama = 20;
    int status = 20;

    std::cout << "Masukkan nilai Matematika: ";
    std::cin >> nilai_mtk;

    std::cout << "Masukkan nilai Bahasa Inggris: ";
    std::cin >> nilai_bhs_inggris;

    rata_rata = (nilai_mtk + nilai_bhs_inggris) / 2;

    if (rata_rata >= 70 || nilai_mtk > 80) {
        std::cout << "anda diterima " << std::endl;
    }
    else {
        std::cout << "tidak diterima " << std::endl;
    }

    return 0;

    std::cout << "nama: ";
    std::cin >> nama; 

    std::cout << "status: ";
    std::cin >> status;

    
}
