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
	StudentsSubjectsTeachersApiDTO s;	

public:
	void save(int studentId, int subjectId, int teacherId, int evaluation, std::string date);
	/*
	 *Metod treba da u file "db/students-subjects-teachers.txt" 
	 *
	 */
	void read(int studentId, int subjectId, int teacherId) const;
	/*
	 *Metod treba da procita 
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void del(int studentId, int subjectId, int teacherId);
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
void StudentsSubjectsTeachersApi::save(int studentId, int subjectId, int teacherId, int evaluation, std::string date){
	
	S.setStudId(studentId);
	S.setSubId(subjectId);
	S.setTeachId(teacherId);
	S.setEval(evaluation);
	S.setDate(date);
	s.save(S)
}

void StudentsSubjectsTeachersApi::read(int studentId, int subjectId, int teacherId) const{
	d.read(studentId,subjectId,teacherId);

}

void StudentsSubjectsTeachersApi::del(int studentId, int subjectId, int teacherId){
	s.del(studentId,subjectId,teacherId);
}

void StudentsSubjectsTeachersApi::update(int studentId, int subjectId, int teacherId, int evaluation, std::string date){
	S.setStudId(studentId);
	S.setSubId(subjectId);
	S.setTeachId(teacherId);
	S.setEval(evaluation);
	S.setDate(date);
	s.update(S)

}
#endif /* STUDENTS-SUBJECTS-TEACHERSAPI_H */
