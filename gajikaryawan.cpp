#include <iostream>
using namespace std;

int main(){
	string nama;
	char gol;
	int jk, up, total;
	
	cout<<"masukkan nama karyawan: ";
	cin>>nama;
	cout<<"masukkan jam kerja: ";
	cin>>jk;
	cout<<"masukkan golongan: ";
	cin>>gol;

	switch(gol){
		case 'a':
		up = 5000;
		break;
		case 'b': 
		up = 7000;
		break;
		case 'c':
		up = 8000;
		break;
		case 'd':
		up = 10000;
		break;
	}
	total = up * jk;

	 if ( (jk - 48) > 0 ) {
     total = total + ((jk - 48)*4000);
  }
  cout << endl;
   cout << nama << " menerima upah Rp." << total << " per minggu";
   cout << endl;
}
