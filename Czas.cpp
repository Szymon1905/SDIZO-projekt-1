#include "Czas.h"
#include <chrono>


using namespace std;
using namespace std::chrono;

void Czas::Start() {
    start = high_resolution_clock::now();
}

void Czas::Stop() {
    stop = high_resolution_clock::now();
}

void Czas::Zmierzony_czas() {
    long zmierzony_czas = duration_cast<nanoseconds>(Czas::stop - Czas::start).count();
    cout << "Czas wykonania: " << zmierzony_czas << "ms" << endl;
}


