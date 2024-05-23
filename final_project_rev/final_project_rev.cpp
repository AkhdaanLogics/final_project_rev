// TODO LIST :
// 1. Fungsi Void Cetak Tiket Belum Menampilkan Data Penumpang ( Mungkin Masalah Ada Di Bagian Pemanggilan Struct Atau Perulangan )
// 2. Melanjutkan Halaman Admin
// 3. Merangkai Mana Yang Harus Dikurangi Atau Di Tambahkan
// 4. Merapikan Tampilan

#include <iostream>
#include <string>
using namespace std;
#define max 5

int pil, jmlPenumpang, pilRute, pilMaskapai, harga;
char pilAbj;
string userBaru, userTerdaftar, passBaru, passTerdaftar;
int pinBaru, pinTerdaftar;
int sudahIsi = 1; // 0 = Sudah Isi & 1 = Belum Isi
int perubahan;

struct dataDiri
{
	string namaLengkap;
	int umur;
	int nik;
};

void halamanPengguna();
void garudaJogja();
void batikJogja();
void garudaJakarta();
void batikJakarta();

void cetakTiket()
{
    dataDiri data[max];
    cout << "=========== TIKET PESAWAT ===========\n";
    cout << "\n";
    for (int i = 0; i < jmlPenumpang; i++)
    {
        cout << "Data Penumpang Ke - " << i + 1 << endl;
        cout << "[*] Nama Lengkap\t : " << data[i].namaLengkap << endl;
        cout << "[*] Umur\t\t : " << data[i].umur << endl;
        cout << "[*] NIK\t\t\t : " << data[i].nik << endl;
        cout << "\n";
        cout << "===================================\n";
    }
    cout << "\n";
    cout << "========== RUTE PENERBANGAN ==========\n";
    cout << "\n";
    if (pilRute == 1 && pilMaskapai == 1)
    {
        garudaJakarta();
    }
    else if (pilRute == 1 && pilMaskapai == 2)
    {
        batikJakarta();
    }
    else if (pilRute == 2 && pilMaskapai == 1)
    {
        garudaJogja();
    }
    else if (pilRute == 2 && pilMaskapai == 2)
    {
        batikJogja();
    }
    cout << "\n";
    cout << "========= HAVE A SAFE FLIGHT =========\n";
}

void belumIsiDataDiri()
{
	cout << "[*] Anda Belum Melakukan Pengisian Data Diri!\n";
	halamanPengguna();
}

void dataPenumpang()
{
	dataDiri data[max];
    for (int i = 0; i < jmlPenumpang; i++)
    {

        cout << "[*] Nama Lengkap\t : " << data[i].namaLengkap << endl;
        cout << "[*] Umur\t\t : " << data[i].umur << endl;
        cout << "[*] NIK\t\t : " << data[i].nik << endl;
        cout << "\n";
        cout << "===================================\n";
    }
}

void merubahDataPenumpang(dataDiri data[], int jmlPenumpang, int perubahan)
{
    cout << "==== MERUBAH DATA PENUMPANG ====\n";
    cout << "Masukkan Nama Lengkap\t : ";
    cin >> data[perubahan].namaLengkap;
    cout << "Masukkan Umur\t\t : ";
    cin >> data[perubahan].umur;
    cout << "Masukkan NIK\t\t : ";
    cin >> data[perubahan].nik;
}

void garudaJakarta()
{
    harga = jmlPenumpang * 1000000;
    cout << "[*] Maskapai\t : Garuda Indonesia\n";
    cout << "[*] Rute\t : Jakarta - Bali\n";
    cout << "[*] Harga\t : " << harga;
    cout << endl;
    
}

void batikJakarta()
{
    harga = jmlPenumpang * 1500000;
    cout << "[*] Maskapai\t : Batik Air\n";
    cout << "[*] Rute\t : Jakarta - Bali\n";
    cout << "[*] Harga\t : " << harga;
    cout << endl;
}

void garudaJogja()
{
    harga = jmlPenumpang * 2000000;
    cout << "[*] Maskapai\t : Garuda Indonesia\n";
    cout << "[*] Rute\t : Jogjakarta - Sumatera\n";
    cout << "[*] Harga\t : " << harga;
    cout << endl;
}

void batikJogja()
{
    harga = jmlPenumpang * 2500000;
    cout << "[*] Maskapai\t : Batik Air\n";
    cout << "[*] Rute\t : Jogjakarta - Sumatera\n";
    cout << "[*] Harga\t : " << harga;
    cout << endl;
}

