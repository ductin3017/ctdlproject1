#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class TheTu {
public:
    TheTu() {
        LoadTheTuData();
    }

    bool Login() {
        string id, pin;
        cout << setfill(' ') << setw(61) << "ID: " << endl;
        cin >> id;
        cout << setfill(' ') << setw(60) << "Pin: " << endl;
        cin >> pin;

        for (const auto& thetu : thetuList) {
            if (thetu.first == id && thetu.second == pin) {
                cout << "Dang nhap thanh cong\n";
                return true;
            }
        }
        cout << "Dang nhap that bai vui long thu lai\n";
        return false;
    }

private:
    vector<pair<string, string>> thetuList;

    void LoadTheTuData() {
        ifstream file("TheTu.txt");
        if (file.is_open()) {
            string id, pin;
            while (file >> id >> pin) {
                thetuList.push_back(make_pair(id, pin));
            }
            file.close();
        }
    }
};