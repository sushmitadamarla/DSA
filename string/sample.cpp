#include <fstream>
using namespace std;

int main() {
    ifstream orig("data.txt");
    ofstream temp("temp.txt");
    string line;
    while (getline(orig, line)) {
        if (line.find("Record to delete") == -1) {
            temp << line << '\n';
        }
    }
    orig.close();
    temp.close();
    rename("temp.txt", "data.txt");
    return 0;
}
