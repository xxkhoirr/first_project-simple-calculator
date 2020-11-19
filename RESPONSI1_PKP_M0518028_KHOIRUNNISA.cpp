#include <stdio.h>  // #include merupakan Suatu syantax untuk memberi tahu kepada kompilator
					//Memberitahukan compiler agar menggunakan file header stdio.h yang ada pada direktori file-file header
					// <stdio.h> Merupakan singkatan dari standar input output operasi yang digunakan bahasa C
#include <math.h> //file header yang berfungsi untuk operasi matematika
#include <stdlib.h> //file header yang berfungsi untuk operasi pembanding dan operasi konversi.
#define N 3 //#define digunakan untuk mendefinisikan makro 
			//mendeklarasikan variabel N ke program dengan nilai 3

void maxmin(int arr1[], int batas, int *max, int *min ); //memdeklarasikan fungsi diluar fungsi main
int main (){ //Menyatakan awal eksekusi program
	int pil1,pil2,q,menu,opsi,arr2[N], i, besar, kecil; // mendeklarasikan variabel global pil1,pil2,q,menu,opsi

	printf("\t RESPONSI 1 \n"); // mencetak tab, 'RESPONSI 1' , membuat baris baru
	printf("Surakarta, 12 November 2018\n"); // memcetak Surakarta, 12 November 2018
	printf("::::::::::::::::::::::::::::::\n"); // mencetak ::::::::::::::::::::::::::::::
	printf("KHOIRUNNISA / M0518028\n"); // mencetak 'KHOIRUNNISA / M0518028'
	printf("::::::::::::::::::::::::::::::\n"); // mencetak ::::::::::::::::::::::::::::::
	do{  // merupakan suatu perulangan, program akan terus melakukan perulanagan hingga syarat while bernilai salah,statemen program akan dijalankan setidaknya sekali 
	printf("===============Program Gabungan=======================\n");  // mencetak ===============Program Gabungan=======================
	printf("Menu :\n"); // mencetak menu:
	printf("1. Program 2 variabel\n"); // mencetak 1. Program 2 variabel
	printf("2. Program 3 variabel\n"); // mencetak 2. Program 3 variabel
	printf("Silahkan masukkan pilihan (1-2) : "); // mencetak Silahkan masukkan pilihan (1-2) : 
	scanf("%d",&pil1); // mmemasukan input 
	printf("\n"); // mencetak satu baris baru yang kosong
		
	if(pil1==1){ // if merupakan salah satu percabangan, Fungsi if digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan
				// if akan bekerja jika kondisi variabel pil1=1 terpenuhi.
	char menu; // mendeklarasikan variabel menu bertipe data karakter
	menu; // label 
		int pil2; // mendeklarasikan variabel pil2 dengan tipe data integer 
	printf("Opsi: \n"); // mencetak Opsi: 
	printf("1. Program Penjumlahan\n"); // mencetak 1. Program Penjumlahan
	printf("2. Program Pengurangan\n"); // mencetak 2. Program Pengurangan
	printf("3. Program Perkalian\n"); // mencetak 3. Program Perkalian
	printf("4. Program Pembagian\n"); // mencetak 4. Program Pembagian
	printf("5. Program Modulo\n"); // mencetak 5. Program Modulo
	printf("6. Program Pertukaran\n"); // mencetak 6. Program Pertukaran
	printf("Silahkan masukkan pilihan (1-6) : "); // mencetak Silahkan masukkan pilihan (1-6) : 
	scanf("%d",&pil2); // mmemasukan input 
	printf("\n");	// mencetak satu baris baru yang kosong
	switch (pil2){ //pengambilan keputusan pil2
		float a,b; // mendeklarasikan variabel a dan b bertipe data float
		case 1 :printf("==============================\n"); //case merupakan salah satu percabangan, Fungsi case digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // mencetakn ========================================
				printf("__________PENJUMLAHAN__________\n"); // mencetak __________PENJUMLAHAN__________
				printf("Masukkan nilai1: "); scanf("%f",&a); // mencetak Masukkan nilai1: // meminta input data nilai1
				printf("Masukkan nilai2: "); scanf("%f",&b); // mencetak Masukkan nilai2: // meminta input data nilai2
				printf("Hasil:%0.2f\n ",a+b);  //mencetak hasil pertambahan a +b  dengan tipe data float
				printf("==============================\n"); break; // mencetak ============================== // break memberhentikan secara paksa percabangan
				
		case 2 :printf("==============================\n"); //case merupakan salah satu percabangan, Fungsi case digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // mencetakn ========================================
				printf("__________PENGURANGAN__________");// mencetak __________PENGURANGAN__________
				printf("Masukkan nilai1: "); scanf("%f",&a);// mencetak Masukkan nilai1: // meminta input data nilai1
				printf("Masukkan nilai2: "); scanf("%f",&b);// mencetak Masukkan nilai2: // meminta input data nilai2
				printf("Hasil:%0.2f\n ",a-b); //mencetak hasil perngurangan a -b  dengan tipe data float
				printf("=============================="); break;// mencetak ============================== // break memberhentikan secara paksa percabangan
				
		case 3 :printf("==============================\n"); //case merupakan salah satu percabangan, Fungsi case digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // mencetakn ========================================
				printf("__________PERKALIAN__________\n");// mencetak __________PERKALIAN_________
				printf("Masukkan nilai1: "); scanf("%f",&a); // mencetak Masukkan nilai1: // meminta input data nilai1
				printf("Masukkan nilai2: "); scanf("%f",&b); // mencetak Masukkan nilai2: // meminta input data nilai2
				printf("Hasil:%0.2f\n ",a*b);//mencetak hasil perkalian a*b  dengan tipe data float
				printf("=============================="); break;// mencetak ============================== // break memberhentikan secara paksa percabangan
				
		case 4 :printf("==============================\n"); //case merupakan salah satu percabangan, Fungsi case digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // mencetakn ========================================
				printf("__________PEMBAGIAN__________\n");// mencetak __________PEMBAGIAN_________
				printf("Masukkan nilai1: "); scanf("%f",&a); // mencetak Masukkan nilai1: // meminta input data nilai1
				printf("Masukkan nilai2: "); scanf("%f",&b); // mencetak Masukkan nilai2: // meminta input data nilai2
				printf("Hasil:%0.2f\n ",a/b);//mencetak hasil pembagian a/b  dengan tipe data float
				printf("=============================="); break;// mencetak ============================== // break memberhentikan secara paksa percabangan
				
		case 5 :printf("==============================\n"); //case merupakan salah satu percabangan, Fungsi case digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // mencetakn ========================================
				printf("__________MODULO__________\n"); // mencetak __________PEMBAGIAN_________
				int A,B; //mendeklarasikan variabel A dan B dengan 
				printf("Masukkan nilai1: "); scanf("%d",&A); // mencetak Masukkan nilai1: // meminta input data nilai1
				printf("Masukkan nilai2: "); scanf("%d",&B); // mencetak Masukkan nilai2: // meminta input data nilai2
				printf("Hasil:%d\n ",A%B); //mencetak hasil pembagian A%B dengan tipe data float
				printf("=============================="); break;// mencetak ============================== // break memberhentikan secara paksa percabangan
				
		case 6 :printf("==============================\n");//case merupakan salah satu percabangan, Fungsi case digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // mencetakn ========================================
				printf("__________PERTUKARAN__________\n");// mencetak __________PERTUKARAN_________
				int angka1,angka2; // mendeklarasikan angka1 dan angka2 dengan tipe data integer
				printf("Masukkan nilai1: "); scanf("%d",&angka1);// mencetak Masukkan nilai1: // meminta input data nilai1
				printf("Masukkan nilai2: "); scanf("%d",&angka2);// mencetak Masukkan nilai2: // meminta input data nilai2
				angka1=angka1+angka2; // mendeklarasikan nilai dari angka1 yang baru adalah sama dengan angka1 ditambah angka2
				angka2=angka1-angka2; //mendeklarasikan nilai dari angka2 yang baru adalah sama dengan angka1 dikurangi angka2
				angka1=angka1-angka2; //mendeklarasikan nilai dari angka1 yang baru adalah sama dengan angka1 dikurangi angka2
				printf("Nilai1 setelah pertukaran: %d\n",angka1); // mencetak Nilai1 setelah pertukaran:
				printf("Nilai2 setelah pertukaran: %d\n",angka2);// mencetak Nilai2 setelah pertukaran:
				printf("==============================\n"); break;// mencetak ============================== // break memberhentikan secara paksa percabangan
		} // mengakhiri program percabangan switch
	} // mengakhiri program percabangan if
	
	else if(pil1==2){ //Fungsi ini digunakan jika sudah tidak ada kondisi yang memenuhi syarat pada if. program ini akan jalan ketika pil1=2
	int pil2,c; // mendeklarikan variabel pil2 dan c dengan tipe data integer
	printf("Opsi: :\n"); // mencetak Opsi: 
	printf("1. Program Penjumlahan\n"); // mencetak 1. Program Penjumlahan
	printf("2. Program Perkalian\n"); // mencetak 2. Program Perkalian
	printf("3. Program Pengurutan\n"); //  mencetak 3. Program Pengurutan
	printf("4. Program Pencarian Bilangan Terkecil dan Terbesar\n"); // mencetak 4. Program Pencarian Bilangan Terkecil dan Terbesar
	printf("Silahkan masukkan pilihan (1-4) : "); // mencetak Silahkan masukkan pilihan (1-4) : 
	scanf("%d",&pil2); // meminta inputan
	printf("\n");	//mrncetak satu baris baru kosong
	switch (pil2){ //pengambilan keputusan pil2
		float a,b,c; //mendeklarasikan variabel a,b,c dengan tipe data float
		case 1 :printf("==============================");//case merupakan salah satu percabangan, Fungsi case digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // mencetakn ========================================
				printf("__________PENJUMLAHAN__________"); // mencetak __________PENJUMLAHAN_________
				printf("Masukkan nilai1: "); scanf("%f",&a); //mencetak Masukkan nilai1:  // meminta input data nilai1
				printf("Masukkan nilai2: "); scanf("%f",&b); //mencetak Masukkan nilai2:  // meminta input data nilai2
				printf("Masukkan nilai3: "); scanf("%f",&c); //mencetak Masukkan nilai3:  // meminta input data nilai3
				printf("Hasil:%0.2f\n ",a+b+c); // mencetak hasil penjumlahan a+b+c
				printf("==============================");break; // mencetak ============================== // break memberhentikan secara paksa percabangan
		case 2 :printf("==============================");//case merupakan salah satu percabangan, Fungsi case digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // mencetakn ========================================
				printf("__________PERKALIAN__________"); // mencetak __________PERKALIAN_________
				printf("Masukkan nilai1: "); scanf("%f",&a); //mencetak Masukkan nilai1:  // meminta input data nilai1
				printf("Masukkan nilai2: "); scanf("%f",&b);  //mencetak Masukkan nilai2:  // meminta input data nilai2
				printf("Masukkan nilai3: "); scanf("%f",&c); //mencetak Masukkan nilai3:  // meminta input data nilai3
				printf("Hasil:%0.2f\n ",a*b*c); 
				printf("==============================");break; // mencetak ============================== // break memberhentikan secara paksa percabangan
		case 3 :printf("==============================\n");//case merupakan salah satu percabangan, Fungsi case digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // mencetakn ========================================
				printf("__________PENGURUTAN__________\n");  // mencetak __________PENGURUTAN_________
				printf("Masukkan nilai1: "); scanf("%f",&a); //mencetak Masukkan nilai1:  // meminta input data nilai1
				printf("Masukkan nilai2: "); scanf("%f",&b); //mencetak Masukkan nilai2:  // meminta input data nilai2
				printf("Masukkan nilai3: "); scanf("%f",&c); //mencetak Masukkan nilai3:  // meminta input data nilai3
				if (a<=b && a<= c){  // if merupakan salah satu percabangan, Fungsi if digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // Pada program ini akan berjalan jika a<=b dan a<= c
					if (b <= c){ // if merupakan salah satu percabangan, Fungsi if digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // Pada program ini akan berjalan jika b<=c
						printf("Urutan bilangan dari yang terkecil : %f %f %f\n",a,b,c); // mencetak Urutan bilangan dari yang terkecil :
					} //mengakhiri percabangan
					else { //Fungsi ini digunakan jika sudah tidak ada kondisi yang memenuhi syarat pada if
						printf("Urutan bilangan dari yang terkecil : %f %f %f\n",a,c,b); // mencetak Urutan bilangan dari yang terkecil :
					} //mengakhiri percabangan
				} //mengakhiri percabangan
				else if (b<=a && b<=c){ //Fungsi ini digunakan jika sudah tidak ada kondisi yang memenuhi syarat pada if // pada program ini akan berjalan ketika b<=a dan  b<=c
					if(a<=c){ // if merupakan salah satu percabangan, Fungsi if digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // Pada program ini akan berjalan jika a<=c
						printf("Urutan bilangan dari yang terkecil : %f %f %f\n",b,a,c);	// mencetak Urutan bilangan dari yang terkecil :
					}//mengakhiri percabangan
					else //Fungsi ini digunakan jika sudah tidak ada kondisi yang memenuhi syarat pada if
					printf("Urutan bilangan dari yang terkecil : %f %f %f\n",b,c,a);	// mencetak Urutan bilangan dari yang terkecil :
				} //mengakhiri percabangan
				else { //Fungsi ini digunakan jika sudah tidak ada kondisi yang memenuhi syarat pada if
					if(a<=b){ // if merupakan salah satu percabangan, Fungsi if digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // Pada program ini akan berjalan jika a<=b
						printf("Urutan bilangan dari yang terkecil : %f %f %f\n",c,a,b); // mencetak Urutan bilangan dari yang terkecil :
					} //mengakhiri percabangan 
					else { //Fungsi ini digunakan jika sudah tidak ada kondisi yang memenuhi syarat pada if
						printf("Urutan bilangan dari yang terkecil : %f %f %f\n",c,b,a); // mencetak Urutan bilangan dari yang terkecil :
					} //mengakhiri percabangan 
				} //mengakhiri percabangan 
				printf("==============================\n"); break; // mencetak ============================== // break memberhentikan secara paksa percabangan
		case 4 :printf("==============================\n"); //case merupakan salah satu percabangan, Fungsi case digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // mencetakn ========================================
				printf("__________PENCARIAN BILANGAN TERKECIL DAN TERBESAR__________\n"); //mencetak __________PENCARIAN BILANGAN TERKECIL DAN TERBESAR__________
				for(i=0; i<N; i++){ // For adalah salah satu fungsi perulanagan.pada fungsi ini, melakukan perulangan i  dimulai dari 0 hingga batas N
					printf("Masukkan Angka : ", N); //mencetak Masukkan Angka :
					scanf("%d", &arr2[i]); // meminta inputan 
					} //mengakhiri perulangan
	
				maxmin(arr2, N, &besar, &kecil); // berisi variabel 
				printf("\nTerbesar : %d\n", besar); // mencetak Terbesar :
				printf("Terkecil : %d\n", kecil); // mencetak Terkecil :
				printf("==============================");break; // mencetak ============================== // break memberhentikan secara paksa percabangan
					} //mengakhiri suatu program 
				} //mengakhiri suatu program 

		} while (q!='q'); // kondisi saat perulangan
			return 0;	// mengembalikan nilai ke 0
	}	//mengakhiri suatu program

void maxmin(int arr1[], int batas, int *max, int *min ) { // melakukan rekursi //memdeklarasikan fungsi diluar fungsi main
	int i; // mendeklarasikan variabel i dengan tipe data integer
	*max = *min = arr1[0]; // adalah alamat dari max=, alamat dari min= arr1[0]. pointer (*) digunkaan  untuk mencari alamat dari
	for(i=0; i<batas; i++){ // For adalah salah satu fungsi perulanagan.pada fungsi ini, melakukan perulangan i  dimulai dari 0 hingga batas batas
		if(arr1[i] > *max)  // if merupakan salah satu percabangan, Fungsi if digunakan untuk menunjukkan jika sebuah kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan // Pada program ini akan berjalan jika arr1[i] > *max
			*max = arr1[i]; // mendeklarasikan alamat dari max  berisi arr1[i]
		else if(arr1[i] < *min) //Fungsi ini digunakan jika sudah tidak ada kondisi yang memenuhi syarat pada if. program ini akan berjalan jika arr1[i] < *min
			*min = arr1[i]; // mendeklarasikan alamat dari min  berisi arr1[i]
	} // mengakhiri  perulangan 
} // mengakhiri suatu program 
