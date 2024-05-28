//polimorphy

#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0;                       //pure virtual function
    
    virtual void pesan()                            //virtual function biasa
    {
      cout << "pesan dari seseorang" << endl;
    }
};

class joko : public seseorang {
public:
    void pesan() {
        cout << "pesan dari joko" << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}