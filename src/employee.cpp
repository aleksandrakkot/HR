#include <employee.hpp>


using namespace std;

class WrongFormatId : public exception
{
    virtual const char *what() const throw()
    {
       return "Niepoprawny format id (powinny byc cyfry)";
    }
};

std::string uppercase(std::string word)
{
    std::string wyraz = word;
    return wyraz;
}
employee::employee(std::string ID, std::string NAME, std::string SURNAME, std::string DEPARTMENT, std::string POSITION )
{
    id = uppercase(ID);
    if(!checkId(ID))
    {
        throw WrongFormatId();
    }
    name = uppercase(NAME);
    surname = uppercase(SURNAME);
    departmentId = uppercase(DEPARTMENT);
    position = uppercase(POSITION);
}
void employee::print(int lp)
{
    cout <<left<<setw(6)<<lp<<setw(10)<<id<<setw(15)<<name<<setw(15)<<surname<<setw(15)<<departmentId<<setw(15)<<position<<endl;
    cout<<"_____________________________________________________________________________"<<endl;
}

bool employee::checkId(std::string id)
{
    for(int i = 0; i < id.size(); i++)
    {
        if(!isdigit(id[i]))
        {
            return false;
        }
    }
    return true;
}