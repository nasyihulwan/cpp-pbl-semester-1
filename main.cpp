#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int ulang = 1;
    do {
        // Array untuk menyimpan pertanyaan
        string pertanyaan[10] = {
                "Apakah Anda merasa senang dan energik saat berada di tengah-tengah kerumunan orang? (Y/N)",
                "Apakah Anda cenderung suka berbicara dan berbagi pikiran dengan orang lain? (Y/N)",
                "Apakah Anda merasa lebih bahagia ketika bersama teman-teman daripada menghabiskan waktu sendirian? (Y/N)",
                "Apakah Anda mudah bergaul dan dapat dengan cepat membangun hubungan dengan orang baru? (Y/N)",
                "Apakah Anda merasa energi dan semangat Anda bertambah setelah berpartisipasi dalam kegiatan sosial? (Y/N): ",
                "Apakah Anda cenderung menjadi pusat perhatian dalam suatu kelompok atau acara? (Y/N): ",
                "Apakah Anda merasa sulit untuk menghabiskan waktu sendirian dan cenderung mencari kegiatan bersama orang lain? (Y/N): ",
                "Apakah Anda senang mencoba hal-hal baru dan tidak takut untuk mengambil risiko? (Y/N): ",
                "Apakah Anda mudah beradaptasi dengan perubahan dan situasi baru? (Y/N): ",
                "Apakah Anda cenderung bertindak secara spontan tanpa terlalu memikirkan akibatnya? (Y/N): "
        };

        // Variabel untuk menyimpan jawaban user
        char jawaban;

        // Variabel untuk skor kepribadian
        int skor = 0;

        // Judul
        cout << setfill('-') << setw(135) << "" << setfill(' ') << endl;
        cout << setw(80) << right << "Program Tes Kepribadian Sederhana" << endl;
        cout << setfill('-') << setw(135) << "" << setfill(' ') << endl;

        // Header Kolom
        cout << left << setw(5) << "No" << setw(120) << "Pertanyaan" << setw(10) << "Jawaban" << endl;
        cout << setfill('-') << setw(135) << "" << setfill(' ') << endl;

        // Counter
        int no = 0;

        // Perulangan untuk setiap pertanyaan
        for (int i = 0; i < 10; i++) {
            no++;
            cout << left << setw(5) << no;
            cout << left << setw(120) << pertanyaan[i];
            cin >> jawaban;

            // Mengabaikan input buffer untuk membersihkan sisa karakter dalam buffer hingga menemukan newline ('\n').
            // Menghindari masalah bacaan input yang tidak diinginkan setelah menggunakan cin.
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            // Switch case untuk menambah skor berdasarkan jawaban
            switch (jawaban) {
                case 'y':
                case 'Y':
                    skor += 1;
                    break;
                case 'n':
                case 'N':
                    break;
                default:
                    cout << "Jawaban tidak valid. Masukkan jawaban yang benar." << endl;
                    i--;  // Mengurangi nilai i agar pertanyaan diulang
                    no--; // Mengurangi nilai no agar sesuai dengan nomor pertanyaan
            }
        }

        // Menampilkan hasil tes kepribadian
        cout << setfill('-') << setw(135) << "" << setfill(' ') << endl;
        cout << endl << "Hasil Tes Kepribadian: " << endl;
        cout << "Skor anda: " << setw(10) << skor << endl;
        if (skor < 4) {
            cout << "Anda cenderung memiliki kepribadian introvert." << endl;
        } else if (skor >= 4 && skor <= 7) {
            cout << "Anda cenderung memiliki kepribadian ambivert (seimbang antara introvert dan ekstrovert)." << endl;
        } else {
            cout << "Anda cenderung ekstrovert." << endl;
        }

        cout << endl;

        // Tanya apakah ingin mengulang tes
        char ulangi;
        cout << "Apakah Anda ingin mengulang tes? (Y/N): ";
        cin >> ulangi;

        if (ulangi != 'y' && ulangi != 'Y') {
            cout << setfill('-') << setw(45) << "" << setfill(' ') << endl;
            cout << "Terimakasih telah menggunakan program ini!" << endl;
            cout << setfill('-') << setw(45) << "" << setfill(' ') << endl;
            ulang = ulang - 1; // Keluar dari loop jika tidak ingin mengulang
        }

    } while (ulang == 1);

    return 0;
}
