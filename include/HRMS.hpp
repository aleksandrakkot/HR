#ifndef HRMS_hpp
#define HRMS_hpp

#include <employee.hpp>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include <algorithm>
#include <iomanip>

using namespace std;

class hrms
{
    private:
    vector <employee> workers;                //kontener na wszytskich pracowników
    map <string,vector<string>> map_workers;  //iddepartment a id wszytstkich pracowników
    vector <pair<string,double>>salary;       //kontener z informacjami o zarobkach

    public:
    void read_from_file_workers();
    void read_from_file_salary();
    void add_new_worker(employee worker);
    void print_workers();
    void new_map();
    void print_map();
    void changeSalary(string employeeId, double salary);
    void add_salary(employee employee, string departmentId, double salary);
    void print_salary();
    void print_sorted_salary();
    void add(employee employee, std::string departmentid, double sal);
    void print_depart(string departmentid);


};

#endif