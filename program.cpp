#include <iostream>
#include <cstdlib>
using namespace std;

int skorP1 = 0, skorP2 = 0, skorKomputer = 0;
string p1, p2, ketP1, ketP2, ketK;

void cetakKeterangan(int pilPemain1, int pilPemain2, int pilKomputer){
    if(pilPemain1==1){
        ketP1 = "Gunting";
    }
    else if(pilPemain1==2){
        ketP1 = "Kertas";
    }
    else if(pilPemain1==3){
        ketP1 = "Batu";
    }

    if(pilPemain2==1){
        ketP2 = "Gunting";
    }
    else if(pilPemain2==2){
        ketP2 = "Kertas";
    }
    else if(pilPemain2==3){
        ketP2 = "Batu";
    }

    if(pilKomputer==1){
        ketK = "Gunting";
    }
    else if(pilKomputer==2){
        ketK = "Kertas";
    }
    else if(pilKomputer==3){
        ketK = "Batu";
    }
}

void vsKomputer(){
        cout << "\n==============Mode Pemain VS Komputer=============" << endl;
        cout << "Masukkan nama pemain: ";
        cin >> p1;

        int i=1;
    do {
        int pilPemain1;
        int pilKomputer = rand()%3 +1;
        
        cout << "\n======================Ronde " << i << "=====================" << endl;
        i++;

        cout << "(1) Gunting\n(2) Kertas\n(3) Batu\n(4) Acak" << endl;
        cout << p1 << ", Masukkan pilihan (1/2/3/4): ";
        cin >> pilPemain1;

        if(pilPemain1==4) pilPemain1 = rand()%3 +1;

        cetakKeterangan(pilPemain1, 0, pilKomputer);

        if(pilPemain1==1 || pilPemain1==2 || pilPemain1==3){
            cout << "\nPilihan Pemain: (" << pilPemain1 << ") " << ketP1 << endl;
            cout << "Pilihan Komputer: (" << pilKomputer << ") " << ketK << endl;

            if(pilPemain1==pilKomputer){
                cout << "=======Hasil Seri=======" << endl;
            }

            else if(pilPemain1==1 && pilKomputer==2 ||
                    pilPemain1==2 && pilKomputer==3 ||
                    pilPemain1==3 && pilKomputer==1 ){
                        cout << "=======Anda Menang!=======" << endl;
                        skorP1++;
            }

            else{
                cout << "=======Anda Kalah=======" << endl;
                skorKomputer++;
            }
        } 
        
        else{
            cout << "Pilihan tidak valid. Ulangi lagi." << endl;
        }

        cout << "\nSkor Saat Ini: " << endl;
        cout << "Skor " << p1 << ": " << skorP1 << endl;
        cout << "Skor Komputer: " << skorKomputer << endl;

        char lanjut;
        cout << "Apakah Anda ingin melanjutkan permainan? (y/n): ";
        cin >> lanjut;

        if (lanjut != 'y' && lanjut != 'Y') {
            break;
        }
    } while (true);
}

void vsPemain(){
        cout << "\n=============Mode Pemain 1 VS Pemain 2============" << endl;
        cout << "Masukkan nama pemain 1: ";
        cin >> p1;
        cout << "Masukkan nama pemain 2: ";
        cin >> p2;

        int i=1;
    do{
        int pilPemain1, pilPemain2;

        cout << "\n======================Ronde " << i << "=====================" << endl;
        i++;
        cout << "(1) Gunting\n(2) Kertas\n(3) Batu\n(4) Acak" << endl;
        cout << p1 << ", Masukkan pilihan (1/2/3/4): ";
        cin >> pilPemain1;

        if(pilPemain1==4) pilPemain1 = rand()%3 +1;

        cout << p2 << ", Masukkan pilihan (1/2/3/4): ";
        cin >> pilPemain2;

        if(pilPemain2==4) pilPemain2 = rand()%3 +1;

        cetakKeterangan(pilPemain1, pilPemain2, 0);

        cout << "\nPilihan " << p1 << ": (" << pilPemain1 << ") " << ketP1 << endl;
        cout << "Pilihan " << p2 << ": (" << pilPemain2 << ") " << ketP2 << endl;

        if(pilPemain1==pilPemain2){
            cout << "=======Hasil Seri=======" << endl;
        }

        else if(pilPemain1==1 && pilPemain2==2 ||
                pilPemain1==2 && pilPemain2==3 ||
                pilPemain1==3 && pilPemain2==1 ){
                    cout << "=======" << p1 << " Menang!=======" << endl;
                    skorP1++;
        }

        else{
            cout << "=======" << p2 << " Menang!=======" << endl;
            skorP2++;
        }

        cout << "\nSkor Saat Ini: " << endl;
        cout << "Skor " << p1 << ": " << skorP1 << endl;
        cout << "Skor " << p2 << ": " << skorP2 << endl;

        char lanjut;
        cout << "Apakah Anda ingin melanjutkan permainan? (y/n): ";
        cin >> lanjut;

        if (lanjut != 'y' && lanjut != 'Y') {
            break;
        }

    } while (true);
}

