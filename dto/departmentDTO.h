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

Department strToSubject(std::string d){
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

std::string subjectToStr(Department a){
	std::string s;
	std::stringstream ss;
	ss << a.getId() << ", " << a.getName();
	ss >> s;
	return s;
}

void DepartmentDTO::save(Department a){
	//preuzmi string iz filea 
	std::ifstream is;
	is.open("./db/departments.txt");
	std::string s;
	while(getline(is, s)){
		if(a.getId() == (strToSubject(s)).getId())
			throw std::runtime_error("ID se vec koristi\n");
	}	
	is.close();
	//ukoliko nije doslo do greske, upisi objekat u file
	std::ofstream os;
	os.open("./db/departments.txt");
	os << subjectToStr(a);
	os.close();
}

void DepartmentDTO::read(int id){
	bool found = false;
	Department a;
	std::ifstream is;
	is.open("./db/departments.txt");
	std::string s;
	while(getline(is, s)){
		if(id == (strToSubject(s)).getId()){
			found = true;
			break;
		}
	}	
	if(found)
		std::cout << s;
	else
		std::cout << "Error: trazeni unos ne postoji\n";
}

void DepartmentDTO::del(int id){
	Department a;
	std::ifstream is;
	is.open("./db/departments.txt");
	std::string s;
	while(getline(is, s)){
		if(id == (strToSubject(s)).getId()){
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
		if(a.getId() == (strToSubject(s)).getId()){
			changeLine(s, subjectToStr(a), "./db/departments.txt");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";
}

#endif /* DEPARTMENTDTO_H */
