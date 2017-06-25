#ifndef STUDENTS-SUBJECTS-TEACHERS_H
#define STUDENTS-SUBJECTS-TEACHERS_H

#include "../students-subjects-teachers.h"
#include "exchDelLine.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <sstream>


class studSubTeachDTO
{
public:
	void save(studSubTeach);	
	void read(int,int);
	void del(int,int);
	void update(studSubTeach);
};

studSubTeach strTostudSubTeach(std::string d){
	studSubTeach a;
	int b;
	std::stringstream ss;	
	ss << d;
	//setuj stud ID
	ss >> b;
	a.setStudId(b);
	ss.ignore(2); 
	//setuj subID
	ss >> b;
	a.setSubId(b);
	ss.ignore(2);
	//setuj teachID
	ss >> b;
	a.setTeachId(b);
	ss.ignore(2);
	//setuj eval
	ss >> b;
	a.setEval(b);
	ss.ignore(2);
	//setuj date
	getline(ss, d);
	a.setDate(d);
	return a;
}

std::string studSubTeachToStr(studSubTeach a){
	std::string s;
	std::stringstream ss;
	ss << a.getStudId() << ", " << a.getSubId()<<", "<<a.getTeachId()<<", "<<a.getEval()<<", "<<a.getDate()<<"\n";
	ss >> s;
	return s;
}
#endif
