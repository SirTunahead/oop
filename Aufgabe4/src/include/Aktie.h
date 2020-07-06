#include "AbstraktesSubjekt.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>

class Aktie : public AbstraktesSubjekt{

    private:
         std::vector<std::shared_ptr<AbstrakterBeobachter>> _beobachter;
         int _wert = 0;

    public:
        void registrieren(const std::shared_ptr<AbstrakterBeobachter>& beobachter);
        void entfernen(const std::shared_ptr<AbstrakterBeobachter>& beobachter);
        void benachrichtigen();
        void benachrichtigenSchwelle();
        void setzeWert(int wert);
};