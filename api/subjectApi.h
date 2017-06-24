#ifndef SUBJECTAPI_H
#define SUBJECTAPI_H

#include "./student.h"
#include "./department.h"
#include "./subject.h"
#include <string>


class SubjectApi
{
private:
	Subject S;	

public:
	void save(int id, std::string , int ects, std::string abbreviation);
	/*
	 *Metod treba da u file "db/subjects.txt" snimi predmet sa novim ID brojem.
	 *Ukoliko department sa datim IDom vec postoji, javiti gresku.
	 */
	void read(int id) const;
	/*
	 *Metod treba da procita predmet iz liste "db/subjects.txt" sa datim ID brojem.
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void del(int id);
	/*
	 *Metod treba da obrise predmet iz liste "db/subjects.txt" sa datim ID brojem.
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void update(int id, std::string);
	/*
	 *Metod treba da u fileu "db/subjects.txt" updateuje predmet sa vec postojecim ID brojem.
	 *Ukoliko student sa datim IDom ne postoji, javiti gresku.
	 */
	
};

#endif /* SUBJECTAPI_H */
