#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include "AbstrakterBeobachter.h"

class AbstraktesSubjekt {
public:
    virtual void registrieren(const std::shared_ptr<AbstrakterBeobachter>&) {}
    virtual void entfernen(const std::shared_ptr<AbstrakterBeobachter>&) {}
    virtual void benachrichtigen(){}
    virtual void setzeWert(int){}
};
