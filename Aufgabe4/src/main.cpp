#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include "include/Rechteck.hpp"
#include "include/Quader.hpp"
#include "include/Beobachter.h"
#include "include/Aktie.h"

int main(){
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float* ptrX = &x;
    float* ptrY = &y;
    float* ptrZ = &z;
    printf("***************************************\n");
    printf("Zahl fuer die laenge eingeben: ");
    std::cin >> x;
    printf("Zahl fuer die breite eingeben: ");
    std::cin >> y;
    printf("Zahl fuer die hohe eingeben: ");
    std::cin >> z;
    printf("***************************************\n");

    Rechteck rechteck;
    rechteck.setLaenge(*ptrX);
    rechteck.setBreite(*ptrY);
    Quader quader;
    quader.setBreite(*ptrX);
    quader.setLaenge(*ptrY);
    quader.setHoehe(*ptrZ);

    printf("***************************************\n");
    printf("***************Aufgabe1****************\n");
    printf("***************************************\n");
    printf("Laenge vom Rechteck: " );
    std::cout << rechteck.getLaenge() << std::endl;
    printf("---------------------------------------\n");
    printf("Breite vom Rechteck: ");
    std::cout  << rechteck.getBreite() << std::endl;
    printf("---------------------------------------\n");
    printf("der Umfang vom Rechteck ist: ");
    std::cout  << rechteck.umfang() << std::endl;
    printf("---------------------------------------\n");
    printf("die Flaeche vom Rechteck ist: ");
    std::cout << rechteck.rFlaeche() << std::endl;
    printf("***************************************\n");

    std::cout << "der Umfang vom Quader ist: " << quader.umfang() << std::endl;
    printf("das Volumen vom Quader ist: ");
    std::cout << quader.volumen() << std::endl;

    printf("***************************************\n");
    printf("***************Aufgabe2****************\n");
    printf("***************************************\n");

    struct Base {
        int a;
    };

    struct Derived: public Base {
        int b;
    };

    Base base;
    base.a = 3;

    Derived derived;
    derived.b = 4;
    derived.a = base.a;

    printf("Base a = ");
    std::cout << base.a << std::endl;
    printf("Derived a = ");
    std::cout << derived.a << std::endl;
    printf("Derived b = ");
    std::cout << derived.b << std::endl;

    printf("***************************************\n");
    printf("***************Aufgabe3****************\n");
    printf("***************************************\n");


    std::shared_ptr<AbstraktesSubjekt> subjekt = std::make_shared<Aktie>();
    std::shared_ptr<AbstrakterBeobachter> MrAktie = std::make_shared<Beobachter>(); 
    std::shared_ptr<AbstrakterBeobachter> MrGeldRegiertdieWelt = std::make_shared<Beobachter>();
    std::shared_ptr<AbstrakterBeobachter> JohnMcMoneyKack = std::make_shared<Beobachter>();

    subjekt->setzeWert(300);
    subjekt->registrieren(MrAktie);
    subjekt->registrieren(MrGeldRegiertdieWelt);
    subjekt->registrieren(JohnMcMoneyKack);

    subjekt->benachrichtigen();

    return 0;
}