#include <cstddef>
#include <sstream>
#ifndef maybe_h
    #define maybe_h

   template <class T> class Maybe{
        private:
           T * value;

        public:
        //Constructor with parameters a)
        Maybe(T value){
        this -> value = new T(value);
      }

        //Constructor without parameters b)

        Maybe(){
          this->value = NULL;
        }

        // c)
        const bool empty(){
          if(this->value == NULL){
            return true;
          }
            else
          {
            return false;
          }
        }

        // d)
        const T & theValue(){
          if(this->value == NULL){
            throw "ObjectIsEmpty";
          T & t = * this->value;
          return t;
          }
        }

        // e)
        const std::string toString(){
            if(this->value == NULL){
                return "Empty";
            try{
                std::ostringstream buffer;
                buffer << *this->value;
                return buffer.str();
            } catch (char const* e){
                throw "This Object doesn't implement operator << ";
            }
            }
        }

        //f)
        friend Maybe<T> operator+(Maybe<T> summand1, Maybe<T> summand2) {
        try {
            Maybe<T> ret (summand1.theValue() + summand2.theValue());
            return ret;
        } catch (char const * e) {
            if (e == "ObjectIsEmpty") {
                Maybe<T> ret;
                return ret;
            }
            throw "This Objekt does not implement operator+";
        }
    }

        friend Maybe<T> operator/(Maybe<T> dividend, Maybe<T> divisor) {
        try {
            Maybe<T> ret (dividend.theValue() / divisor.theValue());
            return ret;
        } catch (char const * e) {
            if (e == "ObjectIsEmpty") {
                Maybe<T> ret;
                return ret;
            }
            throw "This Objekt does not implement operator/";
        }
    }
    
    };

    template <> class Maybe<std::string>{
        private:
        std::string * value;

        //Constructor with parameters a) 2

        public:
          Maybe(std::string value){
        this->value = new std::string(value);
      }

        //Constructor without parameters b) 2

        Maybe(){
          this->value = NULL;
        }

        // c) 2
        const bool empty(){
          if(this->value == NULL){
            return true;
          }
            else
          {
            return false;
          }
        }

        // d) 2
        const std::string & theValue(){
          if(this->value == NULL){
            throw "ObjectIsEmpty";
          std::string & t = * this->value;
          return t;
          }
        }

        // e) 2
        const std::string toString(){
            if(this->value == NULL){
                return "Empty";
            try{
                std::ostringstream buffer;
                buffer << *this->value;
                return buffer.str();
            } catch (char const* e){
                throw "This Object doesn't implement operator << ";
            }
            }
        }

        //f) 2
        friend Maybe<std::string>operator+(Maybe<std::string> summand1, Maybe<std::string>summand2){
            try{
                Maybe<std::string> ret (summand1.theValue() + summand2.theValue());
                return ret;
            } catch(char const* e){
                if(e== "ObjectisEmpty"){
                    Maybe<std::string> ret;
                    return ret;
                }
                throw "This Object doesn't implement operator +";
            }
        }

        friend Maybe<int> operator/(Maybe<std::string> dividend, Maybe<std::string> divisor) {
        try {
            Maybe<int> ret (dividend.theValue().length() - divisor.theValue().length());
            return ret;
        } catch (char const * e) {
            if (e == "ObjectIsEmpty") {
                Maybe<int> ret;
                return ret;
            }
            throw "This Objekt does not implement operator/";
        }
    }
    };  
#endif