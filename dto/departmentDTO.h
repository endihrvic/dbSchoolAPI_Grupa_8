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

Department strToDepartment(std::string d);
std::string departmentToStr(Department a);

#endif /* DEPARTMENTDTO_H */
