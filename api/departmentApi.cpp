#include "departmentApi.h"

void DepartmentApi::save(int id, std::string name){
	D.setId(id);
	D.setName(name);
	/*
	 *Spajanje atributa u jedan objekat koji ce se proslijediti dalje
	 */
	d.save(D);
}

void DepartmentApi::read(int id){
	d.read(id);
}

void DepartmentApi::del(int id){
	d.del(id);
}

void DepartmentApi::update(int id, std::string name){
	D.setId(id);
	D.setName(name);
	/*
	 *Spajanje atributa u jedan objekat koji ce se proslijediti dalje
	 */
	d.update(D);
}


