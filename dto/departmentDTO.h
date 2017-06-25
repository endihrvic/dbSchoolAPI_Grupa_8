#ifndef DEPARTMENTDTO_H
#define DEPARTMENTDTO_H

#include "../department.h"
#include "exchDelLine.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <sstream>


class DepartmentDTO
{
public:
	void save(Department);	
	void read(int);
	void del(int);
	void update(Department);
};

Department strToDepartment(std::string d){
	Department a;
	int b;
	std::stringstream ss;	
	ss << d;
	//setuj ID
	ss >> b;
	a.setId(b);
	ss.ignore(2); //ignorisi ", ", jer se iz streama uzimaju samo cifre
	//setuj Name
	getline(ss, d);
	a.setName(d);
	return a;
}

std::string departmentToStr(Department a){
	std::string s;
	return std::to_string(a.getId()) + ", " + a.getName();
}

void DepartmentDTO::save(Department a){
	//preuzmi string iz filea 
	std::ifstream is;
	is.open("./db/departments.txt");
	std::string s;
	while(getline(is, s)){
		if(a.getId() == (strToDepartment(s)).getId())
			throw std::runtime_error("ID se vec koristi\n");
	}	
	is.close();
	//ukoliko nije doslo do greske, upisi objekat u file
	std::ofstream os;
	os.open("./db/departments.txt", std::ios::app);
	os << departmentToStr(a) << "\n";
	os.close();
}

void DepartmentDTO::read(int id){
	bool found = false;
	Department a;
	std::ifstream is;
	is.open("./db/departments.txt");
	std::string s;
	while(getline(is, s)){
		if(id == (strToDepartment(s)).getId()){
			found = true;
			break;
		}
	}	
	if(found)
		std::cout << s << "\n";
	else
		std::cout << "Error: trazeni unos ne postoji\n";
}

void DepartmentDTO::del(int id){
	Department a;
	std::ifstream is;
	is.open("./db/departments.txt");
	std::string s;
	while(getline(is, s)){
		if(id == (strToDepartment(s)).getId()){
			deleteLine(s, "./db/departments.txt");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";	
}

void DepartmentDTO::update(Department a){
	std::ifstream is;
	is.open("./db/departments.txt");
	std::string s;
	while(getline(is, s)){
		if(a.getId() == (strToDepartment(s)).getId()){
			changeLine(s, departmentToStr(a), "./db/departments.txt");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";
}

#endif /* DEPARTMENTDTO_H */
