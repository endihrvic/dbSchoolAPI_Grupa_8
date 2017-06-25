#ifndef TEACHERDTO_H
#define TEACHERDTO_H

#include "../teacher.h"
#include "../department.h"
#include "departmentDTO.h"
#include "exchDelLine.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <sstream>


class TeacherDTO
{
public:
	void save(Teacher);
	void save(Teacher, Department);
	void read(int);
	void del(int);
	void update(Teacher);
	void update(Teacher, Department);
};

Teacher strToTeachers(std::string s);
std::string teachersToStr(Teacher a);

#endif /* TEACHERDTO_H */
