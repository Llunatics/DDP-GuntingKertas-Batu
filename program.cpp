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
        cout << "Masukkan nama pemain: ";
        cin >> p1;
    do {
        int pilPemain1;
        int pilKomputer = rand()%3 +1;
        cout << "Mode Pemain VS Komputer" << endl;

        cout << "(1) Gunting\n(2) Kertas\n(3) Batu" << endl;
        cout << "Masukkan pilihan (1/2/3): ";
        cin >> pilPemain1;

        cetakKeterangan(pilPemain1, 0, pilKomputer);

        cout << "Pilihan Pemain: (" << pilPemain1 << ") " << ketP1 << endl;
        cout << "Pilihan Komputer: (" << pilKomputer << ") " << ketK << endl;

        if(pilPemain1==pilKomputer){
            cout << "Hasil Seri" << endl;
        }
        else if(pilPemain1==1 && pilKomputer==2 ||
                pilPemain1==2 && pilKomputer==3 ||
                pilPemain1==3 && pilKomputer==1 ){
                    cout << "Anda Menang!" << endl;
                    skorP1++;
        }
        else{
            cout << "Anda Kalah" << endl;
            skorKomputer++;
        }

        cout << "Skor Saat Ini: " << endl;
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
    int pilPemain1, pilPemain2;
    cout << "Mode Pemain 1 Vs Pemain 2" << endl;
    cout << "Masukkan nama pemain 1: ";
    cin >> p1;
    cout << "Masukkan nama pemain 2: ";
    cin >> p2;

    cout << "(1) Gunting\n(2) Kertas\n(3) Batu" << endl;
    cout << p1 << ", Masukkan pilihan (1/2/3): ";
    cin >> pilPemain1;

    cout << p2 << ", Masukkan pilihan (1/2/3): ";
    cin >> pilPemain2;

    cetakKeterangan(pilPemain1, pilPemain2, 0);

    cout << "Pilihan " << p1 << ": (" << pilPemain1 << ") " << ketP1 << endl;
    cout << "Pilihan " << p2 << ": (" << pilPemain2 << ") " << ketP2 << endl;

    if(pilPemain1==pilPemain2){
        cout << "Hasil Seri" << endl;
    }
    else if(pilPemain1==1 && pilPemain2==2 ||
            pilPemain1==2 && pilPemain2==3 ||
            pilPemain1==3 && pilPemain2==1 ){
                cout << p1 << " Menang!" << endl;
                skorP1++;
    }
    else{
        cout << p2 << " Menang!" << endl;
        skorP2++;
    }

    cout << "Skor Saat Ini: " << endl;
    cout << "Skor " << p1 << ": " << skorP1 << endl;
    cout << "Skor " << p2 << ": " << skorP2 << endl;
}

void skorSaatIni(){
    cout << "\nSkor Saat Ini:" << endl;
    cout << p1 << " (Pemain 1) : " << skorP1 << endl;
    cout << p2 << " (Pemain 2) : " << skorP2 << endl;
    cout << "Komputer: " << skorKomputer << endl;
}

void resetSkor(){
    skorP1 = 0;
    skorP2 = 0;
    skorKomputer = 0;
}

int main(){
    do{
        int menu;
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
                cout << "Daftar Mode Permainan: " << endl;
                cout << "1. Pemain 1 vs Komputer" << endl;
                cout << "2. Pemain 1 vs Pemain 2" << endl;
                cout << "3. Kembali ke Menu Utama" << endl;
                cout << "Masukkan pilihan (1/2/3): )";
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
