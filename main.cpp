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
        cout << left << setw(5) << "No" << setw(120) << "Pertanyaan" << setw(10) << "Jawaban (Ya/Tidak)" << endl;
        cout << setfill('-') << setw(145) << "" << setfill(' ') << endl;

        // Pertanyaan
        string pertanyaan[20] = {
            // Pertanyaan Ekstrovert
            "Apakah Anda seseorang yang inisiatif mengajak orang lain dalam memulai suatu hal? (Y/T)",
            "Apakah Anda bersemangat dalam berinteraksi dengan orang-orang? (Y/T)",
            "Apakah Anda menyukai komunikasi lisan dan banyak berbicara? (Y/T)",
            // Pertanyaan Introvert
            "Apakah Anda cenderung melakukan sesuatu secara lebih hati hati? (Y/T)",
            "Apakah Anda cenderung lebih menyenangi sesuatu secara mendalam, spesifik, lama? (Y/T)",
            // Pertanyaan Sensing
            "Apakah Anda cenderung lebih menyukai sesuatu yang secara lazim dan merupakan hal biasa? (Y/T)",
            "Apakah Anda cenderung lebih menyenangi sesuatu yang aman, nyaman dan sederhana? (Y/T)",
            "Apakah Anda lebih menyenangi sesuatu yang bersifat nyata, kongkrit, dapat diukur? (Y/T)",
            // Pertanyaan iNtuition
            "Apakah Anda cenderung lebih berorientasi masa depan dan memiliki angan-angan yang tinggi? (Y/T)",
            "Apakah Anda cenderung melakukan sesuatu secara acak dan hal yang esensi (inti atau hal yang pokok) ? (Y/T)",
            // Pertanyan Thinking
            "Apakah Anda cenderung menilai sesuatu berdasarkan akal sehat dan objektif? (Y/T)",
            "Apakah Anda cenderung mengkritisi sesuatu dengan mudah? (Y/T)",
            "Apakah Anda cenderung menjadi seseorang yang kokoh terhadap pendirian dan mempertahankan pendapat saat dikritik? (Y/T)",
            // Pertanyaan Feeling
            "Apakah Anda cenderung lebih mudah berempati dan terlibat secara emosional dengan orang? (Y/T)",
            "Apakah Anda cenderung lebih mudah menerima penjelasan, mendukung atau setuju? (Y/T)",
            // Pertanyaan Judging
            "Apakah Anda cenderung mengerjakan tugas sejak awal dibagikan? (Y/T)",
            "Apakah Anda memiliki perencanaan terhadap sesuatu? (Y/T)",
            "Apakah Anda membuat kesepakatan sebelum memulai sesuatu? (Y/T)",
            // Pertanyaan Perceiving
            "Apakah Anda seseorang yang fleksibel terhadap jadwal? (Y/T)",
            "Apakah Anda seseorang yang menyukai kehidupan yang bebas dan santai? (Y/T)"
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
        for (int i = 0; i < 20; i++) {
          no++;
          cout << left << setw(5) << no;
          cout << left << setw(120) << pertanyaan[i] << endl;
          cin >> jawaban;

          // Mengabaikan input buffer untuk membersihkan sisa karakter dalam buffer hingga menemukan newline ('\n').
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          // Switch case untuk memanipulasi skor berdasarkan jawaban
          switch (jawaban) {
            case 'y':
            case 'Y':
              if (i == 0 || i == 1 || i == 2) {
                skorEkstrovert += 1;
              } else if (i == 3 || i == 4) {
                skorIntrovert += 1;
              } else if (i == 5 || i == 6 || i == 7) {
                skorSensing += 1;
              } else if (i == 8 || i == 9) {
                skorINtuition += 1;
              } else if (i == 10 || i == 11 || i == 12) {
                skorThinking += 1;
              } else if (i == 13 || i == 14) {
                skorFeeling += 1;
              } else if (i == 15 || i == 16 || i == 17) {
                skorJudging += 1;
              } else if (i == 18 || i == 19) {
                skorPerceiving += 1;
              }
              break;
            case 't':
            case 'T':
              if (i == 0 || i == 1 || i == 2) {
                skorIntrovert += 1;
              } else if (i == 3 || i == 4) {
                skorEkstrovert += 1;
              } else if (i == 5 || i == 6 || i == 7) {
                skorINtuition += 1;
              } else if (i == 8 || i == 9) {
                skorSensing += 1;
              } else if (i == 10 || i == 11 || i == 12) {
                skorFeeling += 1;
              } else if (i == 13 || i == 14) {
                skorThinking += 1;
              } else if (i == 15 || i == 16 || i == 17) {
                skorPerceiving += 1;
              } else if (i == 18 || i == 19) {
                skorJudging += 1;
              }
              break;
          default:
            cout << "Jawaban tidak valid. Masukkan jawaban yang benar." << endl;
            i--;  // Mengurangi nilai i agar pertanyaan diulang
            no--; // Mengurangi nilai no agar sesuai dengan nomor pertanyaan
          }
        }

        // Menentukan kepribadian
        string caraMendapatkanEnergi,
            caraMemperolehInformasi,
            caraMengambilKeputusan,
            orientasiTerhadapKehidupan;

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
        string ENFP = "senang belajar secara berkelompok dan bertukar ide, menyukai belajar di tempat yang Anda sukai, menjadi termotivasi ketika dapat menerapkan teori dan konsep sebagai "
                      "self-growth dan berdampak positif bagi orang lain.";

        cout << setfill('-') << setw(145) << "" << setfill(' ') << endl;
        cout << endl << "Hasil Tes: " << endl;

        if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ISTJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ISTJ;
        }
        else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << "ESTJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ESTJ;
        }
        else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ISFP" << endl;
          cout << "Gaya belajar: " << "Anda " << ISFP;
        }
        else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ESFP" << endl;
          cout << "Gaya belajar: " << "Anda " << ESFP;
        }
        else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ISTP" << endl;
          cout << "Gaya belajar: " << "Anda " << ISTP;
        }
        else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ESTP" << endl;
          cout << "Gaya belajar: " << "Anda " << ESTP;
        }
        else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ISFJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ISFJ;
        }
        else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "S" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ESFJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ESFJ;
        }
        else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ISFJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ISFJ;
        }
        else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "INTP" << endl;
          cout << "Gaya belajar: " << "Anda " << INTP;
        }
        else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ENTP" << endl;
          cout << "Gaya belajar: " << "Anda " << ENTP;
        }
        else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "INTJ" << endl;
          cout << "Gaya belajar: " << "Anda " << INTJ;
        }
        else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "T" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ENTJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ENTJ;
        }
        else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "J") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ENFJ" << endl;
          cout << "Gaya belajar: " << "Anda " << ENFJ;
        }
        else if (caraMendapatkanEnergi == "I" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "INFP" << endl;
          cout << "Gaya belajar: " << "Anda " << INFP;
        }
        else if (caraMendapatkanEnergi == "E" && caraMemperolehInformasi == "N" && caraMengambilKeputusan == "F" && orientasiTerhadapKehidupan == "P") {
          cout << "Kepribadian MBTI Anda: " << setw(10) << "ENFP" << endl;
          cout << "Gaya belajar: " << "Anda " << ENFP;
        }

        cout << endl << endl;

        // Tanya apakah ingin mengulang tes
        char ulangi;
        cout << "Apakah Anda ingin mengulang tes? (Y/T): ";
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
