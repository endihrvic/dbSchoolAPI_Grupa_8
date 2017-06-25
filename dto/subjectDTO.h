#ifndef SUBJECTDTO_H
#define SUBJECTDTO_H

#include "../subject.h"
#include "exchDelLine.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <sstream>


class SubjectDTO
{
public:
	void save(Subject);	
	void read(int);
	void del(int);
	void update(Subject);
};

Subject strToSubject(std::string s){
	Subject a;
	int b;
	std::stringstream ss;	
	ss << s;
	//setuj clan Id od a
	ss >> b;
	a.setId(b);
	ss.ignore(2); //ignorisi ", ", jer se iz streama uzimaju samo cifre
	//setuj Name
	getline(ss, s, ',');
	a.setName(s);
	ss.ignore(1); //ignorisi " " jer smo u getline() naveli delimiter ','
	//setuj Ects
	ss >> b;
	a.setEcts(b);
	ss.ignore(2);
	//setuj Abbreviation
	getline(ss, s);
	a.setAbbr(s);

	return a;
}

std::string subjectToStr(Subject a){
	std::string s;
	std::stringstream ss;
	ss << a.getId() << ", " << a.getName() << ", " << a.getEtcs() << ", " << a.getAbbr();
	ss >> s;
	return s;
}

void SubjectDTO::save(Subject a){
	//preuzmi string iz filea 
	std::ifstream is;
	is.open("./db/subjects.txt");
	std::string s;
  getline(is,s);
	while(getline(is, s)){
		if(a.getId() == (strToSubject(s)).getId())
			throw std::runtime_error("ID se vec koristi\n");
	}	
	is.close();
	//ukoliko nije doslo do greske, upisi objekat u file
	std::ofstream os;
	os.open("./db/subjects.txt");
	os << subjectToStr(a);
	os.close();
}

void SubjectDTO::read(int id){
	bool found = false;
	Subject a;
	std::ifstream is;
	is.open("./db/subjects.txt");
	std::string s;
getline(is,s);
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

void SubjectDTO::del(int id){
	Subject a;
	std::ifstream is;
	is.open("./db/subjects.txt");
	std::string s;
getline(is,s);
	while(getline(is, s)){
		if(id == (strToSubject(s)).getId()){
			deleteLine(s, "./db/subjects.txt");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";	
}

void SubjectDTO::update(Subject a){
	std::ifstream is;
	is.open("./db/subjects.txt");
	std::string s;
getline(is,s);
	while(getline(is, s)){
		if(a.getId() == (strToSubject(s)).getId()){
			changeLine(s, subjectToStr(a), "./db/subjects.txt");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";
}

#endif /* SUBJECTDTO_H */
