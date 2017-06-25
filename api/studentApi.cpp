#include "studentApi.h"

void StudentApi::save(int id, std::string firstName, std::string lastName, std::string birthdate, std::string email, std::string gender, std::string jmbg, int departmentId){
	S.setId(id);
	S.setFirstName(firstName);
	S.setLastName(lastName);
	S.setBirthDate(birthdate);
	S.setEmail(email);
	S.setGender(gender);
	S.setJmbg(jmbg);
	S.setDepId(departmentId);
	s.save(S);
}

void StudentApi::save(int id, std::string firstName, std::string lastName, std::string birthdate, std::string email, std::string gender,std::string jmbg, Department depObject){
	S.setId(id);
	S.setFirstName(firstName);
	S.setLastName(lastName);
	S.setBirthDate(birthdate);
	S.setEmail(email);
	S.setGender(gender);
	S.setJmbg(jmbg);
	S.setDepId(depObject.getId());
	s.save(S,depObject);

}

void StudentApi::read(int id){
	s.read(id);
}

void StudentApi::del(int id){
	s.del(id);
}
void StudentApi::update(int id, std::string firstName, std::string lastName, std::string birthdate, std::string email, std::string gender, std::string jmbg, int departmentId){
	S.setId(id);
	S.setFirstName(firstName);
	S.setLastName(lastName);
	S.setBirthDate(birthdate);
	S.setEmail(email);
	S.setGender(gender);
	S.setJmbg(jmbg);
	S.setDepId(departmentId);
	s.update(S);
}

void StudentApi::update(int id, std::string firstName, std::string lastName, std::string birthdate, std::string email, std::string gender, std::string jmbg, Department depObject){
	S.setFirstName(firstName);
	S.setLastName(lastName);
	S.setBirthDate(birthdate);
	S.setEmail(email);
	S.setGender(gender);
	S.setJmbg(jmbg);
	S.setDepId(depObject.getId());
	s.update(S,depObject);

}
