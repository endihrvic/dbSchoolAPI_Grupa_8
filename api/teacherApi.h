#ifndef TEACHERAPI_H
#define TEACHERAPI_H

#include "../teacher.h"
#include "../dto/teacherDTO.h"
#include "../department.h"
#include <string>


class TeacherApi
{
private:
	Teacher T;	
	TeacherDTO a;

public:
	void save(int id, std::string, std::string, std::string, std::string, std::string, std::string, std::string, int departmentId);
	/*
	 *Metod treba da u file "db/teachers.txt" snimi profesora sa novim ID brojem.
	 *Ukoliko profesor sa datim IDom vec postoji, javiti gresku.
	 *Ukoliko ne postoji department sa naznacenim IDom, javiti gresku.
	 */
	void save(int id, std::string, std::string, std::string, std::string, std::string, std::string, std::string, Department depObject);
	/*
	 *Metod treba da u file "db/teachers.txt" snimi profesora sa novim IDom.
	 *Ukoliko ID vec postoji u listi, javiti gresku.
	 *Ukoliko ID proslijedjenog Department objekta ne postoji u fajlu "db/departments.txt", 
	 *kreirati novi Department na osnovu proslijedjenog, a nakon toga kreirati novog profesora.
	 *Ukoliko ID departmenta postoji, a ostali podaci objekata nisu identicni, javiti gresku.
	 */
	void read(int id);
	/*
	 *Metod treba da procita profesora iz liste "db/teachers.txt" sa datim ID brojem.
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void del(int id);
	/*
	 *Metod treba da obrise profesora iz liste "db/teachers.txt" sa datim ID brojem.
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void update(int id, std::string, std::string, std::string, std::string, std::string, std::string, std::string, int departmentId);
	/*
	 *Metod treba da u fileu "db/teachers.txt" updateuje profesora sa vec postojecim ID brojem.
	 *Ukoliko profesor sa datim IDom ne postoji, javiti gresku.
	 *Ukoliko ne postoji department sa naznacenim IDom, javiti gresku.
	 */
	void update(int, std::string, std::string, std::string, std::string, std::string, std::string, std::string, Department);
	/*
	 *Metod treba da u fileu "db/teachers.txt" updateuje profesora sa novim IDom.
	 *Ukoliko ID ne postoji u listi, javiti gresku.
	 *Ukoliko ID proslijedjenog Department objekta ne postoji u fajlu "db/departments.txt", 
	 *kreirati novi Department na osnovu proslijedjenog, a nakon toga updateovati novog profesora.
	 *Ukoliko ID departmenta postoji, a ostali podaci objekata nisu identicni, javiti gresku.
	 */
};

#endif /* TEACHERAPI_H */
