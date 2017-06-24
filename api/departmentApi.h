#ifndef DEPARTMENTAPI_H
#define DEPARTMENTAPI_H

#include "./student.h"
#include "./department.h"
#include <string>


class DepartmentApi
{
private:
	Department D;	

public:
	void save(int id, std::string);
	/*
	 *Metod treba da u file "db/departments.txt" snimi department sa novim ID brojem.
	 *Ukoliko department sa datim IDom vec postoji, javiti gresku.
	 */
	void read(int id) const;
	/*
	 *Metod treba da procita department iz liste "db/departments.txt" sa datim ID brojem.
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void del(int id);
	/*
	 *Metod treba da obrise department iz liste "db/departments.txt" sa datim ID brojem.
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void update(int id, std::string);
	/*
	 *Metod treba da u fileu "db/departments.txt" updateuje department sa vec postojecim ID brojem.
	 *Ukoliko department sa datim IDom ne postoji, javiti gresku.
	 */
	
};

#endif /* DEPARTMENTAPI_H */

