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

Subject strToSubject(std::string s);
std::string subjectToStr(Subject a);

#endif /* SUBJECTDTO_H */
