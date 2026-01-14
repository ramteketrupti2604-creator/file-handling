#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");
    string data;
    file >> data;
    cout << data;
    file.close();
    return 0;
}
