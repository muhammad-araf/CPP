#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream file("data.txt");
    file << "I Am Muhammad Araf" << endl;
    file << "Learing CPP with Muhammad-araf on GitHub";
    file.close();
    ifstream readFile("data.txt");
    string line;
    cout << "Reading from file:\n";
    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close(); 

    return 0;
}
