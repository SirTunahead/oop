#ifndef EXPCEPTION_H
    #define EXPCEPTION_H

    class ExceptionHandler{

        public:
            void throwException(int nr);
            void throwException(double nr);
            void throwLOGException(int log);
            void throwExceptionIndex(int in);
    };
#endif