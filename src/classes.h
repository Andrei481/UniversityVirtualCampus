#include <iostream>
#include <vector>
#include <string>

class User{
    private:
        std::string name;
        uint8_t age;
        char gender;
        std::string phone_number;
        std::string username, password;
    public:
        virtual void f() = 0;
        
        // Getters
        
        std::string getName()
        {
            return name;
        }
        
        uint8_t getAge()
        {
            return age;
        }

        std::string getUsername()
        {
            return username;
        }

        // Setters

        void setName(std::string name)
        {
            this->name = name;
        }

        void setAge(uint8_t age)
        {
            this->age = age;
        }

        void setUsername(std::string username)
        {
            this->username = username;
        }
};

class Student : private User{
    private:
        std::vector<std::string> courses;
        double course_average, annual_average;
    public:
        void checkGrades()
        {

        }

        double getCourseAverage()
        {
            return course_average;
        }

        double getAnnualAverage()
        {
            return annual_average;
        }
};

class Teacher : private User{
    private:
        std::string course;
    public:
        void gradeStudent()
        {

        }
};