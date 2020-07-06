#ifndef Beobachter_H
#define Beobachter_H

#include "AbstrakterBeobachter.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>


class Beobachter : public AbstrakterBeobachter{
public:
    void aktualisieren(int wert);
};

#endif