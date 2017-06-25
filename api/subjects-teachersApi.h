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
	void save(Subject subjectId, Teacher teacherId);
	
	void read(int subjectId) const;
	
	void del(int subjectId);
	
	void update(int subjectId, int teacherId);
	void update(Subject subjectId, Teacher teacherId);
	
	
};
void SubjectsTeachersApi::save(int subjectId, int teacherId){
	S.setSubId(subjectId);
	S.setTeacdId(teacherId);
	s.save(s);
}

void SubjectsTeachersApi::save(Subject subjectId, Teacher teacherId){
	S.setSubId(subjectId.getId());
	S.setTeacdId(teacherId.getId());
	s.save(s,subjectId, teacherId);
}

void SubjectsTeachersApi::read(int subjectId) const{
	s.read(subjectId);

}

void SubjectsTeachersApi::del(int subjectId){
	s.del(subjectId);
}

void SubjectsTeachersApi::update(int subjectId, int teacherId){
	S.setSubId(subjectId);
	S.setTeacdId(teacherId);
	s.update(s);

}
void SubjectsTeachersApi::update(Subject subjectId, Teacher teacherId){
	S.setSubId(subjectId.getId());
	S.setTeacdId(teacherId.getId());
	s.update(s,subjectId, teacherId);

}
#endif /* SUBJECTS-TEACHERSAPI_H */
