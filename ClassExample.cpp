//main.cpp
#include <iostream>
#include "employee.h"
#include <string>
using namespace std;


int main() 
{
  employee x,y;
  x.Setname("tom");
  x.Setnum(40);

  y.Setname("bob");
  y.Setnum(35);

  cout << "The details are: "<< endl;
  cout << "emp 1 " << x.getname() << " " << x.getnum() << endl;
  cout << "emp 2 " << y.getname() << " " << y.getnum() << endl;
  return 0;
}

//employee.cpp
#include "employee.h"
#include <string>
using namespace std;

employee :: employee()
{
  name = " ";
  number = 0;
}

void employee :: Setname(std :: string s)
{
  name = s;
}

std :: string employee :: getname ()
{
return name;
}

void employee :: Setnum(int a)
{
  number =a;
}

int employee :: getnum()
{
  return number;
}
//employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class employee{
private:
std :: string name;
int number;

public:
employee();
void Setname(std :: string);
std :: string getname();
void Setnum(int);
int getnum();
};

#endif
