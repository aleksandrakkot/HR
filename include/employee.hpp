  
#ifndef employee_hpp
#define employee_hpp

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iomanip>

class employee
{
    private:
    bool checkId(std::string id);
    

    public:
    std::string id;
    std::string name;
    std::string surname;
    std::string departmentId;
    std::string position;
    employee(std::string ID, std::string NAME, std::string SURNAME, std::string DEPARTMENT, std::string POSITION); //konstruktor
    void print(int lp);
};

#endif