#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::ofstream;
using std::ifstream;


int main(int argc, char* argv[]){
    ofstream file(argv[1]);
    file << "Hola a Todos\n\nY a los demas tambien" << endl;
    file.close();
    return 0;
}