void halamanPengguna()
{
    // Perlu Membuat Validasi, Apabila User Belum Memasukkan Data Maka Akan Muncul Belum Melakukan Pengisian Data Diri
    // Cara :
    // 1. Bisa Melalui Void
    // 2. Bisa Melalui Validasi If Else

    do
    {
        dataDiri data[max];
        cout << "=== BANDARA AMIKOM YOGYAKARTA ===\n";
        cout << "[1] Isi Data Diri\n";
        cout << "[2] Pilih Maskapai Penerbangan\n";
        cout << "[3] Pilih Rute Penerbangan\n";
        cout << "[4] Rincian Biaya Penerbangan\n";
		cout << "[5] Cetak Tiket\n";
        cout << "Masukkan Pilihan [1 - 4] : ";
        cin >> pil;

        // Jika Pilihan adalah 1 dan Belum Isi Data Diri
        if (pil == 1 && sudahIsi == 1)
        {
            cout << "=== PENGISIAN DATA DIRI ===\n";
            cout << "Masukkan Jumlah Penumpang\t : ";
            cin >> jmlPenumpang;
            // Melakukan Pengisian Data
            for (int i = 0; i < jmlPenumpang; i++)
            {
                cout << "==== DATA PENUMPANG KE - " << i + 1 << " ====\n";
                cout << "Masukkan Nama Lengkap\t : ";
                cin >> data[i].namaLengkap;
                cout << "Masukkan Umur\t\t : ";
                cin >> data[i].umur;
                cout << "Masukkan NIK\t\t : ";
                cin >> data[i].nik;
            }
            cout << "[*] Apakah Anda Sudah Yakin Dengan\n";
            for (int i = 0; i < jmlPenumpang; i++)
            {
				cout << "Data Penumpang Ke - " << i + 1 << endl;
                cout << "[*] Nama Lengkap\t : " << data[i].namaLengkap << endl;
                cout << "[*] Umur\t\t : " << data[i].umur << endl;
                cout << "[*] NIK\t\t\t : " << data[i].nik << endl;
                cout << "\n";
                cout << "===================================\n";
            }
            cout << "[1] Ya, Saya Sudah Yakin!\n";
            cout << "[2] Tidak, Saya Ingin Merubah Data\n";
            cout << "[*] Masukkan Pilihan [1 - 2] : ";
            cin >> pil;

            // Apabila Sudah Yakin Pada Pengisian Data
            if (pil == 1)
            {
                sudahIsi = 0;
                cout << "[*] Mengembalikan Ke Halaman Sebelumnya\n";
            }

            // Apabila Ingin Mengulang Pengisian Data
            else if (pil == 2)
            {
                sudahIsi = 1;
                cout << "[*] Data Mana Yang Ingin Anda Ubah?\n";
                for (perubahan; perubahan < jmlPenumpang; perubahan++)
                {
                    cout << "[" << perubahan + 1 << "] Data Penumpang Ke - " << perubahan + 1 << endl;
                }
                cout << "Masukkan Pilihan : ";
                cin >> pil;
                // Proses Merubah Data Pada Array Berjalan Disini
                merubahDataPenumpang(data, jmlPenumpang, pil - 1);
				cout << "Data Telah Berhasil Di Ubah!\n";
                for (int i = 0; i < jmlPenumpang; i++)
                {
					cout << "Data Penumpang Ke - " << i + 1 << endl;    
                    cout << "[*] Nama Lengkap\t : " << data[i].namaLengkap << endl;
                    cout << "[*] Umur\t\t : " << data[i].umur << endl;
                    cout << "[*] NIK\t\t\t : " << data[i].nik << endl;
                    cout << "\n";
                    cout << "===================================\n";
                }
            }

            else
            {
                cout << "[*] Inputan Salah!\n";
            }
        }

        // Jika Pilihan adalah 2 dan Sudah Isi Data Diri
        else if (pil == 2 && sudahIsi == 0)
        {
            cout << "==== Pilih Maskapai Penerbangan ====\n";
            cout << "[1] Garuda Indonesia\n";
            cout << "[2] Batik Air\n";
            cout << "Masukkan Pilihan [1 - 2] : ";
            cin >> pilMaskapai;
        }

        // Jika Pilihan adalah 2 dan Belum Isi Data Diri
        else if (pil == 2 && sudahIsi == 1)
        {
            belumIsiDataDiri();
        }

        // Jika Pilihan adalah 3 dan Sudah Isi Data Diri
        else if (pil == 3 && sudahIsi == 0)
        {
            cout << "==== Pilih Rute Penerbangan ====\n";
            cout << "[1] Jakarta - Bali\n";
            cout << "[2] Jogjakarta - Sumatera\n";
            cout << "Masukkan Pilihan [1 - 2] : ";
            cin >> pilRute;
        }

        // Jika Pilihan adalah 3 dan Belum Isi Data Diri
        else if (pil == 3 && sudahIsi == 1)
        {
            belumIsiDataDiri();
        }

        // Jika Pilihan adalah 4 dan Sudah Isi Data Diri
        else if (pil == 4 && sudahIsi == 0)
        {
			if (pilRute == 1 && pilMaskapai == 1)
            {
                cout << "==== RINCIAN BIAYA PENERBANGAN ====\n";
                garudaJakarta();
			}
            else if (pilRute == 1 && pilMaskapai == 2)
            {
                cout << "==== RINCIAN BIAYA PENERBANGAN ====\n";
                batikJakarta();
			}
            else if (pilRute == 2 && pilMaskapai == 1)
            {
                cout << "==== RINCIAN BIAYA PENERBANGAN ====\n";
                garudaJogja();
			}
            else if (pilRute == 2 && pilMaskapai == 2)
            {
                cout << "==== RINCIAN BIAYA PENERBANGAN ====\n";
                batikJogja();
			}   
        }

        // Jika Pilihan adalah 4 dan Belum Isi Data Diri
        else if (pil == 4 && sudahIsi == 1)
        {
            belumIsiDataDiri();
        }

        else if (pil == 5 && sudahIsi == 0)
        {
            cetakTiket();
        }
    } while (sudahIsi == 0);
}

