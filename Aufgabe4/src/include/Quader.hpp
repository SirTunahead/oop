
#ifndef Quader_H
    #define Quader_H
    #include "Rechteck.hpp"

    class Quader : public Rechteck{

        private:
           
            float hoehe;
            float* ptrH = &hoehe;

        public:
            Quader();
            float getHoehe();
            void setHoehe(float hoehe);
            float volumen();
    };

#endif