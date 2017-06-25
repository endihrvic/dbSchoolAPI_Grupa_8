#include "teacherApi.h"

void TeacherApi::save(int id, std::string firstName, std::string lastName, std::string birthdate, std::string email, std::string gender, std::string jmbg, std::string title, int departmentId){
	T.setId(id);
	T.setFirstName(firstName);
	T.setLastName(lastName);
	T.setBirthDate(birthdate);
	T.setGender(gender);
	T.setJmbg(jmbg);
	T.setTitle(title);
	T.setDepId(departmentId);

	a.save(T);
}

void TeacherApi::save(int id, std::string firstName, std::string lastName, std::string birthdate, std::string email, std::string gender, std::string jmbg, std::string title, Department depObject){
	T.setId(id);
	T.setFirstName(firstName);
	T.setLastName(lastName);
	T.setBirthDate(birthdate);
	T.setGender(gender);
	T.setJmbg(jmbg);
	T.setTitle(title);
	T.setDepId(depObject.getId());
	
	a.save(T, depObject);
}

void TeacherApi::read(int id){
	a.read(id);
}

void TeacherApi::del(int id){
	a.del(id);
}

void TeacherApi::update(int id, std::string firstName, std::string lastName, std::string birthdate, std::string email, std::string gender, std::string jmbg, std::string title, int departmentId){
	T.setId(id);
	T.setFirstName(firstName);
	T.setLastName(lastName);
	T.setBirthDate(birthdate);
	T.setGender(gender);
	T.setJmbg(jmbg);
	T.setTitle(title);
	T.setDepId(departmentId);

	a.update(T);
}

void TeacherApi::update(int id, std::string firstName, std::string lastName, std::string birthdate, std::string email, std::string gender, std::string jmbg, std::string title, Department depObject){
	T.setId(id);
	T.setFirstName(firstName);
	T.setLastName(lastName);
	T.setBirthDate(birthdate);
	T.setGender(gender);
	T.setJmbg(jmbg);
	T.setTitle(title);
	T.setDepId(depObject.getId());
	
	a.update(T, depObject);
}

