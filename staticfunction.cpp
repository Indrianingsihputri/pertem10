#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{

private:
    static int nim;

public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim)
    {
        nim = pNim;
    };

    static int getNim()
    {
        return nim;
    }

    Mahasiswa(string pNama) : nama(pNama)
    {
        setID();
    };
};

int Mahasiswa::nim = 0;

void Mahasiswa::setID()
{
    id = ++nim;
}

void Mahasiswa::printAll()
{
    cout << "ID: " << id << endl;
    cout << "Nama: " << nama << endl;
    cout << endl;
}

int main()
{
    Mahasiswa mhs1("Sri Ddi");
    Mahasiswa mhs2("Budi Jatmiko");

}