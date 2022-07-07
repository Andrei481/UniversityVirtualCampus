#include <iostream>
#include "classes.h"
#include "menu_utils.h"


int main(int argc, char const *argv[])
{
    std::string fullname;
    uint16_t age;
    std::cout << "What is your name?" << std::endl;
    std::getline(std::cin, fullname);
    std::cout << "How old are you?" << std::endl;
    std::cin >> age;

    Student s(fullname, age);
    s.getUserInfo();

    running_session();

    return 0;
}
