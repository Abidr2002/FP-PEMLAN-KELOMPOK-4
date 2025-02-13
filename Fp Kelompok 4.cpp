#include <Windows.h> //system
#include <iostream>
#include <stdio.h> //printf
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void delay (void){
	int delay = 1;
	while (delay < 10000000){
		delay++;
	}
}

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void loadingScreen (string nama){	
	system("cls");
    printf("\e[?25l");

    //Set ASCII to print special character.
    //Code page 437
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    int bar1 = 177, bar2 = 219;
	
	for (int i = 1; i <= 100; i++){
		gotoxy(40,10);
		cout << "L O A D I N G . . . ." << i << "%";
		delay();
	}
	cout << endl;
	
	gotoxy(40,11);
    for(int i = 0; i < 25; i++)
    cout << (char)bar1;
    cout <<"\r";
    gotoxy(40,11);
    for(int i = 0; i < 25; i++){
        cout << (char)bar2;
        Sleep(150);
    }
    gotoxy(40,13);
    cout<<"Selamat Datang " << nama << endl;
    gotoxy(40,14);
    cout << "Have A Nice Day !" << endl;
    getch();  
}

int login(string data[], int akhir, string cari)
{
	int awal, tengah, b_flag ;
	awal = 0;
	b_flag = 0;
	while (b_flag == 0 && awal<=akhir)
      {
            tengah = (awal + akhir)/2;
            if(data[tengah] == cari)
            {
                  b_flag = 1;
                  return tengah;
                  break;
            }
            else if(data[tengah]<cari){
                  awal = tengah + 1;
            }else{
                  akhir = tengah -1;
            }
      }

   return -1;
}


int main(){
	menu :
	system("cls");
	cout << "                   +--------------------------------+                     " << endl;
	cout << "-----------------<<|SISTEM INFORMASI BANK CINTA KAYA|>>-------------------" << endl;
	cout << "                   +--------------------------------+                     " << endl;
	cout << "+----------------------------------------+" << endl;
	cout << "|PEMROGRAMAN LANJUT KELOMPOK 4 :         |" << endl;
	cout << "+----------------------------------------+" << endl;
	cout << "|DZULFIKAR AL GHOZALI (21081010160)      |" << endl;
	cout << "|TALITHA AURORA N.S. (21081010170)       |" << endl;
	cout << "|RAFANI BADRATUS SALSABILA (21081010172) |" << endl;
	cout << "|ZAIN MUZADID ZAMZAMI (21081010174)      |" << endl;
	cout << "|AHMAD HAUZAN ABID R. (21081010185)      |" << endl;
	cout << "+----------------------------------------+" << endl;
	
	string npm[5];
	npm[0]= "21081010160";
	npm[1]= "21081010170";
	npm[2]= "21081010172";
	npm[3]= "21081010174";
	npm[4]= "21081010185";
	
	string nama[5];
	nama[0]= "DZULFIKAR" ; 
	nama[1]= "TALITHA" ;
	nama[2]= "RAFANI" ;
	nama[3]= "ZAIN" ; 
	nama[4]= "ABID" ;
	
	int  p;
	string c;
	cout << "Silakan Login Terlebih Dahulu" << endl;
	cout << "Masukkan NPM : ";
	cin >> c;
	p = login(npm, 5, c);
	if (p == -1){
		cout << "+--------------------------------------------+" << endl;
		cout << "|Login Gagal! NPM Anda Salah/ Tidak Tersedia |" << endl;
		cout << "+--------------------------------------------+" << endl;
		cout << "SILAKAN COBA LAGI" << endl;
		system("Pause");
		goto menu;	
	}else{
		string akun = nama[p];
		loadingScreen(akun);
	} 
	choice :
	system("cls");
	
	//bingkai menu
	for(int i = 2; i < 100; i++){
		gotoxy(i,1);	cout << "-";
		gotoxy(i,5);	cout << "-";
		gotoxy(i,26);	cout << "-";
		gotoxy(i,30);	cout << "-";
		
	}
		
	for(int i = 2; i <= 30; i++){
		gotoxy(1,i);	cout << "|";
		gotoxy(100,i);	cout << "|";	
	}
	
	for(int i = 5; i <= 26; i++){
		gotoxy(40,i);	cout << "|";
		
	}
		gotoxy(1,1);	cout << "+";
		gotoxy(1,5);	cout << "+";
		gotoxy(1,26);	cout << "+";
		gotoxy(1,30);	cout << "+";
		gotoxy(100,1);	cout << "+";
		gotoxy(100,5);	cout << "+";
		gotoxy(100,26);	cout << "+";
		gotoxy(100,30);	cout << "+";
		gotoxy(40,5); 	cout << "+";
		gotoxy(40,26); 	cout << "+";
		
		//Teks
		gotoxy(33,3);
		cout << "SISTEM INFORMASI BANK CINTA KAYA";
		gotoxy(31,28);
		cout << "PEMROGRAMAN LANJUT E081 KELOMPOK 4";
		
		//Main Menu
		gotoxy(3,7);
		cout << "1. Cek Data Nasabah";
		gotoxy(3,8);
		cout << "2. Tambah Data Nasabah";
		gotoxy(3,9);
		cout << "3. Sorting Berdasarkan Nama";
		gotoxy(3,10);
		cout << "4. Sorting Berdasarkan No Rekening";
		gotoxy(3,11);
		cout << "5. Searching Berdasarkan Nama";
		gotoxy(3,12);
		cout << "6. Searching Berdasarkan No Rekening";
		gotoxy(3,13);
		cout << "7. Selesai / Logout";
		 	
		int pilihan;
		gotoxy(42,7);
		cout << "Masukkan Pilihan Anda : ";
		cin >> pilihan;
		
		if(pilihan > 0 && pilihan < 8){
		switch(pilihan){
			case 1 :
			break;
			
			case 2 :
			break;
			
			case 3 :
			break;
			
			case 4 :
			break;
			
			case 5 :
			break;
			
			case 6 :
			break;
			
			case 7 :
			system("cls");
			gotoxy(40,10);
			printf("---THANKS AND HAVE A NICE DAY---");
			gotoxy(40,11);
            printf("-----------KELOMPOK 4-----------\n"); 
            getch();
		}
		}else {
			gotoxy(42,9);
        	printf ("Pilihan Anda Tidak Tersedia\n");
        	gotoxy(42,10);
        	printf ("Silakan Pilih Menu yang Tersedia\n");
        	getch();
        	goto choice;
    	}
		
		
		
	getch();
}
