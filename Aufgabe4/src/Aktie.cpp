#include "include/Aktie.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>


void Aktie::registrieren(const std::shared_ptr<AbstrakterBeobachter>& beobachter) {
    _beobachter.push_back(beobachter);
    }

void Aktie::entfernen(const std::shared_ptr<AbstrakterBeobachter>& beobachter) {
    _beobachter.erase(std::remove_if(_beobachter.begin(), _beobachter.end(),
    [&](const std::shared_ptr<AbstrakterBeobachter>& vergleich) {
    return vergleich == beobachter;
        }));
}

void Aktie::benachrichtigen() {
    for (auto& b: _beobachter)
    b->aktualisieren(_wert);
}

void Aktie::benachrichtigenSchwelle(){
    if(_wert <= 300){
        benachrichtigen();
    }
}

void Aktie::setzeWert(int wert) {
    _wert = wert;
    benachrichtigen();
}