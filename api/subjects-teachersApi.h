#ifndef SUBJECTS-TEACHERSAPI_H
#define SUBJECTS-TEACHERSAPI_H

#include "./teacher.h"
#include "./subject.h"
#include "./subjects-teachers.h"
#include <string>

class SubjectsTeachersApi
{
private:
	SubjectsTeachersApi S;
	SubjectsTeachersApiDTO d;	

public:
	void save(int subjectId, int teacherId);
	/*
	 *Metod treba da u file "db/subjects-teachers.txt" 
	 *
	 */
	void read(int subjectId, int teacherId) const;
	/*
	 *Metod treba da procita 
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void del(int subjectId, int teacherId);
	/*
	 *Metod treba da obrise 
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void update(int subjectId, int teacherId);
	/*
	 *Metod treba da updateuje 
	 *Ukoliko department sa datim IDom ne postoji, javiti gresku.
	 */
	
};
#endif /* SUBJECTS-TEACHERSAPI_H */
