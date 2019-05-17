#include <iostream>
#include <fstream> //ofstream, ifstream, fstream

using namespace std;


int main(){
	ofstream myFile;

	//ios::out = default, operasi output;
	//ios::app = menuliskan pada akhir baris;
	//ios::trunc = default, membuat file, jika sudah ada menghapus file dan menimpanya

	myFile.open("data1.text", ios::out);
	myFile << "menuliskan baris baru pada data1";
	myFile.close();

	myFile.open("data2.text", ios::trunc);
	myFile << "menuliskan baris baru pada data2";
	myFile.close();

	myFile.open("data3.text", ios::app); //append
	myFile << "menuliskan baris baru pada data3";
	myFile.close();
}