void halamanAdmin()
{
	cout << "=== HALAMAN ADMIN ===\n";
	cout << "[1] Antrian Penumpang\n";
	cout << "[2] Antrian Pesawat Take Off\n";
	cout << "[3] Mencari Data Penumpang\n";
	cout << "[4] Customer Service\n";
	cout << "Masukkan Pilihan [1 - 4] : ";
	cin >> pil;
}

void loginAkun()
{
	int benar = 0;
	do
	{
		cout << "=== HALAMAN LOGIN AKUN ===\n";
		cout << "Masukkan Username\t: ";
		cin >> userTerdaftar;
		cout << "Masukkan Password\t: ";
		cin >> passTerdaftar;
		cout << "Masukkan PIN\t\t: ";
		cin >> pinTerdaftar;
		if (userBaru == userTerdaftar && passBaru == passTerdaftar && pinBaru == pinTerdaftar)
		{
			cout << "Anda Berhasil Masuk!\n";
			halamanPengguna();
		}
		else if (userTerdaftar == "root" && passTerdaftar == "root" && pinTerdaftar == 888)
		{
			cout << "[*] Anda Berhasil Masuk Sebagai Admin!\n";
			halamanAdmin();
		}
		else
		{
			cout << "Akun Tidak Terdaftar Dalam Database!\n";
			benar++;
		}
	} while (benar > 0);
}

void halamanLogin();

void buatAkun()
{
	cout << "=== BUAT AKUN PENGGUNA ===\n";
	do
	{
		cout << "[*] Buat Username\t: ";
		cin >> userBaru;
		if (userBaru == userTerdaftar)
		{
			cout << "Username Tidak Tersedia!\n";
			cout << "Mungkin Username Ini Sudah Digunakan Oleh User Lain...\n";
		}

		else
		{
			cout << "[*] Buat Password\t: ";
			cin >> passBaru;
			cout << "[*] Buat PIN\t\t: ";
			cin >> pinBaru;
			cout << endl;
			cout << endl;
			cout << "[*] Apakah Anda Sudah Yakin Dengan :\n";
			cout << "Username\t : " << userBaru << endl;
			cout << "Password\t : " << passBaru << endl;
			cout << "PIN\t\t : " << pinBaru << endl;
			cout << "Masukkan Pilihan [Y / N] : ";
			cin >> pilAbj;
			userTerdaftar = userBaru;
			if (pilAbj == 'y' || pilAbj == 'Y')
			{
				halamanLogin();
			}
			else if (pilAbj == 'n' || pilAbj == 'N')
			{
				cout << "Sesuaikan Data Terlebih Dahulu\n";
			}
			else
			{
				cout << "Inputan Anda Salah!\n";
			}
		}
	} while (true);
}

void halamanLogin()
{
	do
	{
		cout << "=== HALAMAN LOGIN PENGGUNA ===\n";
		cout << "[1] Buat Akun\n";
		cout << "[2] Masuk Menggunakan Akun\n";
		cout << "[3] Customer Service\n";
		cout << "Masukkan Pilihan [1 - 3] : ";
		cin >> pil;
		switch (pil)
		{
		case 1:
			buatAkun();
			break;
		case 2:
			loginAkun();
			break;
		case 3:

		default:
			cout << "Inputan Anda Salah!\n";
		}
	} while (pil != 4);
}



int main()
{
	halamanLogin();
}