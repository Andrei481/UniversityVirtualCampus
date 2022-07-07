#include <iostream>
#include <vector>
#include <string>

class User{
    private:
        std::string name;
        uint16_t age;
        char gender;
        std::string phone_number;
        std::string username, password;
    public:
        virtual void getUserInfo() = 0;
        
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

        void setAge(uint16_t age)
        {
            this->age = age;
        }

        void setUsername(std::string username)
        {
            this->username = username;
        }
    friend class Student;
};

class Student : private User{
    private:
        std::vector<std::string> courses;
        double course_average, annual_average;
    public:
        Student(std::string name, uint16_t age)
        {
            this->name = name;
            this->age = age;
        }
        void getUserInfo()
        {
            std::cout << "Name: " << name << std::endl << "Age: " << age <<std::endl; 
        }

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