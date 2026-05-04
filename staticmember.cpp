#include <iostream>
using namespace std;

class Mahasiswa {

public:
    static int nim; // deklarasi variabel static yaitu variabel nim
    // deklarasi variabel member
    int id;
    string nama;

    // deklarasi prosedur setID() dan printAll()
    void setID();
    void printAll();
}