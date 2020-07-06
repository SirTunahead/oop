#ifndef _Rechteck_h
    #define _Rechteck_h

    class Rechteck{
    
        private:
            float laenge;
            float breite;
            float* ptrL = &laenge;
            float* ptrB = &breite;
        
           

        public:
            Rechteck();
            float getLaenge();
            float getBreite();
            void setLaenge(float laenge);
            void setBreite(float breite);
            float umfang();
            float rFlaeche();
    };

#endif