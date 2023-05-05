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
    ifstream file;

    file.open((argv[1]));
    if (file.fail()){
        cerr << "No pude abrir ese archivo" << endl;
        return 1;
    }
    string word1, word2;
    file >> word1;
    getline(file, word2);
    cout << word1 << endl << word2 << endl;
    file.close();

    file.open((argv[1]));
    if (file.fail()){
        cerr << "No pude abrir ese archivo" << endl;
        return 1;
    }
    getline(file, word1);
    file >> word2;
    cout << word1 << endl << word2 << endl;
    file.close();

    return 0;
}