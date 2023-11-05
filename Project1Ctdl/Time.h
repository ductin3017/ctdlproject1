#include <thread>
#include <chrono>
#include <atomic>

using namespace std;

atomic<int> countdown(60);

void checkTimeAndExit() {
    while (countdown > 0) {
        this_thread::sleep_for(chrono::seconds(1));
        countdown--;
    }
    system("cls");
    cout << setfill(' ') << setw(76) << "HET PHIEN LAM VIEC" << endl;
    exit(0);
}