void skorSaatIni(){
    char kembali;
    cout << "\n=====================Menu Skor====================" << endl;
    do{
        string pemain1 = p1 + " (Pemain 1)";
        string pemain2 = p2 + " (Pemain 2)";
        string komputer = "Komputer";

        int skorP1Temp = skorP1;
        int skorP2Temp = skorP2;
        int skorKomputerTemp = skorKomputer;

        if (skorP1Temp < skorP2Temp) {
            swap(skorP1Temp, skorP2Temp);
            swap(pemain1, pemain2);
        }
        if (skorP1Temp < skorKomputerTemp) {
            swap(skorP1Temp, skorKomputerTemp);
            swap(pemain1, komputer);
        }
        if (skorP2Temp < skorKomputerTemp) {
            swap(skorP2Temp, skorKomputerTemp);
            swap(pemain2, komputer);
        }
    
        cout << "Skor Saat Ini (Diurutkan berdasarkan skor tertinggi):" << endl;
        cout << "1. " << pemain1 << " : " << skorP1Temp << endl;
        cout << "2. " << pemain2 << " : " << skorP2Temp << endl;
        cout << "3. " << komputer << " : " << skorKomputerTemp << endl;

        cout << "Ketik 'y' untuk kembali: \n";
        cin >> kembali;

        if(kembali=='y' || kembali=='Y') break;
    }while(true);
}

void resetSkor(){
    cout << "\n==================Menu Reset Skor=================" << endl;
    char reset;
    cout << "Apakah anda yakin ingin mereset skor? (y/n)";
    cin >> reset;

    if(reset == 'y'|| reset == 'Y'){
        skorP1 = 0;
        skorP2 = 0;
        skorKomputer = 0;

        cout << "Skor telah direset.\n" << endl;
    } 
    
    else{
        cout << "Skor batal direset.\n" << endl;
    }
}

int main(){
    cout << "\nKelompok 1\nNama : \tAndiko Ramadani (NIM : 3337230003)\n\tAura Salsa Azzahra (NIM : 3337230044)\nProdi:  Informatika (C)\nMata Kuliah : Dasar-dasar Pemrograman\nProyek Game Gunting Kertas Batu" << endl;
    do{
        int menu;
        cout << "\n================Gunting Kertas Batu===============" << endl;
        cout << "Selamat Datang di Game Gunting Kertas Batu\nDaftar Menu: " << endl;
        cout << "1. Mulai Bermain" << endl;
        cout << "2. Skor Saat Ini" << endl;
        cout << "3. Reset Skor" << endl;
        cout << "4. Keluar" << endl;
        cout << "Silahkan pilih menu (1/2/3/4): ";
        cin >> menu;
        
        if(menu==1){
            do{
                int mode;
                cout << "\n===============Daftar Mode Permainan==============" << endl;
                cout << "Daftar Mode Permainan: " << endl;
                cout << "1. Pemain 1 vs Komputer" << endl;
                cout << "2. Pemain 1 vs Pemain 2" << endl;
                cout << "3. Kembali ke Menu Utama" << endl;
                cout << "Masukkan pilihan (1/2/3): ";
                cin >> mode;

                if(mode==1){
                        vsKomputer();
                }

                else if(mode==2){
                    vsPemain();
                }
                
                else if(mode==3){
                    break;
                }

                else{
                    cout << "Pilihan tidak valid" << endl;
                }

            }while(true);
        }

        else if(menu==2){
            skorSaatIni();
        }

        else if(menu==3){
            resetSkor();
        }

        else if(menu==4){
            return 0;
        }

        else{
            cout << "Menu yang dipilih tidak valid" << endl;
        }

    }while(true); 

    return 0;
}
