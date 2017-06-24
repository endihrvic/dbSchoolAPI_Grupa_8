#ifndef STUDENTAPI_H
#define STUDENTAPI_H

#include "./student.h"
#include "./department.h"
#include <string>


class StudentApi
{
private:
	Student S;	

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

#endif /* STUDENTAPI_H */

