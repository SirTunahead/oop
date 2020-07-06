#include <iostream>
#ifndef __Vektor3d_H_INCLUDED__
#define __Vektor3d_H_INCLUDED__

class Vektor3d{

    public:
        int x;
        int y;
        int z;
        
        Vektor3d(float a, float b, float c);
        void getValue();

        const Vektor3d operator+(const Vektor3d& other);
        const Vektor3d operator-(const Vektor3d& other);
        const Vektor3d operator*(const Vektor3d& other);
        const bool operator==(const Vektor3d& v);
        const Vektor3d operator++();
        const Vektor3d operator++(int d);
        const Vektor3d operator/(const Vektor3d& other);
        friend std::ostream& operator<<(std::ostream& out, const Vektor3d& other);
};

#endif