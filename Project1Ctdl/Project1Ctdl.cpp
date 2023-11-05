#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Giaodien.h" // Giao dien ATM
#include "Windows.h" // Do hoa
#include "Time.h" // Dung de dem thoi gian, 60 giay neu nguoi dung khong hoat dong thi dung chuong trinh

using namespace std;

int main() {
    SetColor(0,5);
    thread timeThread(checkTimeAndExit);

    giaodienbandau();

    char select;
    cin >> select;

    countdown = 60; 

    switch (select) {
        case 'A':
            giaodiendangnhapAdmin();

            giaodienchucnangAdmin();
            char adminChoice;
            countdown = 10;
            do {
                cin >> adminChoice;
                countdown = 60;
                switch (adminChoice) {
                    case '1':
                        break;
                    case '2':
                        break;
                    case '3':
                        break;
                    case '4':
                        break;
                    case '5':
                        break;
                    default:
                        cout << "Lua chon khong hop le, vui long chon lai" << endl;
                }
            } while (adminChoice != '5');
            break;
        case 'U':
            giaodiendangnhapUser();
            giaodienchucnangUser();
            char userChoice;
            countdown = 60;
            do {
                cin >> userChoice;
                countdown = 60;
                switch (userChoice) {
                    case '1':
                        break;
                    case '2':
                        break;
                    case '3':
                        break;
                    case '4':
                        break;
                    case '5':
                        break;
                    case '6':
                        break;
                    default:
                        cout << "Khong co lua chon nay, vui long chon lai" << endl;
                }
            } while (userChoice != '6');
            break;
        default:
            giaodienKhongchon();
            cout << "hhffggh";
    }
    timeThread.join();

    return 0;
}
