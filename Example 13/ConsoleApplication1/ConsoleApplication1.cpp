#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cmath>
#include <locale.h>

using namespace std;

void show_progress_bar(int time, const std::string& message, char symbol)
{
    string progress_bar;
    const double progress_level = 1.42;

    cout << message << "\n\n";

    for (double percentage = 0; percentage <= 100; percentage += progress_level)
    {
        progress_bar.insert(0, 1, symbol);
        cout << "\r [" << ceil(percentage) << '%' << "] " << progress_bar;
        this_thread::sleep_for(chrono::milliseconds(time));
    }
    cout << "\n\n";
}

int main()
{
    setlocale(LC_ALL, "Turkish");
    show_progress_bar(100, "Yükleniyor!", '-');
}