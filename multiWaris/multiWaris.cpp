#include <iostream>
using namespace std;

class orang {
public:
    int umur;
    orang(int pUmur) :
        umur(pUmur) 
    {
        cout << "Orang dibuat dengan umur " << umur << "\n" << endl;
    }
};

class pekerja : virtual public orang {
public:
    pekerja(int pUmur)
    {
        cout << "pekerja dibuat\n" << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
