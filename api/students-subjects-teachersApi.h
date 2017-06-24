#ifndef STUDENTS-SUBJECTS-TEACHERSAPI_H
#define STUDENTS-SUBJECTS-TEACHERSAPI_H

#include "./teacher.h"
#include "./subject.h"
#include "./student.h"
#include "./students-subjects-teachers.h"
#include <string>

class StudentsSubjectsTeachersApi
{
private:
	StudentsSubjectsTeachersApi S;
	StudentsSubjectsTeachersApiDTO d;	

public:
	void save(int studentId, int subjectId, int teacherId, int evaluation, std::string date);
	/*
	 *Metod treba da u file "db/students-subjects-teachers.txt" 
	 *
	 */
	void read(int studentId, int subjectId, int teacherId, int evaluation, std::string date) const;
	/*
	 *Metod treba da procita 
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void del(int studentId, int subjectId, int teacherId, int evaluation, std::string date);
	/*
	 *Metod treba da obrise 
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void update(int studentId, int subjectId, int teacherId, int evaluation, std::string date);
	/*
	 *Metod treba da updateuje 
	 *Ukoliko department sa datim IDom ne postoji, javiti gresku.
	 */
	
};
#endif /* STUDENTS-SUBJECTS-TEACHERSAPI_H */
