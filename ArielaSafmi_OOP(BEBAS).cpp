#include <iostream>
#include <string>

class Cafe {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int umur;
    std::string status;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Pelanggan
    Cafe (std::string n, int u, std::string s) {
        nama = n;
        umur = u;
        status = s;
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }

    void setStatus(std::string s) {
        status = s;
    }

    std::string getStatus() {
        return status;
    } 

    // Metode untuk menampilkan perkenalan diri
    void pelanggan_cafe() {
        std::cout << "Nama: " << nama << ", Umur: " << umur << ", Status: " << status << std::endl;
    }
};

int main() {
    Cafe c1("Ola", 21 ,"dine in" );
   
    std::cout << "pelanggan_cafe:" << std::endl;
    c1.pelanggan_cafe() ;

std::cout << "status:" << c1.getStatus();

    return 0;
}