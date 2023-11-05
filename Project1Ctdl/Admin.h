#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Admin {
public:
    Admin() {
        LoadAdminData();
    }

    bool Login() {
        string username, password;
        cout << setfill(' ') << setw(60) << "Username: " << endl;
        cin >> username;
        cout << setfill(' ') << setw(60) << "Password: " << endl;
        cin >> password;

        for (const auto& admin : adminList) {
            if (admin.first == username && admin.second == password) {
                cout << "Dang nhap thanh cong\n";
                return true;
            }
        }
        cout << "Dang nhap that bai vui long thu lai\n";
        return false;
    }

private:
    vector<pair<string, string>> adminList;

    void LoadAdminData() {
        ifstream file("Admin.txt");
        if (file.is_open()) {
            string username, password;
            while (file >> username >> password) {
                adminList.push_back(make_pair(username, password));
            }
            file.close();
        }
    }
};