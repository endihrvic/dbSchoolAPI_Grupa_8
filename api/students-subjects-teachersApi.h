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
	
	void save(Student studentId, Subject subjectId, Teacher teacherId, int evaluation, std::string date);
	
	void read(int studentId, int subjectId, int teacherId) const;
	
	void del(int studentId, int subjectId, int teacherId);
	
	void update(int studentId, int subjectId, int teacherId, int evaluation, std::string date);
	void update(Student studentId, Subject subjectId, Teacher teacherId, int evaluation, std::string date);
};
void StudentsSubjectsTeachersApi::save(int studentId, int subjectId, int teacherId, int evaluation, std::string date){
	
	S.setStudId(studentId);
	S.setSubId(subjectId);
	S.setTeachId(teacherId);
	S.setEval(evaluation);
	S.setDate(date);
	s.save(S);
}
void StudentsSubjectsTeachersApi::save(Student studentId, Subject subjectId, Teacher teacherId, int evaluation, std::string date){
	
	S.setStudId(studentId.getId());
	S.setSubId(subjectId.getId());
	S.setTeachId(teacherId.getId());
	S.setEval(evaluation);
	S.setDate(date);
	s.save(S,studentId, subjectId, teacherId);
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
	s.update(S);

}
void StudentsSubjectsTeachersApi::update(Student studentId, Subject subjectId, Teacher teacherId, int evaluation, std::string date){
	S.setStudId(studentId.getId());
	S.setSubId(subjectId.getId());
	S.setTeachId(teacherId.getId());
	S.setEval(evaluation);
	S.setDate(date);
	s.update(S,studentId, subjectId, teacherId);

}
#endif /* STUDENTS-SUBJECTS-TEACHERSAPI_H */
