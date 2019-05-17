#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//struct 
struct Mahasiswa {
	int pk;
	string NPM;
	string nama;
	string jurusan;
};

//funtion prototype
int getOption();
void checkDatabase(fstream& data);

void writeData(fstream &data, int posisi, Mahasiswa& inputMahasiswa) {
	data.seekp((posisi - 1) * sizeof(Mahasiswa), ios::beg);
	data.write(reinterpret_cast<char*>(&inputMahasiswa), sizeof(Mahasiswa));
};

int getDataSize(fstream& data) {
	int start, end;
	data.seekg(0, ios::beg);
	start = data.tellg();
	data.seekg(0, ios::end);
	end = data.tellg();
	return (end - start) / sizeof(Mahasiswa);
};

Mahasiswa readData(fstream& data, int posisi) {
	Mahasiswa readMahasiswa;
	data.seekg((posisi - 1) * sizeof(Mahasiswa), ios::beg);
	data.read(reinterpret_cast<char*>(&readMahasiswa), sizeof(Mahasiswa));
	return readMahasiswa;
}

void addDataMahasiswa(fstream &data) {

	Mahasiswa inputMahasiswa, lastMahasiswa;

	int size = getDataSize(data);

	cout << "ukuran Data : " << size << endl;

	if (size == 0) {
		inputMahasiswa.pk = 1;
	}
	else {
		lastMahasiswa = readData(data, size);
		inputMahasiswa.pk = lastMahasiswa.pk + 1;
	}

	inputMahasiswa.pk = 1;
	cout << "Nama : ";
	getline(cin, inputMahasiswa.nama);
	cout << "Jurusan : ";
	getline(cin, inputMahasiswa.jurusan);
	cout << "NPM : ";
	getline(cin, inputMahasiswa.NPM);

	writeData(data, size+1, inputMahasiswa);
}

int main() {
	fstream data;

	checkDatabase(data);

	int pilihan = getOption();
	char is_continue;

	enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

	while(pilihan != FINISH) {
		switch (pilihan){
		case CREATE:
			cout << "Menambah data Mahasiswa" << endl;
			addDataMahasiswa(data);
			break;
		case READ:
			cout << "Membaca data Mahasiswa" << endl;
			break;
		case UPDATE:
			cout << "Mengubah data Mahasiswa" << endl;
			break;
		case DELETE:
			cout << "Menghapus data Mahasiswa" << endl;
			break;
		default:
			cout << "Pilihan tidak ditemukan" << endl;
			break;
		}

		label_continue:

		cout << "Lanjutkan?(y/n) : ";
		cin >> is_continue;
		if ((is_continue == 'y') | (is_continue == 'Y')) {
			pilihan = getOption();
		}else if ((is_continue == 'n') | (is_continue == 'N')) {
			break;
		}
		else{
			goto label_continue;
		}
	}
	cout << "Akhir Program" << endl;

	cin.get();
	return 0;
}




// function & void
void checkDatabase(fstream& data) {
	data.open("data.bin", ios::in | ios::out | ios::binary);

	//check file data ada atau tidak
	if (data.is_open()) {
		cout << "database ditemukan" << endl;
	}
	else {
		cout << "Database tidak ditemukan, buat Baru!" << endl;
		data.close();
		data.open("data.bin", ios::trunc | ios::in | ios::out | ios::binary);
	}
}

int getOption() {
	int input;
	cout << "\nProgram CRUD data Mahasiswa" << endl;
	cout << "=============================" << endl;
	cout << "1. Tambah data Mahasiswa" << endl;
	cout << "2. Tampilkan data Mahasiswa" << endl;
	cout << "3. Ubah data Mahasiswa" << endl;
	cout << "4. Hapus data Mahasiswa" << endl;
	cout << "5. Selesai" << endl;
	cout << "=============================" << endl;
	cout << "Pilih [1-5]? : ";
	cin >> input;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return input;
}
