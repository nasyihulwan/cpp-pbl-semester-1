#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    // Variabel untuk menyimpan pengaturan perulangan
    // Ketika ulang = 1, maka program akan terus dijalankan
    int ulang = 1;

    do {
        // Judul
        cout << setfill('-') << setw(145) << "" << setfill(' ') << endl;
        cout << setw(110) << right << "Program Sistem Tes Psikologi untuk Menentukan Gaya Belajar Menggunakan Metode MBTI" << endl;
        cout << setfill('-') << setw(145) << "" << setfill(' ') << endl;

        // Header Kolom
        cout << left << setw(5) << "No" << setw(120) << "Pertanyaan" << setw(10) << "Jawaban" << endl;
        cout << setfill('-') << setw(145) << "" << setfill(' ') << endl;

        // Pertanyaan cara mendapatkan energi
        string pertanyaanEkstrovert[3] = {
                "Apakah Anda seseorang yang inisiatif mengajak orang lain dalam memulai suatu hal? (Y/N)",
                "Apakah Anda bersemangat dalam berinteraksi dengan orang-orang? (Y/N)",
                "Apakah Anda menyukai komunikasi lisan dan banyak berbicara? (Y/N)"
        };
        string pertanyaanIntrovert[2] = {
                "Apakah Anda cenderung melakukan sesuatu secara lebih hati hati? (Y/N)",
                "Apakah Anda cenderung lebih menyenangi sesuatu secara mendalam, spesifik, lama? (Y/N)"
        };

        // Pertanyaan cara memperoleh informasi
        string pertanyaanSensing[3] = {
                "Apakah Anda cenderung lebih menyukai sesuatu yang secara lazim dan merupakan hal biasa? (Y/N)",
                "Apakah Anda cenderung lebih menyenangi sesuatu yang aman, nyaman dan sederhana? (Y/N)",
                "Apakah Anda lebih menyenangi sesuatu yang bersifat nyata, kongkrit, dapat diukur? (Y/N)"
        };
        string pertanyaanINtuition[2] = {
                "Apakah Anda cenderung lebih berorientasi masa depan dan memiliki angan-angan yang tinggi? (Y/N)",
                "Apakah Anda cenderung melakukan sesuatu secara acak dan hal yang esensi (inti atau hal yang pokok) ? (Y/N)"
        };

        // Pertanyaan cara mengambil keputusan
        string pertanyaanThinking[3] = {
                "Apakah Anda cenderung menilai sesuatu berdasarkan akal sehat dan objektif? (Y/N)",
                "Apakah Anda cenderung mengkritisi sesuatu dengan mudah? (Y/N)",
                "Apakah Anda cenderung menjadi seseorang yang kokoh terhadap pendirian dan mempertahankan pendapat saat dikritik? (Y/N)"
        };
        string pertanyaanFeeling[2] = {
                "Apakah Anda cenderung lebih mudah berempati dan terlibat secara emosional dengan orang? (Y/N)",
                "Apakah Anda cenderung lebih mudah menerima penjelasan, mendukung atau setuju? (Y/N)"
        };

        // Pertanyaan orientasi terhadap kehidupan
        string pertanyaanJudging[3] = {
                "Apakah Anda cenderung mengerjakan tugas sejak awal dibagikan? (Y/N)",
                "Apakah Anda memiliki perencanaan terhadap sesuatu? (Y/N)",
                "Apakah Anda membuat kesepakatan sebelum memulai sesuatu? (Y/N)"
        };
        string pertanyaanPerceiving[2] = {
                "Apakah Anda seseorang yang fleksibel terhadap jadwal? (Y/N)",
                "Apakah Anda seseorang yang menyukai kehidupan yang bebas dan santai? (Y/N)"
        };

        // Variabel untuk menyimpan jawaban user
        char jawaban;

        // Variabel untuk skor kepribadian
        int skorEkstrovert = 0;
        int skorIntrovert = 0;
        int skorSensing = 0;
        int skorINtuition = 0;
        int skorThinking = 0;
        int skorFeeling = 0;
        int skorJudging = 0;
        int skorPerceiving = 0;

        // Counter untuk pertanyaan
        int no = 0;

        // Perulangan untuk setiap pertanyaan
        // Ekstrovert
        for (int i = 0; i < 3; i++) {
            no++;
            cout << left << setw(5) << no;
            cout << left << setw(120) << pertanyaanEkstrovert[i];
            cin >> jawaban;

            // Mengabaikan input buffer untuk membersihkan sisa karakter dalam buffer hingga menemukan newline ('\n').
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            // Switch case untuk menambah skor berdasarkan jawaban
            switch (jawaban) {
                case 'y':
                case 'Y':
                    skorEkstrovert += 1;
                    break;
                case 'n':
                case 'N':
                    skorIntrovert += 1;
                    break;
                default:
                    cout << "Jawaban tidak valid. Masukkan jawaban yang benar." << endl;
                    i--;  // Mengurangi nilai i agar pertanyaan diulang
                    no--; // Mengurangi nilai no agar sesuai dengan nomor pertanyaan
            }
        }

        // Intovert
        for (int i = 0; i < 2; i++) {
          no++;
          cout << left << setw(5) << no;
          cout << left << setw(120) << pertanyaanIntrovert[i];
          cin >> jawaban;

          // Mengabaikan input buffer untuk membersihkan sisa karakter dalam buffer hingga menemukan newline ('\n').
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          // Switch case untuk menambah skor berdasarkan jawaban
          switch (jawaban) {
          case 'y':
          case 'Y':
            skorIntrovert += 1;
            break;
          case 'n':
          case 'N':
            skorEkstrovert += 1;
            break;
          default:
            cout << "Jawaban tidak valid. Masukkan jawaban yang benar." << endl;
            i--;  // Mengurangi nilai i agar pertanyaan diulang
            no--; // Mengurangi nilai no agar sesuai dengan nomor pertanyaan
          }
        }

        // Sensing
        for (int i = 0; i < 3; i++) {
          no++;
          cout << left << setw(5) << no;
          cout << left << setw(120) << pertanyaanSensing[i];
          cin >> jawaban;

          // Mengabaikan input buffer untuk membersihkan sisa karakter dalam buffer hingga menemukan newline ('\n').
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          // Switch case untuk menambah skor berdasarkan jawaban
          switch (jawaban) {
          case 'y':
          case 'Y':
            skorSensing += 1;
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

        // iNtuition
        for (int i = 0; i < 2; i++) {
          no++;
          cout << left << setw(5) << no;
          cout << left << setw(120) << pertanyaanINtuition[i];
          cin >> jawaban;

          // Mengabaikan input buffer untuk membersihkan sisa karakter dalam buffer hingga menemukan newline ('\n').
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          // Switch case untuk menambah skor berdasarkan jawaban
          switch (jawaban) {
          case 'y':
          case 'Y':
            skorINtuition += 1;
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

        // Thinking
        for (int i = 0; i < 3; i++) {
          no++;
          cout << left << setw(5) << no;
          cout << left << setw(120) << pertanyaanThinking[i];
          cin >> jawaban;

          // Mengabaikan input buffer untuk membersihkan sisa karakter dalam buffer hingga menemukan newline ('\n').
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          // Switch case untuk menambah skor berdasarkan jawaban
          switch (jawaban) {
          case 'y':
          case 'Y':
            skorThinking += 1;
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

        // Feeling
        for (int i = 0; i < 2; i++) {
          no++;
          cout << left << setw(5) << no;
          cout << left << setw(120) << pertanyaanFeeling[i];
          cin >> jawaban;

          // Mengabaikan input buffer untuk membersihkan sisa karakter dalam buffer hingga menemukan newline ('\n').
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          // Switch case untuk menambah skor berdasarkan jawaban
          switch (jawaban) {
          case 'y':
          case 'Y':
            skorFeeling += 1;
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

        // Judging
        for (int i = 0; i < 3; i++) {
          no++;
          cout << left << setw(5) << no;
          cout << left << setw(120) << pertanyaanJudging[i];
          cin >> jawaban;

          // Mengabaikan input buffer untuk membersihkan sisa karakter dalam buffer hingga menemukan newline ('\n').
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          // Switch case untuk menambah skor berdasarkan jawaban
          switch (jawaban) {
          case 'y':
          case 'Y':
            skorJudging += 1;
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

        // Perceiving
        for (int i = 0; i < 2; i++) {
          no++;
          cout << left << setw(5) << no;
          cout << left << setw(120) << pertanyaanPerceiving[i];
          cin >> jawaban;

          // Mengabaikan input buffer untuk membersihkan sisa karakter dalam buffer hingga menemukan newline ('\n').
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          // Switch case untuk menambah skor berdasarkan jawaban
          switch (jawaban) {
          case 'y':
          case 'Y':
            skorPerceiving += 1;
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

        // Menentukan kepribadian
        string caraMendapatkanEnergi, caraMemperolehInformasi, caraMengambilKeputusan, orientasiTerhadapKehidupan;

        if (skorEkstrovert > skorIntrovert) {
          caraMendapatkanEnergi = "E";
        } else {
          caraMendapatkanEnergi = "I";
        }

        if (skorSensing > skorINtuition) {
          caraMemperolehInformasi = "S";
        } else {
          caraMemperolehInformasi = "N";
        }

        if (skorThinking > skorFeeling) {
          caraMengambilKeputusan = "T";
        } else {
          caraMengambilKeputusan = "F";
        }

        if (skorJudging > skorPerceiving) {
          orientasiTerhadapKehidupan = "J";
        } else {
          orientasiTerhadapKehidupan = "P";
        }

        // Gaya belajar menurut kepribadian MBTI
        string ISTJ = "menyukai belajar yang sistematis, belajar menggunakan metode repetisi/pengulangan,menyukai arahan yang sistematis, observant learners.";
        string ESTJ = "menyukai penjelasan secara virtual dan berdiskusi untuk memahami sebuah konsep, belajar lebih baik apabila diberi instruksi yang jelas dan logis.";
        string ISFP = "menyukai belajar sendiri tanpa adanya tekanan dari pihak luar, belajar lebih baik melalui hubungan yang sebab akibat yang jelas, menyukai instruksi yang jelas.";
        string ESFP = "harus berada pada lingkungan belajar yang nyaman, lebih menyukai belajar dengan praktik, dan saat ada contoh nyata.";
        string ISTP = "mayoritas memiliki tipe kinestetik, belajar dengan level kecepatannya sendiri dan lebih menyukai penjelasan yang to-the-point.";
        string ESTP = "tidak menyukai teori, menyukai lingkungan yang kompetitif dengan adanya reward senang belajar melalui eksperimen secara langsung.";
        string ISFJ = "cepat menangkap maksud dari sebuah bacaan, lebih menyukai belajar dengan praktik secara langsung, menyukai instruksi yang bertahap dan terstruktur";
        string ESFJ = "menyukai belajar secara kelompok dan praktik secara langsung, tidak menyukai lingkungan belajar yang kompetitif.";
        string INTP = "tidak suka menghafal dan belajar kelompok, lebih menyukai belajar dengan konsep sebab-akibat yang jelas.";
        string ENTP = "menyukai belajar berkelompok, tidak suka dibatasi, belajar melalui konsep secara garis besar.";
        string INTJ = "menyukai analogi dan belajar melalui mind map";
        string ENTJ = "tidak menyukai penjelasan yang bertele-tele, belajar lebih cepat dalam lingkungan yang terstruktur dan kompetitif.";
        string INFJ = "mudah memahami melalui teori, belajar secara terstruktur dan jelas";
        string ENFJ = "cepat belajar dalam grup, baik dalam mengajari orang lain, memiliki rasa tanggung jawab yang tinggi terhadap tugas-tugasnya";
        string INFP = "lebih nyaman belajar sendiri, tidak suka dibatasi terutama dalam hal kreativitas, belajar melalui makna dari sebuah konsep, mudah menyerap informasi baru.";
        string ENFP = "senang belajar secara berkelompok dan bertukar ide, menyukai belajar di tempat yang Anda sukai, menjadi termotivasi ketika dapat menerapkan teori dan konsep sebagai self-growth dan berdampak positif bagi orang lain.";

        cout << setfill('-') << setw(145) << "" << setfill(' ') << endl;
        cout << endl << "Hasil Tes: " << endl;
        if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ISTJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ISTJ;
        } else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << "ESTJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ESTJ;
        } else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ISFP" << endl;
          cout << "Gaya belajar: " << "Anda " << ISFP;
        } else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ESFP" << endl;
          cout << "Gaya belajar: " << "Anda " << ESFP;
        } else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ISTP" << endl;
          cout << "Gaya belajar: " << "Anda " << ISTP;
        } else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ESTP" << endl;
          cout << "Gaya belajar: " << "Anda " << ESTP;
        } else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ISFJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ISFJ;
        } else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ESFJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ESFJ;
        } else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ISFJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ISFJ;
        } else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ENTP" << endl;
          cout << "Gaya belajar: " << "Anda " << ENTP;
        } else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "INTJ" << endl;
          cout << "Gaya belajar: " << "Anda " << INTJ;
        } else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ENFJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ENFJ;
        } else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "INFP" << endl;
          cout << "Gaya belajar: " << "Anda " << INFP;
        } else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ENFP" << endl;
          cout << "Gaya belajar: " << "Anda " << ENFP;
        }

        cout << endl << endl;

        // Tanya apakah ingin mengulang tes
        char ulangi;
        cout << "Apakah Anda ingin mengulang tes? (Y/N): ";
        cin >> ulangi;

        if (ulangi != 'y' && ulangi != 'Y') {
            cout << setfill('-') << setw(45) << "" << setfill(' ') << endl;
            cout << "Terimakasih telah menggunakan program ini!" << endl;
            cout << setfill('-') << setw(45) << "" << setfill(' ') << endl;
            ulang--; // Keluar dari loop jika tidak ingin mengulang
        }

    } while (ulang == 1);

    return 0;
}