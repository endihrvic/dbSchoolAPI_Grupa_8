#ifndef DEPARTMENTS-SUBJECTSAPI_H
#define DEPARTMENTS-SUBJECTSAPI_H

#include "./department.h"
#include "./subject.h"
#include "./departments-subjects.h"
#include <string>

class DepartmentsSubjectsApi
{
private:
	DepartmentsSubjectsApiApi D;
	DepartmentsSubjectsApiDTO d;	

public:
	void save(int id, int subjectId, std::string studyYear, std::string studySemestar);
	/*
	 *Metod treba da u file "db/departments-subjects.txt" 
	 *
	 */
	void read(int id, int subjectId) const;
	/*
	 *Metod treba da procita 
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void del(int id, int subjectId);
	/*
	 *Metod treba da obrise 
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void update(int id, int subjectId, std::string studyYear, std::string studySemestar);
	/*
	 *Metod treba da updateuje 
	 *Ukoliko department sa datim IDom ne postoji, javiti gresku.
	 */
	
};
#endif /* DEPARTMENTS-SUBJECTSAPI_H */
