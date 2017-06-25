#ifndef SUBJECTS-TEACHERS_H
#define SUBJECTS-TEACHERS_H

#include "../subjects-teachers.h"
#include "exchDelLine.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <sstream>


class subTeachersDTO
{
public:
	void save(subTeachers);	
	void read(int);
	void del(int);
	void update(subTeachers);
};

subTeachers strTosubTeachers(std::string d){
	subTeachers a;
	int b;
	std::stringstream ss;	
	ss << d;
	//setuj ID
	ss >> b;
	a.setSubId(b);
	ss.ignore(2); 
	//setuj ID
	ss >> b;
	a.setTeachId(b);
	return a;
}

std::string subTeachersToStr(subTeachers a){
	std::string s;
	std::stringstream ss;
	ss << a.getSubId() << ", " << a.getTeachId();
	ss >> s;
	return s;
}
void subTeachersDTO::save(subTeachers a){
	//preuzmi string iz filea 
	std::ifstream is;
	is.open("./db/subjects-teachers.h");
	std::string s;
  getline(is,s);
	while(getline(is, s)){
		if(a.getSubId() == (strTosubTeachers(s)).getSubId())
			throw std::runtime_error("ID se vec koristi\n");
	}	
	is.close();
	//ukoliko nije doslo do greske, upisi objekat u file
	std::ofstream os;
	os.open("./db/subjects-teachers.h");
	os << subTeachersToStr(a);
	os.close();
}

void subTeachersDTO::read(int id){
	bool found = false;
	subTeachers a;
	std::ifstream is;
	is.open("./db/subjects-teachers.h");
	std::string s;
	getline(is,s);
	while(getline(is, s)){
		if(id == (strTosubTeachers(s)).getSubId()){
			found = true;
			break;
		}
	}	
	if(found)
		std::cout << s;
	else
		std::cout << "Error: trazeni unos ne postoji\n";
}

void subTeachersDTO::del(int id){
	subTeachers a;
	std::ifstream is;
	is.open("./db/subjects-teachers.h");
	std::string s;
	getline(is,s);
	while(getline(is, s)){
		if(id == (strTosubTeachers(s)).getSubId()){
			deleteLine(s, "./db/subjects-teachers.h");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";	
}

void subTeachersDTO::update(subTeachers a){
	std::ifstream is;
	is.open("./db/subjects-teachers.h");
	std::string s;
getline(is,s);
	while(getline(is, s)){
		if(a.getSubId() == (strTosubTeachers(s)).getSubId()){
			changeLine(s, subTeachersToStr(a), "./db/subjects-teachers.h");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";
}
#endif
