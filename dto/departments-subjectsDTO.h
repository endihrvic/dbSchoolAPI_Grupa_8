#ifndef _DEPARTMENTSSUBJECTSDTO_H_
#define _DEPARTMENTSSUBJECTSDTO_H_

#include "../departments-subjects.h"
#include "exchDelLine.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <sstream>


class DepartmentsSubjectsDTO
{
public:
	void save(DepartmentsSubjects);	
	void read(int,int);
	void del(int,int);
	void update(DepartmentsSubjects);
};

DepartmentsSubjects strToDepSub(std::string d){
	DepartmentsSubjects a;
	int b;
	std::stringstream ss;	
	ss << d;
	//setuj IDdep
	ss >> b;
	a.setDepId(b);
	ss.ignore(2); //ignorisi ", ", jer se iz streama uzimaju samo cifre
	//setuj IDsub
	ss >> b;
	a.setSubId(b);
	ss.ignore(2);
	//setuj year
	getline(ss, d, ',');
	a.setStudYear(d);
	ss.ignore(1);
	//setuj sem
	getline(ss, d);
	a.setStudySem(d);
	return a;
}

std::string depSubToStr(DepartmentsSubjects a){
	std::string s;
	std::stringstream ss;
	ss << a.getDepId() << ", " << a.getSubId()<<", "<<a.getStudYear()<<", "<<a.getStudySem()<<" \n";
	ss >> s;
	return s;
}

void DepartmentsSubjectsDTO::save(DepartmentsSubjects a){
	//preuzmi string iz filea 
	std::ifstream is;
	is.open("./db/departments-subjects.txt");
	std::string s;
getline(is,s);
	while(getline(is, s)){
		if(a.getDepId() == (strToDepSub(s)).getDepId())
			throw std::runtime_error("ID se vec koristi\n");
	}	
	is.close();
	//ukoliko nije doslo do greske, upisi objekat u file
	std::ofstream os;
	os.open("./db/departments-subjects.txt");
	os << depSubToStr(a);
	os.close();
}

void DepartmentsSubjectsDTO::read(int id, int subid){
	bool found = false;
	DepartmentsSubjects a;
	std::ifstream is;
	is.open("./db/departments-subjects.txt");
	std::string s;
getline(is,s);
	while(getline(is, s)){
		if(id == (strToDepSub(s)).getDepId() && subid==(strToDepSub(s)).getSubId()){
			found = true;
			break;
		}
	}	
	if(found)
		std::cout << s;
	else
		std::cout << "Error: trazeni unos ne postoji\n";
}

void DepartmentsSubjectsDTO::del(int id, int subid){
	DepartmentsSubjects a;
	std::ifstream is;
	is.open("./db/departments-subjects.txt");
	std::string s;
getline(is,s);
	while(getline(is, s)){
	if(id == (strToDepSub(s)).getDepId() && subid==(strToDepSub(s)).getSubId()){
				deleteLine(s, "./db/departments-subjects.txt");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";	
}

void DepartmentsSubjectsDTO::update(DepartmentsSubjects a){
	std::ifstream is;
	is.open("./db/departments-subjects.txt");
	std::string s;
getline(is,s);
	while(getline(is, s)){
		if(a.getDepId() == (strToDepSub(s)).getDepId()){
			changeLine(s, depSubToStr(a), "./db/departments-subjects.txt");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";
}

#endif /* DEPARTMENTS-SUBJECTSDTO_H */
