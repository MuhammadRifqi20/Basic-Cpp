#include <iostream>
using namespace std;

int main () {
    char slta, formPendaftaran, ujian, butaWarna, passGrade;

    cout << "Apakah lulus SLTA? (Y/T) ";
    cin >> slta;
    if (slta == 'Y' || slta == 'y')
    {
        cout << "Apakah mengisi formulir pendaftaran? (Y/T) ";
        cin >> formPendaftaran;
        if (formPendaftaran == 'Y' || formPendaftaran == 'y')
        {
            cout << "Apakah ikut ujian? (Y/T)";
            cin >> ujian;
            if (ujian == 'Y' || ujian == 'y')
            {
                cout << "Apakah buta warna? (Y/T)";
                cin >> butaWarna;
                if (butaWarna == 'Y' || butaWarna == 'y')
                {
                    cout << "Apakah melewati passing grade? (Y/T)";
                    cin >> passGrade;
                    if (passGrade == 'Y' || passGrade == 'y')
                    {
                        cout << "\n--------------------------=======------------------------" << endl;
                        cout << "Selamat kamu dinyatakan lulus di POLMED \n" << endl;
                    }

                    else
                    {
                        cout << "\n--------------------------=======------------------------" << endl;
                        cout << "MAAF. Kamu dinyatakan tidak lulus di POLMED" << endl;
                        cout << "Tetap semangat dan pantang menyerah!!! \n" << endl;
                    }
                } //Buta Warna

                else
                {
                    cout << "\n--------------------------=======------------------------" << endl;
                    cout << "MAAF. Kamu dinyatakan tidak lulus di POLMED" << endl;
                    cout << "Tetap semangat dan pantang menyerah!!! \n" << endl;
                }
            } //Ujian

            else
            {
                cout << "\n--------------------------=======------------------------" << endl;
                cout << "MAAF. Kamu dinyatakan tidak lulus di POLMED" << endl;
                cout << "Tetap semangat dan pantang menyerah!!! \n" << endl;
            }
        } //Formulir Pendaftaran

        else
        {
            cout << "\n--------------------------=======------------------------" << endl;
            cout << "MAAF. Kamu dinyatakan tidak lulus di POLMED" << endl;
            cout << "Tetap semangat dan pantang menyerah!!! \n" << endl;
        }
    } //SLTA
    else
    {
        cout << "\n--------------------------=======------------------------" << endl;
        cout << "MAAF. Kamu dinyatakan tidak lulus di POLMED" << endl;
        cout << "Tetap semangat dan pantang menyerah!!! \n" << endl;
    }
}