#include <iostream>

class User{
    private:
        std::string name;
        uint8_t age;
        char gender;
        std::string phone_number;
        std::string username, password;
    public:
        virtual void f() = 0;
};