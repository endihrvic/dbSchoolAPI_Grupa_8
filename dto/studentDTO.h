#ifndef STUDENTDTO_H
#define STUDENTDTO_H

#include "../student.h"
#include "../department.h"
#include "exchDelLine.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <sstream>


class StudentDTO
{
public:
	void save(Student);
	
	void read(int);
	void del(int);
	void update(Student);
	
};

Student strToStudents(std::string s){
	Student a;
	int b;
	std::stringstream ss;	
	ss << s;
	//setuj ID
	ss >> b;
	a.setId(b);
	ss.ignore(2); //", "
	//setuj firstName
	getline(ss, s, ',');
	a.setFirstName(s);
	ss.ignore(1); // " " u getline() je ','
	//setuj lastName
	getline(ss, s, ',');
	a.setLastName(s);
	ss.ignore(1);
	//setuj brithDate
	getline(ss, s, ',');
	a.setBirthDate(s);
	ss.ignore(1);
	//setuj email
	getline(ss, s, ',');
	a.setEmail(s);
	ss.ignore(1);
	//setuj gender
	getline(ss, s, ',');
	a.setGender(s);
	ss.ignore(1);
	//setuj jmbg
  ss>>b;
	a.setJmbg(b); 
	ss.ignore(2);
	//setuj departmentId
	ss >> b;
	a.setDepId(b);

	return a;
}

std::string StudentsToStr(Student a){
	std::string s;
	std::stringstream ss;
	ss << a.getId() << ", " << a.getFirstName() << ", " << a.getLastName() << ", " << a.getBirthDate() << ", " <<a.getEmail();
  ss<<", "<< a.getGender() <<", " << a.getJmbg() << ", " << a.getDepId() <<"\n";
	ss >> s;
	return s;
}

void StudentDTO::save(Student a){
	//preuzmi string iz filea 
	std::ifstream is;
	is.open("./db/students.txt");
	std::string s;
	while(getline(is, s)){
		if(a.getId() == (strToStudents(s)).getId())
			throw std::runtime_error("ID se vec koristi\n");
	}	
	is.close();
	//ukoliko nije doslo do greske, upisi objekat u file
	std::ofstream os;
	os.open("./db/students.txt");
	os << StudentsToStr(a);
	os.close();
}

void StudentDTO::read(int id){
	bool found = false;
	Student a;
	std::ifstream is;
	is.open("./db/students.txt");
	std::string s;
	while(getline(is, s)){
		if(id == (strToStudents(s)).getId()){
			found = true;
			break;
		}
	}	
	if(found)
		std::cout << s;
	else
		std::cout << "Error: trazeni unos ne postoji\n";
}

void StudentDTO::del(int id){
	Student a;
	std::ifstream is;
	is.open("./db/students.txt");
	std::string s;
	while(getline(is, s)){
		if(id == (strToStudents(s)).getId()){
			deleteLine(s, "./db/students.txt");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";	
}

void StudentDTO::update(Student a){
	std::ifstream is;
	is.open("./db/students.txt");
	std::string s;
	while(getline(is, s)){
		if(a.getId() == (strToStudents(s)).getId()){
			changeLine(s, StudentsToStr(a), "./db/students.txt");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";
}

#endif /* STUDENTDTO_H */
