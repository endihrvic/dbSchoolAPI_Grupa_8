#ifndef STUDENTAPI_H
#define STUDENTAPI_H

#include "./student.h"
#include "./dto/studentDTO.h"
#include "./department.h"
#include <string>


class StudentApi
{
private:
	Student S;
	StudentDto s;	

public:
	void save(int id, std::string, std::string, std::string, std::string, std::string, std::string, int departmentId);
	/*
	 *Metod treba da u file "db/students.txt" snimi studenta sa novim ID brojem.
	 *Ukoliko student sa datim IDom vec postoji, javiti gresku.
	 *Ukoliko ne postoji department sa naznacenim IDom, javiti gresku.
	 */
	void save(int id, std::string, std::string, std::string, std::string, std::string, std::string, Department depObject);
	/*
	 *Metod treba da u file "db/students.txt" snimi studenta sa novim IDom.
	 *Ukoliko ID vec postoji u listi, javiti gresku.
	 *Ukoliko ID proslijedjenog Department objekta ne postoji u fajlu "db/departments.txt", 
	 *kreirati novi Department na osnovu proslijedjenog, a nakon toga kreirati novog studenta.
	 *Ukoliko ID departmenta postoji, a ostali podaci objekata nisu identicni, javiti gresku.
	 */
	void read(int id) const;
	/*
	 *Metod treba da procita studenta iz liste "db/students.txt" sa datim ID brojem.
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void del(int id);
	/*
	 *Metod treba da obrise studenta iz liste "db/students.txt" sa datim ID brojem.
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void update(int id, std::string, std::string, std::string, std::string, std::string, std::string, int departmentId);
	/*
	 *Metod treba da u fileu "db/students.txt" updateuje studenta sa vec postojecim ID brojem.
	 *Ukoliko student sa datim IDom ne postoji, javiti gresku.
	 *Ukoliko ne postoji department sa naznacenim IDom, javiti gresku.
	 */
	void update(int, std::string, std::string, std::string, std::string, std::string, std::string, Department);
	/*
	 *Metod treba da u fileu "db/students.txt" updateuje studenta sa novim IDom.
	 *Ukoliko ID ne postoji u listi, javiti gresku.
	 *Ukoliko ID proslijedjenog Department objekta ne postoji u fajlu "db/departments.txt", 
	 *kreirati novi Department na osnovu proslijedjenog, a nakon toga updateovati novog studenta.
	 *Ukoliko ID departmenta postoji, a ostali podaci objekata nisu identicni, javiti gresku.
	 */
};
void StudentApi::save(int id, std::string fristName, std::string lastName, std::string brithdate, std::string email, std::string gender, std::string jmbg, int departmentId){
	S.setId(id);
	S.setFristName(fristName);
	S.setLastName(lastName);
	S.setBrithDate(brithdate);
	S.setEmail(email);
	S.setGender(gender);
	S.setJmbg(jmbg);
	S.setDepId(departmentId);
	s.save(S);
}

void StudentApi::save(int id, std::string fristName, std::string lastName, std::string brithdate, std::string email, std::string gender, std::string jmbg, Department depObject){
S.setFristName(fristName);
	S.setLastName(lastName);
	S.setBrithDate(brithdate);
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
void StudentApi::update(int id, std::string fristName, std::string lastName, std::string brithdate, std::string email, std::string gender, std::string jmbg, int departmentId){
	S.setId(id);
	S.setFristName(fristName);
	S.setLastName(lastName);
	S.setBrithDate(brithdate);
	S.setEmail(email);
	S.setGender(gender);
	S.setJmbg(jmbg);
	S.setDepId(departmentId);
	s.update(S);
}

void StudentApi::save(int id, std::string fristName, std::string lastName, std::string brithdate, std::string email, std::string gender, std::string jmbg, Department depObject){
S.setId(id);
	S.setFristName(fristName);
	S.setLastName(lastName);
	S.setBrithDate(brithdate);
	S.setEmail(email);
	S.setGender(gender);
	S.setJmbg(jmbg);
	S.setDepId(depObject.getId());
	s.update(S,depObject);

}


#endif /* STUDENTAPI_H */

