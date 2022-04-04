#include "chocolateboiler.h"

ChocolateBoiler* ChocolateBoiler::uniqueInstance = NULL;

ChocolateBoiler::ChocolateBoiler()
{
    empty = true;
    boiled = false;
}

ChocolateBoiler* ChocolateBoiler::getInstance() {
    if (uniqueInstance == NULL) {
        uniqueInstance = new ChocolateBoiler();
    }
    return uniqueInstance;
}

void ChocolateBoiler::fill() {
    if (isEmpty()) {
        empty = false;
        boiled = false;
        cout << "Poshol shjokolad" << endl;
    }
}

void ChocolateBoiler::drain() {
    if (!isEmpty() && isBoiler()) {
        cout << "Slivanie" << endl;
        empty = true;
    }
}

void ChocolateBoiler::boil() {
    if (!isEmpty() && !isBoiled()) {
        cout << "Kipyachenie" << endl;
        boiled = true;
    }
}

bool ChocolateBoiler::isEmpty() {
    return empty;
}

bool ChocolateBoiler::isBoiled() {
    return boiled;
}