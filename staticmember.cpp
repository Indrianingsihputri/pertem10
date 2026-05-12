#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printAll();

    Mahasiswa(string pNama) : nama(pNama)
    {
        setID();
    }
};

int Mahasiswa::nim = 10;

void Mahasiswa::setID()
{
    id = nim;
}