#ifndef STUDENTDTO_H
#define STUDENTDTO_H

#include "../student.h"
#include "../department.h"
#include "departmentDTO.h"
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
	void save(Student, Department);	
	void read(int);
	void del(int);
	void update(Student);
	void update(Student, Department);
};

Student strToStudents(std::string s);
std::string StudentsToStr(Student a);

#endif /* STUDENTDTO_H */
