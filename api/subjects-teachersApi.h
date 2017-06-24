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
	SubjectsTeachersApiDTO s;	

public:
	void save(int subjectId, int teacherId);
	/*
	 *Metod treba da u file "db/subjects-teachers.txt" 
	 *
	 */
	void read() const;
	/*
	 *Metod treba da procita 
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void del();
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
void SubjectsTeachersApi::save(int subjectId, int teacherId){
	S.setSubId(subjectId);
	S.setTeacdId(teacherId);
	s.save(s)
}

void SubjectsTeachersApi::read() const{
	

}

void SubjectsTeachersApi::del(){
	
}

void SubjectsTeachersApi::update(int subjectId, int teacherId){
	S.setSubId(subjectId);
	S.setTeacdId(teacherId);
	s.update(s)

}
#endif /* SUBJECTS-TEACHERSAPI_H */
