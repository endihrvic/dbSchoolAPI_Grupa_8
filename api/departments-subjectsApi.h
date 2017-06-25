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
	void save(Department id, Subject subjectId, std::string studyYear, std::string studySemestar);
	
	void read(int id, int subjectId) const;
	
	void del(int id, int subjectId);
	
	void update(int id, int subjectId, std::string studyYear, std::string studySemestar);
	void update(Department id, Subject subjectId,, std::string studyYear, std::string studySemestar);
	
};

void DepartmentsSubjectsApi::save(int id, int subjectId, std::string studyYear, std::string studySemestar){
	D.setDepId(id);
	D.setSubId(subjectId);
	D.setStudYear(studyYear);
	D.setStudySem(studySemestar);
	d.save(D);
}

void DepartmentsSubjectsApi::save(Department id, Subject subjectId, std::string studyYear, std::string studySemestar){
	D.setDepId(id.getId());
	D.setSubId(subjectId.getId());
	D.setStudYear(studyYear);
	D.setStudySem(studySemestar);
	d.save(D,id,subjectId);
}

void DepartmentsSubjectsApi::read(int id, int subjectId) const{
	d.read(id,subjectId);

}

void DepartmentsSubjectsApi::del(int id, int subjectId){
	d.del(id,subjectId);
}

void DepartmentsSubjectsApi::update(int id, int subjectId, std::string studyYear, std::string studySemestar){
	D.setDepId(id);
	D.setSubId(subjectId);
	D.setStudYear(studyYear);
	D.setStudySem(studySemestar);
	d.update(D);

}
void DepartmentsSubjectsApi::update(Department id, Subject subjectId, std::string studyYear, std::string studySemestar){
	D.setDepId(id.getId());
	D.setSubId(subjectId.getId());
	D.setStudYear(studyYear);
	D.setStudySem(studySemestar);
	d.update(D,id,subjectId);

}
#endif /* DEPARTMENTS-SUBJECTSAPI_H */
