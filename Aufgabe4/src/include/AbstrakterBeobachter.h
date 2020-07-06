#ifndef AbstrakterBeobachter_H
#define AbstrakterBeobachter_H


#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>

class AbstrakterBeobachter {
public:
    virtual void aktualisieren(int) = 0;
};

#endif