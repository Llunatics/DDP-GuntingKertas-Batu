#include <iostream>
#include <cstdlib>
using namespace std;

int skorP1 = 0, skorKomputer = 0;

void vsKomputer(){
    int pilPemain1;
    int pilKomputer = rand()%3 +1;
    cout << "Mode Pemain VS Komputer" << endl;
    cout << "(1) Gunting\n(2) Kertas\n(3) Batu" << endl;
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilPemain1;
    
    cout << "Pilihan Pemain: " << pilPemain1 << endl;
    cout << "Pilihan Komputer: " << pilKomputer << endl;

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
    cout << "Skor Pemain: " << skorP1 << endl;
    cout << "Skor Komputer: " << skorKomputer << endl;
}

void vsPemain(){
   
}

void skorSaatIni(){
  
}

void resetSkor(){
 
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
