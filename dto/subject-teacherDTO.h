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
#endif
