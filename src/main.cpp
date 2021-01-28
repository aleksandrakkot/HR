#include <employee.hpp>
#include <HRMS.hpp>

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

hrms nowy;
void case0()
{
  exit(1);
}

void case1()
{
     cout << "Drukowanie wszystkich pracownikow" <<endl;
                nowy.print_workers();
}

void case2(){
     cout << "Drukowanie mapy pomiedzy pracownikami a ID departamentu"<<endl;
                nowy.print_map();
}

void case3(){
     cout << "Podaj nazwe departamentu z ktorego pracownikow chcesz znalezc:" << endl;
                string dep;
                cin >> dep;
                nowy.print_depart(dep);
}

void case4(){
     cout << "Drukowanie zarobkow:" << endl;
                nowy.print_salary();
}

void case5(){
    cout << "Drukowanie posortowanych zarobkow pracownikow" << endl;
                nowy.print_sorted_salary();
}
void case6()
{
string new_id;
 double new_salary;
cout << "Podaj ID pracownika ktoremu chcesz zmienic wynagrodzenie:" <<endl;
cin >> new_id;
cout << "Podaj nowe wynagrodzenie:" << endl;
cin >> new_salary;
try
{
   nowy.changeSalary(new_id,new_salary);
}
catch(const std::exception& e)
{
   std::cerr << e.what() << '\n';
    }
}

void case7(){
    cout << "Dodawanie nowego pracownika" <<endl;
    double new_salary;
     string id,name,surname,depart,position;
    cout << "Podaj id" <<endl;
    cin >> id;
    cout <<"Podaj imie" <<endl;
    cin >> name;
 cout << "Podaj nazwisko" <<endl;
 cin >> surname;
 cout << "Podaj ID departamentu" << endl;
 cin >> depart;
cout << "Podaj pozycje" << endl;
cin >> position;
cout << "Podaj pensje" << endl;
 cin >> new_salary;
                try
                {
                    employee add_worker(id, name, surname, depart, position);
                    nowy.add(add_worker, depart, new_salary);
                    nowy.add_new_worker(add_worker);
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
}
using namespace std;
 
int main()
{
    try
{
        nowy.read_from_file_workers();
        nowy.read_from_file_salary();
}
catch(const std::exception& e)
 {
   std::cerr << e.what() << '\n';
   return -1;
 }
    nowy.new_map();
    while(1)
    {
        cout<<"Wybierz:"<<endl;
        cout<<"0. Koniec"<<endl;
        cout<<"1. Drukowanie wszystkich pracownikow (print_workers)"<<endl;
        cout<<"2. Drukowanie mapy pomiedzy pracownikami a ID departamentu (map_workers)"<<endl;
        cout<<"3. Drukowanie pracownikow znajdujacych sie w zadanym departamencie (print_depart)"<<endl;
        cout<<"4. Drukowanie zarobkow pracownikow wraz z ich ID (print_salary)"<<endl;
        cout<<"5. Drukowanie posortowanych zarobkow wraz z danymi pracownikow (print_sorted_salary)"<<endl;
        cout<<"6. Zmiana pensji wybranego pracownika (changeSalary)"<<endl;
        cout<<"7. Dodawanie nowego pracownika wraz z jego wynagrodzeniem (add)"<<endl;
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 0:
            {
                case0();
            }
            case 1:
            {
                case1();
                break;
            }
            case 2:
            {
                case2();
                break;
            }
            case 3:
            {
                case3();
                break;
            }
            case 4:
            {
                case4();
                break;
            }
            case 5:
            {
                case5();
                break;
            }
            case 6:
            {
                case6();
                break;
            }
            case 7:
            {
                case7();
                break;
            }
            default:
            {
                cout << "Wybierz ponownie" <<endl;
                break;
            }
        }
    }
    return 0;
}