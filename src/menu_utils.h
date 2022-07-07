#include <iostream>

void running_session()
{
    bool b_running = true;
    uint8_t choice;
    while(b_running)
    {
        std::cout << "========================== Floppel University Virtual Campus =============================" << std::endl;
        std::cout << std::endl << std::endl << std::endl;
        std::cout << "Please choose an action:" << std::endl << std::endl;
        std::cout << "1. Login" << std::endl;
        std::cout << "2. Register" << std::endl;
        std::cout << "0. Exit" << std::endl << std::endl;
    
        std::cin >> choice;

        switch (choice)
        {
            case '0':
                std::cout << "Choice: Exit" << std::endl;
                b_running = 0;
                break;
            case '1':
                std::cout << "Choice : Login" << std::endl;
                break;
            case '2':
                std::cout << "Choice : Register" << std::endl;
                break;
            default:
                std::cout << "Invalid choice." << std::endl;
                break;
        }
    }
}