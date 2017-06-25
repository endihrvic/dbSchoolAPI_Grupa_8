#ifndef SUBJECTAPI_H
#define SUBJECTAPI_H

#include "../subject.h"
#include "../dto/subjectDTO.h"
#include <string>
#include <stdexcept>

class SubjectApi
{
private:
	Subject S;
	SubjectDTO a;
public:
	void save(int id, std::string , int, std::string);
	/*
	 *Metod treba da u file "db/subjects.txt" snimi predmet sa novim ID brojem.
	 *Ukoliko department sa datim IDom vec postoji, javiti gresku.
	 */
	void read(int id);
	/*
	 *Metod treba da procita predmet iz liste "db/subjects.txt" sa datim ID brojem.
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void del(int id);
	/*
	 *Metod treba da obrise predmet iz liste "db/subjects.txt" sa datim ID brojem.
	 *Ukoliko ID ne postoji u listi, generirati gresku.
	 */
	void update(int id, std::string, int, std::string);
	/*
	 *Metod treba da u fileu "db/subjects.txt" updateuje predmet sa vec postojecim ID brojem.
	 *Ukoliko student sa datim IDom ne postoji, javiti gresku.
	 */	
};

#endif /* SUBJECTAPI_H */
