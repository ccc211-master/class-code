#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;
using std::getline;

int main(int argc, char* argv[]){
    ofstream file("data.bin", std::ofstream::out | std::ofstream::binary);
    // Cuando se usa este operador SIEMPRE se va como una cadena :(
    // file << 65535 << endl;
    // Para mandar datos binarios es necesario usar el metodo write.
    int value = 65535;
    file.write((char*)(&value), sizeof(int));
    file.close();

    
    return 0;
}