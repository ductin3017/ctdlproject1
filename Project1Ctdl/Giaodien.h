#include <iostream>
#include <iomanip>
#include "TheTu.h"
#include "Admin.h"
using namespace std;

string star(22, '-');
string title = "MO PHONG MAY ATM";

void giaodienbandau() {
    system("cls");
    cout << setfill(' ') << setw(76) << title << endl;
    cout << setfill(' ') << setw(79) << star << endl << endl;

    cout << setfill(' ') << setw(83) << "VUI LONG CHON QUYEN DANG NHAP" << endl << endl;

    cout << setfill(' ') << setw(79) << star << endl;
    cout << setfill(' ') << setw(79) << "| A. DANG NHAP ADMIN |" << endl;
    cout << setfill(' ') << setw(79) << star << endl << endl;

    cout << setfill(' ') << setw(79) << star << endl;
    cout << setfill(' ') << setw(79) << "| U. DANG NHAP USER  |" << endl;
    cout << setfill(' ') << setw(79) << star << endl;
}

void giaodiendangnhapAdmin() {
    system("cls");
    cout << setfill(' ') << setw(76) << title << endl;
    cout << setfill(' ') << setw(79) << star << endl;
    cout << setfill(' ') << setw(79) << "|   DANG NHAP ADMIN  |" << endl;
    cout << setfill(' ') << setw(79) << star << endl;
    Admin adminSystem;

    while (true) {
        if (adminSystem.Login()) {

            break;
        }
    }
    /*cout << setfill(' ') << setw(64) << "User: " << endl;
    cout << setfill(' ') << setw(64) << "Pass: " << endl;*/
}

void giaodienchucnangAdmin() {
    system("cls");
    cout << setfill(' ') << setw(76) << title << endl;
    cout << setfill(' ') << setw(79) << star << endl;
    cout << setfill(' ') << setw(40) << star << endl;
    cout << setfill(' ') << setw(40) << "|   TAI KHOAN ADMIN  |" << setfill(' ') << setw(39) << "------ | MENU | ------" << endl;
    cout << setfill(' ') << setw(40) << star << endl;
    cout << setfill(' ') << setw(81) << "1. Xem danh sach tai khoan" << endl;
    cout << setfill(' ') << setw(72) << "2. Them tai khoan" << endl;
    cout << setfill(' ') << setw(71) << "3. Xoa tai khoan" << endl;
    cout << setfill(' ') << setw(75) << "4. Mo khoa tai khoan" << endl;
    cout << setfill(' ') << setw(63) << "5. Thoat" << endl;
    cout << setfill(' ') << setw(79) << star << endl;
}

void giaodiendangnhapUser() {
    system("cls");
    cout << setfill(' ') << setw(76) << title << endl;
    cout << setfill(' ') << setw(79) << star << endl;
    cout << setfill(' ') << setw(79) << "|   DANG NHAP USER   |" << endl;
    cout << setfill(' ') << setw(79) << star << endl;
    TheTu thetuSystem;

    while (true) {
        if (thetuSystem.Login()) {

            break;
        }
    }
}

void giaodienchucnangUser() {
    system("cls");
    cout << setfill(' ') << setw(76) << title << endl;
    cout << setfill(' ') << setw(79) << star << endl;
    cout << setfill(' ') << setw(40) << star << endl;
    cout << setfill(' ') << setw(40) << "|   TAI KHOAN USER   |" << setfill(' ') << setw(39) << "------ | MENU | ------" << endl;
    cout << setfill(' ') << setw(40) << star << endl;
    cout << setfill(' ') << setw(81) << "1. Xem thong tin tai khoan" << endl;
    cout << setfill(' ') << setw(66) << "2. Rut tien" << endl;
    cout << setfill(' ') << setw(69) << "3. Chuyen tien" << endl;
    cout << setfill(' ') << setw(80) << "4. Xem noi dung giao dich" << endl;
    cout << setfill(' ') << setw(68) << "5. Doi ma Pin" << endl;
    cout << setfill(' ') << setw(63) << "6. Thoat" << endl;
    cout << setfill(' ') << setw(79) << star << endl;
}

void giaodienKhongchon() {
    system("cls");
    cout << setfill(' ') << setw(76) << title << endl;
    cout << setfill(' ') << setw(79) << star << endl;
    cout << setfill(' ') << setw(88) << "LUA CHON KHONG HOP LE, VUI LONG CHON LAI" << endl;
}