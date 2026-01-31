#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <limits>
using namespace std;

void press_enter_to_continue() {
    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}


int ore_trascorse(string ora_ingresso, string ora_uscita) {
        int h1 = stoi(ora_ingresso.substr(0, 2));
        int m1 = stoi(ora_ingresso.substr(3, 2));
        int h2 = stoi(ora_uscita.substr(0, 2));
        int m2 = stoi(ora_uscita.substr(3, 2));

        int minutes1 = h1 * 60 + m1;
        int minutes2 = h2 * 60 + m2;

        return ((minutes2 - minutes1) / 60)+1;
}
string current_time_hh_mm() {
    std::time_t t = std::time(nullptr);
    std::tm local{};
#ifdef _WIN32
    localtime_s(&local, &t);
#else
    localtime_r(&t, &local);
#endif
    std::ostringstream oss;
    oss << std::put_time(&local, "%H:%M");
    return oss.str();
}

