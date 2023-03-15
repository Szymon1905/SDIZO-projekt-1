#include <iostream>
#include <chrono>

#ifndef PROJEKT_SDIZO_NR_1_SZYMON_BORZDYNSKI_CZAS_H
#define PROJEKT_SDIZO_NR_1_SZYMON_BORZDYNSKI_CZAS_H


using namespace std;
using namespace std::chrono;

class Czas {
public:
    high_resolution_clock::time_point start;
    high_resolution_clock::time_point stop;

    void Start();

    void Stop();

    void Zmierzony_czas();

};


#endif //PROJEKT_SDIZO_NR_1_SZYMON_BORZDYNSKI_CZAS_H

