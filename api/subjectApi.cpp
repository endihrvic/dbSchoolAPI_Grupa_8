#include "subjectApi.h"

void SubjectApi::save(int id, std::string name, int ects, std::string abbreviation){
	S.setId(id);
	S.setName(name);
	S.setEcts(ects);
	S.setAbbr(abbreviation);
	/*
	 *Spajanje atributa u jedan objekat koji ce se proslijediti dalje
	 */
	a.save(S);
}

void SubjectApi::read(int id){
	a.read(id);
}

void SubjectApi::del(int id){
	a.del(id);
}

void SubjectApi::update(int id, std::string name, int ects, std::string abbreviation){
	S.setId(id);
	S.setName(name);
	S.setEcts(ects);
	S.setAbbr(abbreviation);
	/*
	 *Spajanje atributa u jedan objekat koji ce se proslijediti dalje
	 */
	a.update(S);
}

